//! Licensed to the .NET Foundation under one or more agreements.
//! The .NET Foundation licenses this file to you under the MIT license.

// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
const VoidPtrNull = 0;

// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
const SURROGATE_HIGHER_START = "\uD800";
const SURROGATE_HIGHER_END = "\uDBFF";
const SURROGATE_LOWER_START = "\uDC00";
const SURROGATE_LOWER_END = "\uDFFF";
const OUTER_SEPARATOR = "##";
const INNER_SEPARATOR = "||";
function normalizeLocale(locale) {
    if (!locale)
        return undefined;
    try {
        locale = locale.toLocaleLowerCase();
        if (locale.includes("zh")) {
            // browser does not recognize "zh-chs" and "zh-cht" as equivalents of "zh-HANS" "zh-HANT", we are helping, otherwise
            // it would throw on getCanonicalLocales with "RangeError: Incorrect locale information provided"
            locale = locale.replace("chs", "HANS").replace("cht", "HANT");
        }
        const canonicalLocales = Intl.getCanonicalLocales(locale.replace("_", "-"));
        return canonicalLocales.length > 0 ? canonicalLocales[0] : undefined;
    }
    catch (_a) {
        return undefined;
    }
}
function isSurrogate(str, startIdx) {
    return SURROGATE_HIGHER_START <= str[startIdx] &&
        str[startIdx] <= SURROGATE_HIGHER_END &&
        startIdx + 1 < str.length &&
        SURROGATE_LOWER_START <= str[startIdx + 1] &&
        str[startIdx + 1] <= SURROGATE_LOWER_END;
}

// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
/* eslint-disable no-inner-declarations */
const MONTH_CODE = "MMMM";
const YEAR_CODE = "yyyy";
const DAY_CODE = "d";
const WEEKDAY_CODE = "dddd";
const keyWords$1 = [MONTH_CODE, YEAR_CODE, DAY_CODE, WEEKDAY_CODE];
// this function joins all calendar info with OUTER_SEPARATOR into one string and returns it back to managed code
function mono_wasm_get_calendar_info(culture, cultureLength, calendarId, dst, dstMaxLength, dstLength) {
    try {
        const cultureName = runtimeHelpers.utf16ToString(culture, (culture + 2 * cultureLength));
        const locale = cultureName ? cultureName : undefined;
        const calendarInfo = {
            EnglishName: "",
            YearMonth: "",
            MonthDay: "",
            LongDates: "",
            ShortDates: "",
            EraNames: "",
            AbbreviatedEraNames: "",
            DayNames: "",
            AbbreviatedDayNames: "",
            ShortestDayNames: "",
            MonthNames: "",
            AbbreviatedMonthNames: "",
            MonthGenitiveNames: "",
            AbbrevMonthGenitiveNames: "",
        };
        const date = new Date(999, 10, 22); // Fri Nov 22 0999 00:00:00 GMT+0124 (Central European Standard Time)
        calendarInfo.EnglishName = getCalendarName(locale);
        const dayNames = getDayNames(locale);
        calendarInfo.DayNames = dayNames.long.join(INNER_SEPARATOR);
        calendarInfo.AbbreviatedDayNames = dayNames.abbreviated.join(INNER_SEPARATOR);
        calendarInfo.ShortestDayNames = dayNames.shortest.join(INNER_SEPARATOR);
        const monthNames = getMonthNames(locale);
        calendarInfo.MonthNames = monthNames.long.join(INNER_SEPARATOR);
        calendarInfo.AbbreviatedMonthNames = monthNames.abbreviated.join(INNER_SEPARATOR);
        calendarInfo.MonthGenitiveNames = monthNames.longGenitive.join(INNER_SEPARATOR);
        calendarInfo.AbbrevMonthGenitiveNames = monthNames.abbreviatedGenitive.join(INNER_SEPARATOR);
        calendarInfo.YearMonth = getMonthYearPattern(locale, date);
        calendarInfo.MonthDay = getMonthDayPattern(locale, date);
        calendarInfo.ShortDates = getShortDatePattern(locale);
        calendarInfo.LongDates = getLongDatePattern(locale, date);
        const eraNames = getEraNames(date, locale, calendarId);
        calendarInfo.EraNames = eraNames.eraNames;
        calendarInfo.AbbreviatedEraNames = eraNames.abbreviatedEraNames;
        const result = Object.values(calendarInfo).join(OUTER_SEPARATOR);
        if (result.length > dstMaxLength) {
            throw new Error(`Calendar info exceeds length of ${dstMaxLength}.`);
        }
        runtimeHelpers.stringToUTF16(dst, dst + 2 * result.length, result);
        runtimeHelpers.setI32(dstLength, result.length);
        return VoidPtrNull;
    }
    catch (ex) {
        return runtimeHelpers.stringToUTF16Ptr(ex.toString());
    }
}
function getCalendarName(locale) {
    const calendars = getCalendarInfo(locale);
    if (!calendars || calendars.length == 0)
        return "";
    return calendars[0];
}
function getCalendarInfo(locale) {
    try {
        // most tools have it implemented as a property
        return new Intl.Locale(locale).calendars;
    }
    catch (_a) {
        try {
            // but a few use methods, which is the preferred way
            return new Intl.Locale(locale).getCalendars();
        }
        catch (_b) {
            return undefined;
        }
    }
}
function getMonthYearPattern(locale, date) {
    let pattern = date.toLocaleDateString(locale, { year: "numeric", month: "long" }).toLowerCase();
    // pattern has month name as string or as number
    const monthName = date.toLocaleString(locale, { month: "long" }).toLowerCase().trim();
    if (monthName.charAt(monthName.length - 1) == "\u6708") {
        // Chineese-like patterns:
        return "yyyy\u5e74M\u6708";
    }
    pattern = pattern.replace(monthName, MONTH_CODE);
    pattern = pattern.replace("999", YEAR_CODE);
    // sometimes the number is localized and the above does not have an effect
    const yearStr = date.toLocaleDateString(locale, { year: "numeric" });
    return pattern.replace(yearStr, YEAR_CODE);
}
function getMonthDayPattern(locale, date) {
    let pattern = date.toLocaleDateString(locale, { month: "long", day: "numeric" }).toLowerCase();
    // pattern has month name as string or as number
    const monthName = date.toLocaleString(locale, { month: "long" }).toLowerCase().trim();
    if (monthName.charAt(monthName.length - 1) == "\u6708") {
        // Chineese-like patterns:
        return "M\u6708d\u65e5";
    }
    const formatWithoutMonthName = new Intl.DateTimeFormat(locale, { day: "numeric" });
    const replacedMonthName = getGenitiveForName(date, pattern, monthName, formatWithoutMonthName);
    pattern = pattern.replace(replacedMonthName, MONTH_CODE);
    pattern = pattern.replace("22", DAY_CODE);
    const dayStr = formatWithoutMonthName.format(date);
    return pattern.replace(dayStr, DAY_CODE);
}
function getShortDatePattern(locale) {
    if ((locale === null || locale === void 0 ? void 0 : locale.substring(0, 2)) == "fa") {
        // persian calendar is shifted and it has no lapping dates with
        // arabic and gregorian calendars, so that both day and month would be < 10
        return "yyyy/M/d";
    }
    const year = 2014;
    const month = 1;
    const day = 2;
    const date = new Date(year, month - 1, day); // arabic: 1/3/1435
    const longYearStr = "2014";
    const shortYearStr = "14";
    const longMonthStr = "01";
    const shortMonthStr = "1";
    const longDayStr = "02";
    const shortDayStr = "2";
    let pattern = date.toLocaleDateString(locale, { dateStyle: "short" });
    // each date part might be in localized numbers or standard arabic numbers
    // toLocaleDateString returns not compatible data,
    // e.g. { dateStyle: "short" } sometimes contains localized year number
    // while { year: "numeric" } contains non-localized year number and vice versa
    if (pattern.includes(shortYearStr)) {
        pattern = pattern.replace(longYearStr, YEAR_CODE);
        pattern = pattern.replace(shortYearStr, YEAR_CODE);
    }
    else {
        const yearStr = date.toLocaleDateString(locale, { year: "numeric" });
        const yearStrShort = yearStr.substring(yearStr.length - 2, yearStr.length);
        pattern = pattern.replace(yearStr, YEAR_CODE);
        if (yearStrShort)
            pattern = pattern.replace(yearStrShort, YEAR_CODE);
    }
    if (pattern.includes(shortMonthStr)) {
        pattern = pattern.replace(longMonthStr, "MM");
        pattern = pattern.replace(shortMonthStr, "M");
    }
    else {
        const monthStr = date.toLocaleDateString(locale, { month: "numeric" });
        const localizedMonthCode = monthStr.length == 1 ? "M" : "MM";
        pattern = pattern.replace(monthStr, localizedMonthCode);
    }
    if (pattern.includes(shortDayStr)) {
        pattern = pattern.replace(longDayStr, "dd");
        pattern = pattern.replace(shortDayStr, "d");
    }
    else {
        const dayStr = date.toLocaleDateString(locale, { day: "numeric" });
        const localizedDayCode = dayStr.length == 1 ? "d" : "dd";
        pattern = pattern.replace(dayStr, localizedDayCode);
    }
    return pattern;
}
function getLongDatePattern(locale, date) {
    if (locale == "th-TH") {
        // cannot be caught with regexes
        return "ddddที่ d MMMM g yyyy";
    }
    let pattern = new Intl.DateTimeFormat(locale, { weekday: "long", year: "numeric", month: "long", day: "numeric" }).format(date).toLowerCase();
    const monthName = date.toLocaleString(locale, { month: "long" }).trim().toLowerCase();
    // pattern has month name as string or as number
    const monthSuffix = monthName.charAt(monthName.length - 1);
    if (monthSuffix == "\u6708" || monthSuffix == "\uc6d4") {
        // Asian-like patterns:
        const shortMonthName = date.toLocaleString(locale, { month: "short" });
        pattern = pattern.replace(shortMonthName, `M${monthSuffix}`);
    }
    else {
        const replacedMonthName = getGenitiveForName(date, pattern, monthName, new Intl.DateTimeFormat(locale, { weekday: "long", year: "numeric", day: "numeric" }));
        pattern = pattern.replace(replacedMonthName, MONTH_CODE);
    }
    pattern = pattern.replace("999", YEAR_CODE);
    // sometimes the number is localized and the above does not have an effect,
    // so additionally, we need to do:
    const yearStr = date.toLocaleDateString(locale, { year: "numeric" });
    pattern = pattern.replace(yearStr, YEAR_CODE);
    const weekday = date.toLocaleDateString(locale, { weekday: "long" }).toLowerCase();
    const replacedWeekday = getGenitiveForName(date, pattern, weekday, new Intl.DateTimeFormat(locale, { year: "numeric", month: "long", day: "numeric" }));
    pattern = pattern.replace(replacedWeekday, WEEKDAY_CODE);
    pattern = pattern.replace("22", DAY_CODE);
    const dayStr = date.toLocaleDateString(locale, { day: "numeric" }); // should we replace it for localized digits?
    pattern = pattern.replace(dayStr, DAY_CODE);
    return wrapSubstrings$1(pattern, locale);
}
function getGenitiveForName(date, pattern, name, formatWithoutName) {
    let genitiveName = name;
    const nameStart = pattern.indexOf(name);
    if (nameStart == -1 ||
        // genitive month name can include monthName and monthName can include spaces, e.g. "tháng 11":, so we cannot use pattern.includes() or pattern.split(" ").includes()
        (nameStart != -1 && pattern.length > nameStart + name.length && pattern[nameStart + name.length] != " " && pattern[nameStart + name.length] != "," && pattern[nameStart + name.length] != "\u060c")) {
        // needs to be in Genitive form to be useful
        // e.g.
        // pattern = '999 m. lapkričio 22 d., šeštadienis',
        // patternWithoutName = '999 2, šeštadienis',
        // name = 'lapkritis'
        // genitiveName = 'lapkričio'
        const patternWithoutName = formatWithoutName.format(date).toLowerCase();
        genitiveName = pattern.split(/,| /).filter(x => !patternWithoutName.split(/,| /).includes(x) && x[0] == name[0])[0];
    }
    return genitiveName;
}
function getDayNames(locale) {
    const weekDay = new Date(2023, 5, 25); // Sunday
    const dayNames = [];
    const dayNamesAbb = [];
    const dayNamesSS = [];
    for (let i = 0; i < 7; i++) {
        dayNames[i] = weekDay.toLocaleDateString(locale, { weekday: "long" });
        dayNamesAbb[i] = weekDay.toLocaleDateString(locale, { weekday: "short" });
        dayNamesSS[i] = weekDay.toLocaleDateString(locale, { weekday: "narrow" });
        weekDay.setDate(weekDay.getDate() + 1);
    }
    return { long: dayNames, abbreviated: dayNamesAbb, shortest: dayNamesSS };
}
function getMonthNames(locale) {
    // some calendars have the first month on non-0 index in JS
    // first month: Muharram ("ar") or Farwardin ("fa") or January
    const localeLang = locale ? locale.split("-")[0] : "";
    const firstMonthShift = localeLang == "ar" ? 8 : localeLang == "fa" ? 3 : 0;
    const date = new Date(2021, firstMonthShift, 1);
    const months = [];
    const monthsAbb = [];
    const monthsGen = [];
    const monthsAbbGen = [];
    let isChineeseStyle, isShortFormBroken;
    for (let i = firstMonthShift; i < 12 + firstMonthShift; i++) {
        const monthCnt = i % 12;
        date.setMonth(monthCnt);
        const monthNameLong = date.toLocaleDateString(locale, { month: "long" });
        const monthNameShort = date.toLocaleDateString(locale, { month: "short" });
        months[i - firstMonthShift] = monthNameLong;
        monthsAbb[i - firstMonthShift] = monthNameShort;
        // for Genitive forms:
        isChineeseStyle = isChineeseStyle !== null && isChineeseStyle !== void 0 ? isChineeseStyle : monthNameLong.charAt(monthNameLong.length - 1) == "\u6708";
        if (isChineeseStyle) {
            // for Chinese-like calendar's Genitive = Nominative
            monthsGen[i - firstMonthShift] = monthNameLong;
            monthsAbbGen[i - firstMonthShift] = monthNameShort;
            continue;
        }
        const formatWithoutMonthName = new Intl.DateTimeFormat(locale, { day: "numeric" });
        const monthWithDayLong = date.toLocaleDateString(locale, { month: "long", day: "numeric" });
        monthsGen[i - firstMonthShift] = getGenitiveForName(date, monthWithDayLong, monthNameLong, formatWithoutMonthName);
        isShortFormBroken = isShortFormBroken !== null && isShortFormBroken !== void 0 ? isShortFormBroken : /^\d+$/.test(monthNameShort);
        if (isShortFormBroken) {
            // for buggy locales e.g. lt-LT, short month contains only number instead of string
            // we leave Genitive = Nominative
            monthsAbbGen[i - firstMonthShift] = monthNameShort;
            continue;
        }
        const monthWithDayShort = date.toLocaleDateString(locale, { month: "short", day: "numeric" });
        monthsAbbGen[i - firstMonthShift] = getGenitiveForName(date, monthWithDayShort, monthNameShort, formatWithoutMonthName);
    }
    return { long: months, abbreviated: monthsAbb, longGenitive: monthsGen, abbreviatedGenitive: monthsAbbGen };
}
// .NET expects that only the Japanese calendars have more than 1 era.
// So for other calendars, only return the latest era.
function getEraNames(date, locale, calendarId) {
    if (shouldBePopulatedByManagedCode(calendarId)) {
        // managed code already handles these calendars,
        // so empty strings will get overwritten in
        // InitializeEraNames/InitializeAbbreviatedEraNames
        return {
            eraNames: "",
            abbreviatedEraNames: ""
        };
    }
    const yearStr = date.toLocaleDateString(locale, { year: "numeric" });
    const dayStr = date.toLocaleDateString(locale, { day: "numeric" });
    const eraDate = date.toLocaleDateString(locale, { era: "short" });
    const shortEraDate = date.toLocaleDateString(locale, { era: "narrow" });
    const eraDateParts = eraDate.includes(yearStr) ?
        getEraDateParts(yearStr) :
        getEraDateParts(date.getFullYear().toString());
    return {
        eraNames: getEraFromDateParts(eraDateParts.eraDateParts, eraDateParts.ignoredPart),
        abbreviatedEraNames: getEraFromDateParts(eraDateParts.abbrEraDateParts, eraDateParts.ignoredPart)
    };
    function shouldBePopulatedByManagedCode(calendarId) {
        return (calendarId > 1 && calendarId < 15) || calendarId == 22 || calendarId == 23;
    }
    function getEraFromDateParts(dateParts, ignoredPart) {
        const regex = new RegExp(`^((?!${ignoredPart}|[0-9]).)*$`);
        const filteredEra = dateParts.filter(part => regex.test(part));
        if (filteredEra.length == 0)
            throw new Error(`Internal error, era for locale ${locale} was in non-standard format.`);
        return filteredEra[0].trim();
    }
    function getEraDateParts(yearStr) {
        if (eraDate.startsWith(yearStr) || eraDate.endsWith(yearStr)) {
            return {
                eraDateParts: eraDate.split(dayStr),
                abbrEraDateParts: shortEraDate.split(dayStr),
                ignoredPart: yearStr,
            };
        }
        return {
            eraDateParts: eraDate.split(yearStr),
            abbrEraDateParts: shortEraDate.split(yearStr),
            ignoredPart: dayStr,
        };
    }
}
// wraps all substrings in the format in quotes, except for key words
// transform e.g. "dddd, d MMMM yyyy г." into "dddd, d MMMM yyyy 'г'."
function wrapSubstrings$1(str, locale) {
    const words = str.split(/\s+/);
    // locales that write date nearly without spaces should not have format parts quoted - "ja", "zh"
    // "ko" format parts should not be quoted but processing it would overcomplicate the logic
    if (words.length <= 2 || (locale === null || locale === void 0 ? void 0 : locale.startsWith("ko"))) {
        return str;
    }
    for (let i = 0; i < words.length; i++) {
        if (!keyWords$1.includes(words[i].replace(",", "")) &&
            !keyWords$1.includes(words[i].replace(".", "")) &&
            !keyWords$1.includes(words[i].replace("\u060c", "")) &&
            !keyWords$1.includes(words[i].replace("\u05d1", ""))) {
            if (words[i].endsWith(".,")) {
                // if the "word" appears twice, then the occurence with punctuation is not a code but fixed part of the format
                // see: "hu-HU" vs "lt-LT" format
                const wordNoPuctuation = words[i].slice(0, -2);
                if (words.filter(x => x == wordNoPuctuation).length == 1)
                    words[i] = `'${words[i].slice(0, -2)}'.,`;
            }
            else if (words[i].endsWith(".")) {
                words[i] = `'${words[i].slice(0, -1)}'.`;
            }
            else if (words[i].endsWith(",")) {
                words[i] = `'${words[i].slice(0, -1)}',`;
            }
            else {
                words[i] = `'${words[i]}'`;
            }
        }
    }
    return words.join(" ");
}

// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
function mono_wasm_change_case(culture, cultureLength, src, srcLength, dst, dstLength, toUpper) {
    try {
        const cultureName = runtimeHelpers.utf16ToString(culture, (culture + 2 * cultureLength));
        if (!cultureName)
            throw new Error("Cannot change case, the culture name is null.");
        const input = runtimeHelpers.utf16ToStringLoop(src, src + 2 * srcLength);
        const result = toUpper ? input.toLocaleUpperCase(cultureName) : input.toLocaleLowerCase(cultureName);
        if (result.length <= input.length) {
            runtimeHelpers.stringToUTF16(dst, dst + 2 * dstLength, result);
            return VoidPtrNull;
        }
        // workaround to maintain the ICU-like behavior
        const heapI16 = runtimeHelpers.localHeapViewU16();
        let jump = 1;
        if (toUpper) {
            for (let i = 0; i < input.length; i += jump) {
                // surrogate parts have to enter ToUpper/ToLower together to give correct output
                if (isSurrogate(input, i)) {
                    jump = 2;
                    const surrogate = input.substring(i, i + 2);
                    const upperSurrogate = surrogate.toLocaleUpperCase(cultureName);
                    const appendedSurrogate = upperSurrogate.length > 2 ? surrogate : upperSurrogate;
                    appendSurrogateToMemory(heapI16, dst, appendedSurrogate, i);
                }
                else {
                    jump = 1;
                    const upperChar = input[i].toLocaleUpperCase(cultureName);
                    const appendedChar = upperChar.length > 1 ? input[i] : upperChar;
                    runtimeHelpers.setU16_local(heapI16, dst + i * 2, appendedChar.charCodeAt(0));
                }
            }
        }
        else {
            for (let i = 0; i < input.length; i += jump) {
                // surrogate parts have to enter ToUpper/ToLower together to give correct output
                if (isSurrogate(input, i)) {
                    jump = 2;
                    const surrogate = input.substring(i, i + 2);
                    const upperSurrogate = surrogate.toLocaleLowerCase(cultureName);
                    const appendedSurrogate = upperSurrogate.length > 2 ? surrogate : upperSurrogate;
                    appendSurrogateToMemory(heapI16, dst, appendedSurrogate, i);
                }
                else {
                    jump = 1;
                    const lowerChar = input[i].toLocaleLowerCase(cultureName);
                    const appendedChar = lowerChar.length > 1 ? input[i] : lowerChar;
                    runtimeHelpers.setU16_local(heapI16, dst + i * 2, appendedChar.charCodeAt(0));
                }
            }
        }
        return VoidPtrNull;
    }
    catch (ex) {
        return runtimeHelpers.stringToUTF16Ptr(ex.toString());
    }
}
function appendSurrogateToMemory(heapI16, dst, surrogate, idx) {
    runtimeHelpers.setU16_local(heapI16, dst + idx * 2, surrogate.charCodeAt(0));
    runtimeHelpers.setU16_local(heapI16, dst + (idx + 1) * 2, surrogate.charCodeAt(1));
}

// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
/**
 * This file is partially using code from FormatJS Intl.Segmenter implementation, reference:
 * https://github.com/formatjs/formatjs/blob/58d6a7b398d776ca3d2726d72ae1573b65cc3bef/packages/intl-segmenter/src/segmenter.ts
 * https://github.com/formatjs/formatjs/blob/58d6a7b398d776ca3d2726d72ae1573b65cc3bef/packages/intl-segmenter/src/segmentation-utils.ts
 */
let segmentationRules;
function replaceVariables(variables, input) {
    const findVarRegex = /\$[A-Za-z0-9_]+/gm;
    return input.replaceAll(findVarRegex, match => {
        if (!(match in variables)) {
            throw new Error(`No such variable ${match}`);
        }
        return variables[match];
    });
}
function generateRegexRule(rule, variables, after) {
    return new RegExp(`${after ? "^" : ""}${replaceVariables(variables, rule)}${after ? "" : "$"}`);
}
function isSegmentationTypeRaw(obj) {
    return obj.variables != null && obj.rules != null;
}
function setSegmentationRulesFromJson(json) {
    if (!isSegmentationTypeRaw(json))
        throw new Error("Provided grapheme segmentation rules are not valid");
    segmentationRules = GraphemeSegmenter.prepareSegmentationRules(json);
}
class GraphemeSegmenter {
    constructor() {
        this.rules = segmentationRules;
        this.ruleSortedKeys = Object.keys(this.rules).sort((a, b) => Number(a) - Number(b));
    }
    /**
     * Returns the next grapheme in the given string starting from the specified index.
     * @param str - The input string.
     * @param startIndex - The starting index.
     * @returns The next grapheme.
     */
    nextGrapheme(str, startIndex) {
        const breakIdx = this.nextGraphemeBreak(str, startIndex);
        return str.substring(startIndex, breakIdx);
    }
    /**
     * Finds the index of the next grapheme break in a given string starting from a specified index.
     *
     * @param str - The input string.
     * @param startIndex - The index to start searching from.
     * @returns The index of the next grapheme break.
     */
    nextGraphemeBreak(str, startIndex) {
        if (startIndex < 0)
            return 0;
        if (startIndex >= str.length - 1)
            return str.length;
        let prev = String.fromCodePoint(str.codePointAt(startIndex));
        for (let i = startIndex + 1; i < str.length; i++) {
            // Don't break surrogate pairs
            if (isSurrogate(str, i)) {
                continue;
            }
            const curr = String.fromCodePoint(str.codePointAt(i));
            if (this.isGraphemeBreak(prev, curr))
                return i;
            prev = curr;
        }
        return str.length;
    }
    isGraphemeBreak(previous, current) {
        for (const key of this.ruleSortedKeys) {
            const { before, after, breaks } = this.rules[key];
            // match before and after rules
            if (before && !before.test(previous)) {
                continue;
            }
            if (after && !after.test(current)) {
                continue;
            }
            return breaks;
        }
        // GB999: Any ÷ Any
        return true;
    }
    static prepareSegmentationRules(segmentationRules) {
        const preparedRules = {};
        for (const key of Object.keys(segmentationRules.rules)) {
            const ruleValue = segmentationRules.rules[key];
            const preparedRule = { breaks: ruleValue.breaks, };
            if ("before" in ruleValue && ruleValue.before) {
                preparedRule.before = generateRegexRule(ruleValue.before, segmentationRules.variables, false);
            }
            if ("after" in ruleValue && ruleValue.after) {
                preparedRule.after = generateRegexRule(ruleValue.after, segmentationRules.variables, true);
            }
            preparedRules[key] = preparedRule;
        }
        return preparedRules;
    }
}

// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
const COMPARISON_ERROR = -2;
const INDEXING_ERROR = -1;
let graphemeSegmenterCached;
function mono_wasm_compare_string(culture, cultureLength, str1, str1Length, str2, str2Length, options, resultPtr) {
    try {
        const cultureName = runtimeHelpers.utf16ToString(culture, (culture + 2 * cultureLength));
        const string1 = runtimeHelpers.utf16ToString(str1, (str1 + 2 * str1Length));
        const string2 = runtimeHelpers.utf16ToString(str2, (str2 + 2 * str2Length));
        const casePicker = (options & 0x1f);
        const locale = cultureName ? cultureName : undefined;
        const result = compareStrings(string1, string2, locale, casePicker);
        runtimeHelpers.setI32(resultPtr, result);
        return VoidPtrNull;
    }
    catch (ex) {
        runtimeHelpers.setI32(resultPtr, COMPARISON_ERROR);
        return runtimeHelpers.stringToUTF16Ptr(ex.toString());
    }
}
function mono_wasm_starts_with(culture, cultureLength, str1, str1Length, str2, str2Length, options, resultPtr) {
    try {
        const cultureName = runtimeHelpers.utf16ToString(culture, (culture + 2 * cultureLength));
        const prefix = decodeToCleanString(str2, str2Length);
        // no need to look for an empty string
        if (prefix.length == 0) {
            runtimeHelpers.setI32(resultPtr, 1); // true
            return VoidPtrNull;
        }
        const source = decodeToCleanString(str1, str1Length);
        if (source.length < prefix.length) {
            runtimeHelpers.setI32(resultPtr, 0); // false
            return VoidPtrNull;
        }
        const sourceOfPrefixLength = source.slice(0, prefix.length);
        const casePicker = (options & 0x1f);
        const locale = cultureName ? cultureName : undefined;
        const cmpResult = compareStrings(sourceOfPrefixLength, prefix, locale, casePicker);
        const result = cmpResult === 0 ? 1 : 0; // equals ? true : false
        runtimeHelpers.setI32(resultPtr, result);
        return VoidPtrNull;
    }
    catch (ex) {
        runtimeHelpers.setI32(resultPtr, INDEXING_ERROR);
        return runtimeHelpers.stringToUTF16Ptr(ex.toString());
    }
}
function mono_wasm_ends_with(culture, cultureLength, str1, str1Length, str2, str2Length, options, resultPtr) {
    try {
        const cultureName = runtimeHelpers.utf16ToString(culture, (culture + 2 * cultureLength));
        const suffix = decodeToCleanString(str2, str2Length);
        if (suffix.length == 0) {
            runtimeHelpers.setI32(resultPtr, 1); // true
            return VoidPtrNull;
        }
        const source = decodeToCleanString(str1, str1Length);
        const diff = source.length - suffix.length;
        if (diff < 0) {
            runtimeHelpers.setI32(resultPtr, 0); // false
            return VoidPtrNull;
        }
        const sourceOfSuffixLength = source.slice(diff, source.length);
        const casePicker = (options & 0x1f);
        const locale = cultureName ? cultureName : undefined;
        const cmpResult = compareStrings(sourceOfSuffixLength, suffix, locale, casePicker);
        const result = cmpResult === 0 ? 1 : 0; // equals ? true : false
        runtimeHelpers.setI32(resultPtr, result);
        return VoidPtrNull;
    }
    catch (ex) {
        runtimeHelpers.setI32(resultPtr, INDEXING_ERROR);
        return runtimeHelpers.stringToUTF16Ptr(ex.toString());
    }
}
function mono_wasm_index_of(culture, cultureLength, needlePtr, needleLength, srcPtr, srcLength, options, fromBeginning, resultPtr) {
    try {
        const needle = runtimeHelpers.utf16ToString(needlePtr, (needlePtr + 2 * needleLength));
        // no need to look for an empty string
        if (cleanString(needle).length == 0) {
            runtimeHelpers.setI32(resultPtr, fromBeginning ? 0 : srcLength);
            return VoidPtrNull;
        }
        const source = runtimeHelpers.utf16ToString(srcPtr, (srcPtr + 2 * srcLength));
        // no need to look in an empty string
        if (cleanString(source).length == 0) {
            runtimeHelpers.setI32(resultPtr, fromBeginning ? 0 : srcLength);
            return VoidPtrNull;
        }
        const cultureName = runtimeHelpers.utf16ToString(culture, (culture + 2 * cultureLength));
        const locale = cultureName ? cultureName : undefined;
        const casePicker = (options & 0x1f);
        let result = -1;
        const graphemeSegmenter = graphemeSegmenterCached || (graphemeSegmenterCached = new GraphemeSegmenter());
        const needleSegments = [];
        let needleIdx = 0;
        // Grapheme segmentation of needle string
        while (needleIdx < needle.length) {
            const needleGrapheme = graphemeSegmenter.nextGrapheme(needle, needleIdx);
            needleSegments.push(needleGrapheme);
            needleIdx += needleGrapheme.length;
        }
        let srcIdx = 0;
        while (srcIdx < source.length) {
            const srcGrapheme = graphemeSegmenter.nextGrapheme(source, srcIdx);
            srcIdx += srcGrapheme.length;
            if (!checkMatchFound(srcGrapheme, needleSegments[0], locale, casePicker)) {
                continue;
            }
            let j;
            let srcNextIdx = srcIdx;
            for (j = 1; j < needleSegments.length; j++) {
                const srcGrapheme = graphemeSegmenter.nextGrapheme(source, srcNextIdx);
                if (!checkMatchFound(srcGrapheme, needleSegments[j], locale, casePicker)) {
                    break;
                }
                srcNextIdx += srcGrapheme.length;
            }
            if (j === needleSegments.length) {
                result = srcIdx - srcGrapheme.length;
                if (fromBeginning)
                    break;
            }
        }
        runtimeHelpers.setI32(resultPtr, result);
        return VoidPtrNull;
    }
    catch (ex) {
        runtimeHelpers.setI32(resultPtr, INDEXING_ERROR);
        return runtimeHelpers.stringToUTF16Ptr(ex.toString());
    }
    function checkMatchFound(str1, str2, locale, casePicker) {
        return compareStrings(str1, str2, locale, casePicker) === 0;
    }
}
function compareStrings(string1, string2, locale, casePicker) {
    switch (casePicker) {
        case 0:
            // 0: None - default algorithm for the platform OR
            //    StringSort - for ICU it gives the same result as None, see: https://github.com/dotnet/dotnet-api-docs/issues
            //    does not work for "ja"
            if (locale && locale.split("-")[0] === "ja")
                return COMPARISON_ERROR;
            return string1.localeCompare(string2, locale); // a ≠ b, a ≠ á, a ≠ A
        case 8:
            // 8: IgnoreKanaType works only for "ja"
            if (locale && locale.split("-")[0] !== "ja")
                return COMPARISON_ERROR;
            return string1.localeCompare(string2, locale); // a ≠ b, a ≠ á, a ≠ A
        case 1:
            // 1: IgnoreCase
            string1 = string1.toLocaleLowerCase(locale);
            string2 = string2.toLocaleLowerCase(locale);
            return string1.localeCompare(string2, locale); // a ≠ b, a ≠ á, a ≠ A
        case 4:
        case 12:
            // 4: IgnoreSymbols
            // 12: IgnoreKanaType | IgnoreSymbols
            return string1.localeCompare(string2, locale, { ignorePunctuation: true }); // by default ignorePunctuation: false
        case 5:
            // 5: IgnoreSymbols | IgnoreCase
            string1 = string1.toLocaleLowerCase(locale);
            string2 = string2.toLocaleLowerCase(locale);
            return string1.localeCompare(string2, locale, { ignorePunctuation: true }); // a ≠ b, a ≠ á, a ≠ A
        case 9:
            // 9: IgnoreKanaType | IgnoreCase
            return string1.localeCompare(string2, locale, { sensitivity: "accent" }); // a ≠ b, a ≠ á, a = A
        case 10:
            // 10: IgnoreKanaType | IgnoreNonSpace
            return string1.localeCompare(string2, locale, { sensitivity: "case" }); // a ≠ b, a = á, a ≠ A
        case 11:
            // 11: IgnoreKanaType | IgnoreNonSpace | IgnoreCase
            return string1.localeCompare(string2, locale, { sensitivity: "base" }); // a ≠ b, a = á, a = A
        case 13:
            // 13: IgnoreKanaType | IgnoreCase | IgnoreSymbols
            return string1.localeCompare(string2, locale, { sensitivity: "accent", ignorePunctuation: true }); // a ≠ b, a ≠ á, a = A
        case 14:
            // 14: IgnoreKanaType | IgnoreSymbols | IgnoreNonSpace
            return string1.localeCompare(string2, locale, { sensitivity: "case", ignorePunctuation: true }); // a ≠ b, a = á, a ≠ A
        case 15:
            // 15: IgnoreKanaType | IgnoreSymbols | IgnoreNonSpace | IgnoreCase
            return string1.localeCompare(string2, locale, { sensitivity: "base", ignorePunctuation: true }); // a ≠ b, a = á, a = A
        case 2:
        case 3:
        case 6:
        case 7:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        default:
            // 2: IgnoreNonSpace
            // 3: IgnoreNonSpace | IgnoreCase
            // 6: IgnoreSymbols | IgnoreNonSpace
            // 7: IgnoreSymbols | IgnoreNonSpace | IgnoreCase
            // 16: IgnoreWidth
            // 17: IgnoreWidth | IgnoreCase
            // 18: IgnoreWidth | IgnoreNonSpace
            // 19: IgnoreWidth | IgnoreNonSpace | IgnoreCase
            // 20: IgnoreWidth | IgnoreSymbols
            // 21: IgnoreWidth | IgnoreSymbols | IgnoreCase
            // 22: IgnoreWidth | IgnoreSymbols | IgnoreNonSpace
            // 23: IgnoreWidth | IgnoreSymbols | IgnoreNonSpace | IgnoreCase
            // 24: IgnoreKanaType | IgnoreWidth
            // 25: IgnoreKanaType | IgnoreWidth | IgnoreCase
            // 26: IgnoreKanaType | IgnoreWidth | IgnoreNonSpace
            // 27: IgnoreKanaType | IgnoreWidth | IgnoreNonSpace | IgnoreCase
            // 28: IgnoreKanaType | IgnoreWidth | IgnoreSymbols
            // 29: IgnoreKanaType | IgnoreWidth | IgnoreSymbols | IgnoreCase
            // 30: IgnoreKanaType | IgnoreWidth | IgnoreSymbols | IgnoreNonSpace
            // 31: IgnoreKanaType | IgnoreWidth | IgnoreSymbols | IgnoreNonSpace | IgnoreCase
            throw new Error(`Invalid comparison option. Option=${casePicker}`);
    }
}
function decodeToCleanString(strPtr, strLen) {
    const str = runtimeHelpers.utf16ToString(strPtr, (strPtr + 2 * strLen));
    return cleanString(str);
}
function cleanString(str) {
    const nStr = str.normalize();
    return nStr.replace(/[\u200B-\u200D\uFEFF\0]/g, "");
}

// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
const NO_PREFIX_24H = "H";
const PREFIX_24H = "HH";
const NO_PREFIX_12H = "h";
const PREFIX_12H = "hh";
const SECONDS_CODE = "ss";
const MINUTES_CODE = "mm";
const DESIGNATOR_CODE = "tt";
// Note: wrapSubstrings
// The character "h" can be ambiguous as it might represent an hour code hour code and a fixed (quoted) part of the format.
// Special Case for "fr-CA": Always recognize "HH" as a keyword and do not quote it, to avoid formatting issues.
const keyWords = [SECONDS_CODE, MINUTES_CODE, DESIGNATOR_CODE, PREFIX_24H];
function mono_wasm_get_culture_info(culture, cultureLength, dst, dstMaxLength, dstLength) {
    try {
        const cultureName = runtimeHelpers.utf16ToString(culture, (culture + 2 * cultureLength));
        const cultureInfo = {
            AmDesignator: "",
            PmDesignator: "",
            LongTimePattern: "",
            ShortTimePattern: ""
        };
        const canonicalLocale = normalizeLocale(cultureName);
        const designators = getAmPmDesignators(canonicalLocale);
        cultureInfo.AmDesignator = designators.am;
        cultureInfo.PmDesignator = designators.pm;
        cultureInfo.LongTimePattern = getLongTimePattern(canonicalLocale, designators);
        cultureInfo.ShortTimePattern = getShortTimePattern(cultureInfo.LongTimePattern);
        const result = Object.values(cultureInfo).join(OUTER_SEPARATOR);
        if (result.length > dstMaxLength) {
            throw new Error(`Culture info exceeds length of ${dstMaxLength}.`);
        }
        runtimeHelpers.stringToUTF16(dst, dst + 2 * result.length, result);
        runtimeHelpers.setI32(dstLength, result.length);
        return VoidPtrNull;
    }
    catch (ex) {
        runtimeHelpers.setI32(dstLength, -1);
        return runtimeHelpers.stringToUTF16Ptr(ex.toString());
    }
}
function getAmPmDesignators(locale) {
    const pmTime = new Date("August 19, 1975 12:15:33"); // do not change, some PM hours result in hour digits change, e.g. 13 -> 01 or 1
    const amTime = new Date("August 19, 1975 11:15:33"); // do not change, some AM hours result in hour digits change, e.g. 9 -> 09
    const pmDesignator = getDesignator(pmTime, locale);
    const amDesignator = getDesignator(amTime, locale);
    return {
        am: amDesignator,
        pm: pmDesignator
    };
}
function getDesignator(time, locale) {
    let withDesignator = time.toLocaleTimeString(locale, { hourCycle: "h12" });
    const localizedZero = (0).toLocaleString(locale);
    if (withDesignator.includes(localizedZero)) {
        // in v8>=11.8 "12" changes to "0" for ja-JP
        const localizedTwelve = (12).toLocaleString(locale);
        withDesignator = withDesignator.replace(localizedZero, localizedTwelve);
    }
    const withoutDesignator = time.toLocaleTimeString(locale, { hourCycle: "h24" });
    const designator = withDesignator.replace(withoutDesignator, "").trim();
    if (new RegExp("[0-9]$").test(designator)) {
        const designatorParts = withDesignator.split(" ").filter(part => new RegExp("^((?![0-9]).)*$").test(part));
        if (!designatorParts || designatorParts.length == 0)
            return "";
        return designatorParts.join(" ");
    }
    return designator;
}
function getLongTimePattern(locale, designators) {
    const hourIn24Format = 18; // later hours than 18 have night designators in some locales (instead of AM designator)
    const hourIn12Format = 6;
    const localizedHour24 = (hourIn24Format).toLocaleString(locale); // not all locales use arabic numbers
    const localizedHour12 = (hourIn12Format).toLocaleString(locale);
    const pmTime = new Date(`August 19, 1975 ${hourIn24Format}:15:30`); // in the comments, en-US locale is used:
    const shortTime = new Intl.DateTimeFormat(locale, { timeStyle: "medium" });
    const shortPmStyle = shortTime.format(pmTime); // 12:15:30 PM
    const minutes = pmTime.toLocaleTimeString(locale, { minute: "numeric" }); // 15
    const seconds = pmTime.toLocaleTimeString(locale, { second: "numeric" }); // 30
    let pattern = shortPmStyle.replace(designators.pm, DESIGNATOR_CODE).replace(minutes, MINUTES_CODE).replace(seconds, SECONDS_CODE); // 12:mm:ss tt
    const isISOStyle = pattern.includes(localizedHour24); // 24h or 12h pattern?
    const localized0 = (0).toLocaleString(locale);
    const hour12WithPrefix = `${localized0}${localizedHour12}`; // 06
    const amTime = new Date(`August 19, 1975 ${hourIn12Format}:15:30`);
    const h12Style = shortTime.format(amTime);
    let hourPattern;
    if (isISOStyle) { // 24h
        const hasPrefix = h12Style.includes(hour12WithPrefix);
        hourPattern = hasPrefix ? PREFIX_24H : NO_PREFIX_24H;
        pattern = pattern.replace(localizedHour24, hourPattern);
    }
    else { // 12h
        const hasPrefix = h12Style.includes(hour12WithPrefix);
        hourPattern = hasPrefix ? PREFIX_12H : NO_PREFIX_12H;
        pattern = pattern.replace(hasPrefix ? hour12WithPrefix : localizedHour12, hourPattern);
    }
    return wrapSubstrings(pattern);
}
function getShortTimePattern(pattern) {
    // remove seconds:
    // short dotnet pattern does not contain seconds while JS's pattern always contains them
    const secondsIdx = pattern.indexOf(SECONDS_CODE);
    if (secondsIdx > 0) {
        const secondsWithSeparator = `${pattern[secondsIdx - 1]}${SECONDS_CODE}`;
        // en-US: 12:mm:ss tt -> 12:mm tt;
        // fr-CA: 12 h mm min ss s -> 12 h mm min s
        const shortPatternNoSecondsDigits = pattern.replace(secondsWithSeparator, "");
        if (shortPatternNoSecondsDigits.length > secondsIdx && shortPatternNoSecondsDigits[shortPatternNoSecondsDigits.length - 1] != "t") {
            pattern = pattern.split(secondsWithSeparator)[0];
        }
        else {
            pattern = shortPatternNoSecondsDigits;
        }
    }
    return pattern;
}
// wraps all substrings in the format in quotes, except for key words
// transform e.g. "HH h mm min ss s" into "HH 'h' mm 'min' ss 's'"
function wrapSubstrings(str) {
    const words = str.split(/\s+/);
    for (let i = 0; i < words.length; i++) {
        if (!words[i].includes(":") && !words[i].includes(".") && !keyWords.includes(words[i])) {
            words[i] = `'${words[i]}'`;
        }
    }
    return words.join(" ");
}

// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
function mono_wasm_get_first_day_of_week(culture, cultureLength, resultPtr) {
    try {
        const cultureName = runtimeHelpers.utf16ToString(culture, (culture + 2 * cultureLength));
        const canonicalLocale = normalizeLocale(cultureName);
        const result = getFirstDayOfWeek(canonicalLocale);
        runtimeHelpers.setI32(resultPtr, result);
        return VoidPtrNull;
    }
    catch (ex) {
        runtimeHelpers.setI32(resultPtr, -1);
        return runtimeHelpers.stringToUTF16Ptr(ex.toString());
    }
}
function mono_wasm_get_first_week_of_year(culture, cultureLength, resultPtr) {
    try {
        const cultureName = runtimeHelpers.utf16ToString(culture, (culture + 2 * cultureLength));
        const canonicalLocale = normalizeLocale(cultureName);
        const result = getFirstWeekOfYear(canonicalLocale);
        runtimeHelpers.setI32(resultPtr, result);
        return VoidPtrNull;
    }
    catch (ex) {
        runtimeHelpers.setI32(resultPtr, -1);
        return runtimeHelpers.stringToUTF16Ptr(ex.toString());
    }
}
function getFirstDayOfWeek(locale) {
    const weekInfo = getWeekInfo(locale);
    if (weekInfo) {
        // JS's Sunday == 7 while dotnet's Sunday == 0
        return weekInfo.firstDay == 7 ? 0 : weekInfo.firstDay;
    }
    // Firefox does not support it rn but we can make a temporary workaround for it,
    // that should be removed when it starts being supported:
    const saturdayLocales = ["en-AE", "en-SD", "fa-IR"];
    if (saturdayLocales.includes(locale)) {
        return 6;
    }
    const sundayLanguages = ["th", "pt", "mr", "ml", "ko", "kn", "ja", "id", "hi", "he", "gu", "fil", "bn", "am", "ar", "te"];
    const sundayLocales = ["ta-SG", "ta-IN", "sw-KE", "ms-SG", "fr-CA", "es-MX", "en-US", "en-ZW", "en-ZA", "en-WS", "en-VI", "en-UM", "en-TT", "en-SG", "en-PR", "en-PK", "en-PH", "en-MT", "en-MO", "en-MH", "en-KE", "en-JM", "en-IN", "en-IL", "en-HK", "en-GU", "en-DM", "en-CA", "en-BZ", "en-BW", "en-BS", "en-AS", "en-AG", "zh-Hans-HK", "zh-SG", "zh-HK", "zh-TW"]; // "en-AU" is Monday in chrome, so firefox should be in line
    const localeLang = locale.split("-")[0];
    if (sundayLanguages.includes(localeLang) || sundayLocales.includes(locale)) {
        return 0;
    }
    return 1;
}
function getFirstWeekOfYear(locale) {
    const weekInfo = getWeekInfo(locale);
    if (weekInfo) {
        // enum CalendarWeekRule
        // FirstDay = 0,           // when minimalDays < 4
        // FirstFullWeek = 1,      // when miminalDays == 7
        // FirstFourDayWeek = 2    // when miminalDays >= 4
        return weekInfo.minimalDays == 7 ? 1 :
            weekInfo.minimalDays < 4 ? 0 : 2;
    }
    // Firefox does not support it rn but we can make a temporary workaround for it,
    // that should be removed when it starts being supported:
    const firstFourDayWeekLocales = ["pt-PT", "fr-CH", "fr-FR", "fr-BE", "es-ES", "en-SE", "en-NL", "en-JE", "en-IM", "en-IE", "en-GI", "en-GG", "en-GB", "en-FJ", "en-FI", "en-DK", "en-DE", "en-CH", "en-BE", "en-AT", "el-GR", "nl-BE", "nl-NL"];
    const firstFourDayWeekLanguages = ["sv", "sk", "ru", "pl", "no", "nb", "lt", "it", "hu", "fi", "et", "de", "da", "cs", "ca", "bg"];
    const localeLang = locale.split("-")[0];
    if (firstFourDayWeekLocales.includes(locale) || firstFourDayWeekLanguages.includes(localeLang)) {
        return 2;
    }
    return 0;
}
function getWeekInfo(locale) {
    try {
        // most tools have it implemented as property
        return new Intl.Locale(locale).weekInfo;
    }
    catch (_a) {
        try {
            // but a few use methods, which is the preferred way
            return new Intl.Locale(locale).getWeekInfo();
        }
        catch (_b) {
            return undefined;
        }
    }
}

let globalizationHelpers;
let runtimeHelpers;
function initHybrid(gh, rh) {
    gh.mono_wasm_change_case = mono_wasm_change_case;
    gh.mono_wasm_compare_string = mono_wasm_compare_string;
    gh.mono_wasm_starts_with = mono_wasm_starts_with;
    gh.mono_wasm_ends_with = mono_wasm_ends_with;
    gh.mono_wasm_index_of = mono_wasm_index_of;
    gh.mono_wasm_get_calendar_info = mono_wasm_get_calendar_info;
    gh.mono_wasm_get_culture_info = mono_wasm_get_culture_info;
    gh.mono_wasm_get_first_day_of_week = mono_wasm_get_first_day_of_week;
    gh.mono_wasm_get_first_week_of_year = mono_wasm_get_first_week_of_year;
    gh.setSegmentationRulesFromJson = setSegmentationRulesFromJson;
    globalizationHelpers = gh;
    runtimeHelpers = rh;
}

export { globalizationHelpers, initHybrid, runtimeHelpers };
//# sourceMappingURL=dotnet.globalization.js.map
