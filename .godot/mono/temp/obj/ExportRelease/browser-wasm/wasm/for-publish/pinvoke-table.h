// GENERATED FILE, DO NOT MODIFY");


void GlobalizationNative_ChangeCase (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_ChangeCaseInvariant (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_ChangeCaseTurkish (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_CloseSortHandle (void *);

int32_t GlobalizationNative_CompareString (void *, void *, int32_t, void *, int32_t, int32_t);

int32_t GlobalizationNative_EndsWith (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t GlobalizationNative_EnumCalendarInfo (void *, void *, uint32_t, int32_t, void *);

int32_t GlobalizationNative_GetCalendarInfo (void *, uint32_t, int32_t, void *, int32_t);

int32_t GlobalizationNative_GetCalendars (void *, void *, int32_t);

int32_t GlobalizationNative_GetDefaultLocaleName (void *, int32_t);

int32_t GlobalizationNative_GetICUVersion ();

int32_t GlobalizationNative_GetJapaneseEraStartDate (int32_t, void *, void *, void *);

int32_t GlobalizationNative_GetLatestJapaneseEra ();

int32_t GlobalizationNative_GetLocaleInfoGroupingSizes (void *, uint32_t, void *, void *);

int32_t GlobalizationNative_GetLocaleInfoInt (void *, uint32_t, void *);

int32_t GlobalizationNative_GetLocaleInfoString (void *, uint32_t, void *, int32_t, void *);

int32_t GlobalizationNative_GetLocaleName (void *, void *, int32_t);

int32_t GlobalizationNative_GetLocales (void *, int32_t);

int32_t GlobalizationNative_GetLocaleTimeFormat (void *, int32_t, void *, int32_t);

int32_t GlobalizationNative_GetSortHandle (void *, void *);

int32_t GlobalizationNative_GetSortKey (void *, void *, int32_t, void *, int32_t, int32_t);

int32_t GlobalizationNative_GetSortVersion (void *);

int32_t GlobalizationNative_IndexOf (void *, void *, int32_t, void *, int32_t, int32_t, void *);

void GlobalizationNative_InitICUFunctions (void *, void *, void *, void *);

void GlobalizationNative_InitOrdinalCasingPage (int32_t, void *);

int32_t GlobalizationNative_IsNormalized (int32_t, void *, int32_t);

int32_t GlobalizationNative_IsPredefinedLocale (void *);

int32_t GlobalizationNative_LastIndexOf (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t GlobalizationNative_LoadICU ();

int32_t GlobalizationNative_NormalizeString (int32_t, void *, int32_t, void *, int32_t);

int32_t GlobalizationNative_StartsWith (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t GlobalizationNative_ToAscii (uint32_t, void *, int32_t, void *, int32_t);

int32_t GlobalizationNative_ToUnicode (uint32_t, void *, int32_t, void *, int32_t);

int32_t SystemNative_Access (void *, int32_t);

void * SystemNative_AlignedAlloc (void *, void *);

void SystemNative_AlignedFree (void *);

void * SystemNative_AlignedRealloc (void *, void *, void *);

void * SystemNative_Calloc (void *, void *);

int32_t SystemNative_CanGetHiddenFlag ();

int32_t SystemNative_ChDir (void *);

int32_t SystemNative_ChMod (void *, int32_t);

int32_t SystemNative_Close (void *);

int32_t SystemNative_CloseDir (void *);

int32_t SystemNative_ConvertErrorPalToPlatform (int32_t);

int32_t SystemNative_ConvertErrorPlatformToPal (int32_t);

int32_t SystemNative_CopyFile (void *, void *, int64_t);

void * SystemNative_Dup (void *);

int32_t SystemNative_FAllocate (void *, int64_t, int64_t);

int32_t SystemNative_FChflags (void *, uint32_t);

int32_t SystemNative_FChMod (void *, int32_t);

int32_t SystemNative_FcntlSetFD (void *, int32_t);

int32_t SystemNative_FLock (void *, int32_t);

void SystemNative_Free (void *);

void SystemNative_FreeEnviron (void *);

int32_t SystemNative_FStat (void *, void *);

int32_t SystemNative_FSync (void *);

int32_t SystemNative_FTruncate (void *, int64_t);

int32_t SystemNative_FUTimens (void *, void *);

double SystemNative_GetCpuUtilization (void *);

int32_t SystemNative_GetCryptographicallySecureRandomBytes (void *, int32_t);

void * SystemNative_GetCwd (void *, int32_t);

void * SystemNative_GetDefaultSearchOrderPseudoHandle ();

void * SystemNative_GetEnv (void *);

void * SystemNative_GetEnviron ();

int32_t SystemNative_GetErrNo ();

uint32_t SystemNative_GetFileSystemType (void *);

void SystemNative_GetNonCryptographicallySecureRandomBytes (void *, int32_t);

int32_t SystemNative_GetReadDirRBufferSize ();

int64_t SystemNative_GetSystemTimeAsTicks ();

uint64_t SystemNative_GetTimestamp ();

void * SystemNative_GetTimeZoneData (void *, void *);

int32_t SystemNative_LChflags (void *, uint32_t);

int32_t SystemNative_LChflagsCanSetHiddenFlag ();

int32_t SystemNative_Link (void *, void *);

int32_t SystemNative_LockFileRegion (void *, int64_t, int64_t, int32_t);

void SystemNative_Log (void *, int32_t);

void SystemNative_LogError (void *, int32_t);

void SystemNative_LowLevelMonitor_Acquire (void *);

void * SystemNative_LowLevelMonitor_Create ();

void SystemNative_LowLevelMonitor_Destroy (void *);

void SystemNative_LowLevelMonitor_Release (void *);

void SystemNative_LowLevelMonitor_Signal_Release (void *);

int32_t SystemNative_LowLevelMonitor_TimedWait (void *, int32_t);

void SystemNative_LowLevelMonitor_Wait (void *);

int64_t SystemNative_LSeek (void *, int64_t, int32_t);

int32_t SystemNative_LStat (void *, void *);

int32_t SystemNative_MAdvise (void *, uint64_t, int32_t);

void * SystemNative_Malloc (void *);

int32_t SystemNative_MkDir (void *, int32_t);

void * SystemNative_MkdTemp (void *);

void * SystemNative_MksTemps (void *, int32_t);

void * SystemNative_MMap (void *, uint64_t, int32_t, int32_t, void *, int64_t);

int32_t SystemNative_MSync (void *, uint64_t, int32_t);

int32_t SystemNative_MUnmap (void *, uint64_t);

void * SystemNative_Open (void *, int32_t, int32_t);

void * SystemNative_OpenDir (void *);

int32_t SystemNative_PosixFAdvise (void *, int64_t, int64_t, int32_t);

int32_t SystemNative_PRead (void *, void *, int32_t, int64_t);

int64_t SystemNative_PReadV (void *, void *, int32_t, int64_t);

int32_t SystemNative_PWrite (void *, void *, int32_t, int64_t);

int64_t SystemNative_PWriteV (void *, void *, int32_t, int64_t);

int32_t SystemNative_Read (void *, void *, int32_t);

int32_t SystemNative_ReadDirR (void *, void *, int32_t, void *);

int32_t SystemNative_ReadLink (void *, void *, int32_t);

void * SystemNative_Realloc (void *, void *);

int32_t SystemNative_Rename (void *, void *);

int32_t SystemNative_RmDir (void *);

int32_t SystemNative_SchedGetCpu ();

void SystemNative_SetErrNo (int32_t);

void * SystemNative_ShmOpen (void *, int32_t, int32_t);

int32_t SystemNative_ShmUnlink (void *);

int32_t SystemNative_Stat (void *, void *);

void * SystemNative_StrErrorR (int32_t, void *, int32_t);

int32_t SystemNative_SymLink (void *, void *);

int64_t SystemNative_SysConf (int32_t);

void SystemNative_SysLog (int32_t, void *, void *);

uint32_t SystemNative_TryGetUInt32OSThreadId ();

int32_t SystemNative_Unlink (void *);

int32_t SystemNative_UTimensat (void *, void *);

int32_t SystemNative_Write (void *, void *, int32_t);
static PinvokeImport libSystem_Native_imports [] = {
    {"SystemNative_Access", SystemNative_Access}, // System.Private.CoreLib
    {"SystemNative_AlignedAlloc", SystemNative_AlignedAlloc}, // System.Private.CoreLib
    {"SystemNative_AlignedFree", SystemNative_AlignedFree}, // System.Private.CoreLib
    {"SystemNative_AlignedRealloc", SystemNative_AlignedRealloc}, // System.Private.CoreLib
    {"SystemNative_Calloc", SystemNative_Calloc}, // System.Private.CoreLib
    {"SystemNative_CanGetHiddenFlag", SystemNative_CanGetHiddenFlag}, // System.Private.CoreLib
    {"SystemNative_ChDir", SystemNative_ChDir}, // System.Private.CoreLib
    {"SystemNative_ChMod", SystemNative_ChMod}, // System.Private.CoreLib
    {"SystemNative_Close", SystemNative_Close}, // System.Private.CoreLib
    {"SystemNative_CloseDir", SystemNative_CloseDir}, // System.Private.CoreLib
    {"SystemNative_ConvertErrorPalToPlatform", SystemNative_ConvertErrorPalToPlatform}, // System.Console, System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_ConvertErrorPlatformToPal", SystemNative_ConvertErrorPlatformToPal}, // System.Console, System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_CopyFile", SystemNative_CopyFile}, // System.Private.CoreLib
    {"SystemNative_Dup", SystemNative_Dup}, // System.Console
    {"SystemNative_FAllocate", SystemNative_FAllocate}, // System.Private.CoreLib
    {"SystemNative_FChflags", SystemNative_FChflags}, // System.Private.CoreLib
    {"SystemNative_FChMod", SystemNative_FChMod}, // System.Private.CoreLib
    {"SystemNative_FcntlSetFD", SystemNative_FcntlSetFD}, // System.IO.MemoryMappedFiles
    {"SystemNative_FLock", SystemNative_FLock}, // System.Private.CoreLib
    {"SystemNative_Free", SystemNative_Free}, // System.Private.CoreLib
    {"SystemNative_FreeEnviron", SystemNative_FreeEnviron}, // System.Private.CoreLib
    {"SystemNative_FStat", SystemNative_FStat}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_FSync", SystemNative_FSync}, // System.Private.CoreLib
    {"SystemNative_FTruncate", SystemNative_FTruncate}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_FUTimens", SystemNative_FUTimens}, // System.Private.CoreLib
    {"SystemNative_GetCpuUtilization", SystemNative_GetCpuUtilization}, // System.Private.CoreLib
    {"SystemNative_GetCryptographicallySecureRandomBytes", SystemNative_GetCryptographicallySecureRandomBytes}, // System.Private.CoreLib
    {"SystemNative_GetCwd", SystemNative_GetCwd}, // System.Private.CoreLib
    {"SystemNative_GetDefaultSearchOrderPseudoHandle", SystemNative_GetDefaultSearchOrderPseudoHandle}, // System.Private.CoreLib
    {"SystemNative_GetEnv", SystemNative_GetEnv}, // System.Private.CoreLib
    {"SystemNative_GetEnviron", SystemNative_GetEnviron}, // System.Private.CoreLib
    {"SystemNative_GetErrNo", SystemNative_GetErrNo}, // System.Private.CoreLib
    {"SystemNative_GetFileSystemType", SystemNative_GetFileSystemType}, // System.Private.CoreLib
    {"SystemNative_GetNonCryptographicallySecureRandomBytes", SystemNative_GetNonCryptographicallySecureRandomBytes}, // System.Private.CoreLib
    {"SystemNative_GetReadDirRBufferSize", SystemNative_GetReadDirRBufferSize}, // System.Private.CoreLib
    {"SystemNative_GetSystemTimeAsTicks", SystemNative_GetSystemTimeAsTicks}, // System.Private.CoreLib
    {"SystemNative_GetTimestamp", SystemNative_GetTimestamp}, // System.Private.CoreLib
    {"SystemNative_GetTimeZoneData", SystemNative_GetTimeZoneData}, // System.Private.CoreLib
    {"SystemNative_LChflags", SystemNative_LChflags}, // System.Private.CoreLib
    {"SystemNative_LChflagsCanSetHiddenFlag", SystemNative_LChflagsCanSetHiddenFlag}, // System.Private.CoreLib
    {"SystemNative_Link", SystemNative_Link}, // System.Private.CoreLib
    {"SystemNative_LockFileRegion", SystemNative_LockFileRegion}, // System.Private.CoreLib
    {"SystemNative_Log", SystemNative_Log}, // System.Private.CoreLib
    {"SystemNative_LogError", SystemNative_LogError}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Acquire", SystemNative_LowLevelMonitor_Acquire}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Create", SystemNative_LowLevelMonitor_Create}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Destroy", SystemNative_LowLevelMonitor_Destroy}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Release", SystemNative_LowLevelMonitor_Release}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Signal_Release", SystemNative_LowLevelMonitor_Signal_Release}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_TimedWait", SystemNative_LowLevelMonitor_TimedWait}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Wait", SystemNative_LowLevelMonitor_Wait}, // System.Private.CoreLib
    {"SystemNative_LSeek", SystemNative_LSeek}, // System.Private.CoreLib
    {"SystemNative_LStat", SystemNative_LStat}, // System.Private.CoreLib
    {"SystemNative_MAdvise", SystemNative_MAdvise}, // System.IO.MemoryMappedFiles
    {"SystemNative_Malloc", SystemNative_Malloc}, // System.Private.CoreLib
    {"SystemNative_MkDir", SystemNative_MkDir}, // System.Private.CoreLib
    {"SystemNative_MkdTemp", SystemNative_MkdTemp}, // System.Private.CoreLib
    {"SystemNative_MksTemps", SystemNative_MksTemps}, // System.Private.CoreLib
    {"SystemNative_MMap", SystemNative_MMap}, // System.IO.MemoryMappedFiles
    {"SystemNative_MSync", SystemNative_MSync}, // System.IO.MemoryMappedFiles
    {"SystemNative_MUnmap", SystemNative_MUnmap}, // System.IO.MemoryMappedFiles
    {"SystemNative_Open", SystemNative_Open}, // System.Private.CoreLib
    {"SystemNative_OpenDir", SystemNative_OpenDir}, // System.Private.CoreLib
    {"SystemNative_PosixFAdvise", SystemNative_PosixFAdvise}, // System.Private.CoreLib
    {"SystemNative_PRead", SystemNative_PRead}, // System.Private.CoreLib
    {"SystemNative_PReadV", SystemNative_PReadV}, // System.Private.CoreLib
    {"SystemNative_PWrite", SystemNative_PWrite}, // System.Private.CoreLib
    {"SystemNative_PWriteV", SystemNative_PWriteV}, // System.Private.CoreLib
    {"SystemNative_Read", SystemNative_Read}, // System.Private.CoreLib
    {"SystemNative_ReadDirR", SystemNative_ReadDirR}, // System.Private.CoreLib
    {"SystemNative_ReadLink", SystemNative_ReadLink}, // System.Private.CoreLib
    {"SystemNative_Realloc", SystemNative_Realloc}, // System.Private.CoreLib
    {"SystemNative_Rename", SystemNative_Rename}, // System.Private.CoreLib
    {"SystemNative_RmDir", SystemNative_RmDir}, // System.Private.CoreLib
    {"SystemNative_SchedGetCpu", SystemNative_SchedGetCpu}, // System.Private.CoreLib
    {"SystemNative_SetErrNo", SystemNative_SetErrNo}, // System.Private.CoreLib
    {"SystemNative_ShmOpen", SystemNative_ShmOpen}, // System.IO.MemoryMappedFiles
    {"SystemNative_ShmUnlink", SystemNative_ShmUnlink}, // System.IO.MemoryMappedFiles
    {"SystemNative_Stat", SystemNative_Stat}, // System.Private.CoreLib
    {"SystemNative_StrErrorR", SystemNative_StrErrorR}, // System.Console, System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_SymLink", SystemNative_SymLink}, // System.Private.CoreLib
    {"SystemNative_SysConf", SystemNative_SysConf}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_SysLog", SystemNative_SysLog}, // System.Private.CoreLib
    {"SystemNative_TryGetUInt32OSThreadId", SystemNative_TryGetUInt32OSThreadId}, // System.Private.CoreLib
    {"SystemNative_Unlink", SystemNative_Unlink}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_UTimensat", SystemNative_UTimensat}, // System.Private.CoreLib
    {"SystemNative_Write", SystemNative_Write}, // System.Console, System.Private.CoreLib
    {NULL, NULL}
};
static PinvokeImport libSystem_IO_Compression_Native_imports [] = {
    {NULL, NULL}
};
static PinvokeImport libSystem_Globalization_Native_imports [] = {
    {"GlobalizationNative_ChangeCase", GlobalizationNative_ChangeCase}, // System.Private.CoreLib
    {"GlobalizationNative_ChangeCaseInvariant", GlobalizationNative_ChangeCaseInvariant}, // System.Private.CoreLib
    {"GlobalizationNative_ChangeCaseTurkish", GlobalizationNative_ChangeCaseTurkish}, // System.Private.CoreLib
    {"GlobalizationNative_CloseSortHandle", GlobalizationNative_CloseSortHandle}, // System.Private.CoreLib
    {"GlobalizationNative_CompareString", GlobalizationNative_CompareString}, // System.Private.CoreLib
    {"GlobalizationNative_EndsWith", GlobalizationNative_EndsWith}, // System.Private.CoreLib
    {"GlobalizationNative_EnumCalendarInfo", GlobalizationNative_EnumCalendarInfo}, // System.Private.CoreLib
    {"GlobalizationNative_GetCalendarInfo", GlobalizationNative_GetCalendarInfo}, // System.Private.CoreLib
    {"GlobalizationNative_GetCalendars", GlobalizationNative_GetCalendars}, // System.Private.CoreLib
    {"GlobalizationNative_GetDefaultLocaleName", GlobalizationNative_GetDefaultLocaleName}, // System.Private.CoreLib
    {"GlobalizationNative_GetICUVersion", GlobalizationNative_GetICUVersion}, // System.Private.CoreLib
    {"GlobalizationNative_GetJapaneseEraStartDate", GlobalizationNative_GetJapaneseEraStartDate}, // System.Private.CoreLib
    {"GlobalizationNative_GetLatestJapaneseEra", GlobalizationNative_GetLatestJapaneseEra}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoGroupingSizes", GlobalizationNative_GetLocaleInfoGroupingSizes}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoInt", GlobalizationNative_GetLocaleInfoInt}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoString", GlobalizationNative_GetLocaleInfoString}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleName", GlobalizationNative_GetLocaleName}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocales", GlobalizationNative_GetLocales}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleTimeFormat", GlobalizationNative_GetLocaleTimeFormat}, // System.Private.CoreLib
    {"GlobalizationNative_GetSortHandle", GlobalizationNative_GetSortHandle}, // System.Private.CoreLib
    {"GlobalizationNative_GetSortKey", GlobalizationNative_GetSortKey}, // System.Private.CoreLib
    {"GlobalizationNative_GetSortVersion", GlobalizationNative_GetSortVersion}, // System.Private.CoreLib
    {"GlobalizationNative_IndexOf", GlobalizationNative_IndexOf}, // System.Private.CoreLib
    {"GlobalizationNative_InitICUFunctions", GlobalizationNative_InitICUFunctions}, // System.Private.CoreLib
    {"GlobalizationNative_InitOrdinalCasingPage", GlobalizationNative_InitOrdinalCasingPage}, // System.Private.CoreLib
    {"GlobalizationNative_IsNormalized", GlobalizationNative_IsNormalized}, // System.Private.CoreLib
    {"GlobalizationNative_IsPredefinedLocale", GlobalizationNative_IsPredefinedLocale}, // System.Private.CoreLib
    {"GlobalizationNative_LastIndexOf", GlobalizationNative_LastIndexOf}, // System.Private.CoreLib
    {"GlobalizationNative_LoadICU", GlobalizationNative_LoadICU}, // System.Private.CoreLib
    {"GlobalizationNative_NormalizeString", GlobalizationNative_NormalizeString}, // System.Private.CoreLib
    {"GlobalizationNative_StartsWith", GlobalizationNative_StartsWith}, // System.Private.CoreLib
    {"GlobalizationNative_ToAscii", GlobalizationNative_ToAscii}, // System.Private.CoreLib
    {"GlobalizationNative_ToUnicode", GlobalizationNative_ToUnicode}, // System.Private.CoreLib
    {NULL, NULL}
};

static void *pinvoke_tables[] = {
    (void*)libSystem_Native_imports, (void*)libSystem_IO_Compression_Native_imports, (void*)libSystem_Globalization_Native_imports
};

static char *pinvoke_names[] =  {
    "libSystem.Native", "libSystem.IO.Compression.Native", "libSystem.Globalization.Native"
};
#include <mono/utils/details/mono-error-types.h>
                #include <mono/metadata/assembly.h>
                #include <mono/utils/mono-error.h>
                #include <mono/metadata/object.h>
                #include <mono/utils/details/mono-logger-types.h>
                #include "runtime.h"
                InterpFtnDesc wasm_native_to_interp_ftndescs[47] = {};
typedef void (*WasmInterpEntrySig_0) (int*, int*);
void wasm_native_to_interp_Godot_GodotSharp_DebuggingUtils_GetCurrentStackInfo (void * arg0) { 
  if (!(WasmInterpEntrySig_0)wasm_native_to_interp_ftndescs [0].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot", "DebuggingUtils", "GetCurrentStackInfo", 1);
  }
  ((WasmInterpEntrySig_0)wasm_native_to_interp_ftndescs [0].func) ((int*)&arg0, wasm_native_to_interp_ftndescs [0].arg);
}

typedef void (*WasmInterpEntrySig_1) (int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_DelegateEquals (void * arg0, void * arg1) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_1)wasm_native_to_interp_ftndescs [1].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot", "DelegateUtils", "DelegateEquals", 2);
  }
  ((WasmInterpEntrySig_1)wasm_native_to_interp_ftndescs [1].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [1].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_2) (int*, int*, int*);
int32_t wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_DelegateHash (void * arg0) { 
  int32_t res;
  if (!(WasmInterpEntrySig_2)wasm_native_to_interp_ftndescs [2].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot", "DelegateUtils", "DelegateHash", 1);
  }
  ((WasmInterpEntrySig_2)wasm_native_to_interp_ftndescs [2].func) ((int*)&res, (int*)&arg0, wasm_native_to_interp_ftndescs [2].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_3) (int*, int*, int*, int*);
int32_t wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_GetArgumentCount (void * arg0, void * arg1) { 
  int32_t res;
  if (!(WasmInterpEntrySig_3)wasm_native_to_interp_ftndescs [3].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot", "DelegateUtils", "GetArgumentCount", 2);
  }
  ((WasmInterpEntrySig_3)wasm_native_to_interp_ftndescs [3].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [3].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_4) (int*, int*, int*, int*, int*, int*);
void wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_InvokeWithVariantArgs (void * arg0, void * arg1, void * arg2, int32_t arg3, void * arg4) { 
  if (!(WasmInterpEntrySig_4)wasm_native_to_interp_ftndescs [4].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot", "DelegateUtils", "InvokeWithVariantArgs", 5);
  }
  ((WasmInterpEntrySig_4)wasm_native_to_interp_ftndescs [4].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, wasm_native_to_interp_ftndescs [4].arg);
}

typedef void (*WasmInterpEntrySig_5) (int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_TrySerializeDelegateWithGCHandle (void * arg0, void * arg1) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_5)wasm_native_to_interp_ftndescs [5].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot", "DelegateUtils", "TrySerializeDelegateWithGCHandle", 2);
  }
  ((WasmInterpEntrySig_5)wasm_native_to_interp_ftndescs [5].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [5].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_6) (int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_TryDeserializeDelegateWithGCHandle (void * arg0, void * arg1) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_6)wasm_native_to_interp_ftndescs [6].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot", "DelegateUtils", "TryDeserializeDelegateWithGCHandle", 2);
  }
  ((WasmInterpEntrySig_6)wasm_native_to_interp_ftndescs [6].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [6].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_7) (int*, int*);
void wasm_native_to_interp_Godot_GodotSharp_GD_OnCoreApiAssemblyLoaded (uint32_t arg0) { 
  if (!(WasmInterpEntrySig_7)wasm_native_to_interp_ftndescs [7].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot", "GD", "OnCoreApiAssemblyLoaded", 1);
  }
  ((WasmInterpEntrySig_7)wasm_native_to_interp_ftndescs [7].func) ((int*)&arg0, wasm_native_to_interp_ftndescs [7].arg);
}

typedef void (*WasmInterpEntrySig_8) (int*);
void wasm_native_to_interp_Godot_GodotSharp_DisposablesTracker_OnGodotShuttingDown () { 
  if (!(WasmInterpEntrySig_8)wasm_native_to_interp_ftndescs [8].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot", "DisposablesTracker", "OnGodotShuttingDown", 0);
  }
  ((WasmInterpEntrySig_8)wasm_native_to_interp_ftndescs [8].func) (wasm_native_to_interp_ftndescs [8].arg);
}

typedef void (*WasmInterpEntrySig_9) (int*, int*, int*, int*, int*);
void wasm_native_to_interp_Godot_GodotSharp_SignalAwaiter_SignalCallback (void * arg0, void * arg1, int32_t arg2, void * arg3) { 
  if (!(WasmInterpEntrySig_9)wasm_native_to_interp_ftndescs [9].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot", "SignalAwaiter", "SignalCallback", 4);
  }
  ((WasmInterpEntrySig_9)wasm_native_to_interp_ftndescs [9].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, wasm_native_to_interp_ftndescs [9].arg);
}

typedef void (*WasmInterpEntrySig_10) (int*, int*, int*, int*, int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_Call (void * arg0, void * arg1, void * arg2, int32_t arg3, void * arg4, void * arg5) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_10)wasm_native_to_interp_ftndescs [10].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "CSharpInstanceBridge", "Call", 6);
  }
  ((WasmInterpEntrySig_10)wasm_native_to_interp_ftndescs [10].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [10].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_11) (int*, int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_Set (void * arg0, void * arg1, void * arg2) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_11)wasm_native_to_interp_ftndescs [11].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "CSharpInstanceBridge", "Set", 3);
  }
  ((WasmInterpEntrySig_11)wasm_native_to_interp_ftndescs [11].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [11].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_12) (int*, int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_Get (void * arg0, void * arg1, void * arg2) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_12)wasm_native_to_interp_ftndescs [12].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "CSharpInstanceBridge", "Get", 3);
  }
  ((WasmInterpEntrySig_12)wasm_native_to_interp_ftndescs [12].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [12].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_13) (int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_CallDispose (void * arg0, uint32_t arg1) { 
  if (!(WasmInterpEntrySig_13)wasm_native_to_interp_ftndescs [13].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "CSharpInstanceBridge", "CallDispose", 2);
  }
  ((WasmInterpEntrySig_13)wasm_native_to_interp_ftndescs [13].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [13].arg);
}

typedef void (*WasmInterpEntrySig_14) (int*, int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_CallToString (void * arg0, void * arg1, void * arg2) { 
  if (!(WasmInterpEntrySig_14)wasm_native_to_interp_ftndescs [14].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "CSharpInstanceBridge", "CallToString", 3);
  }
  ((WasmInterpEntrySig_14)wasm_native_to_interp_ftndescs [14].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [14].arg);
}

typedef void (*WasmInterpEntrySig_15) (int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_HasMethodUnknownParams (void * arg0, void * arg1) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_15)wasm_native_to_interp_ftndescs [15].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "CSharpInstanceBridge", "HasMethodUnknownParams", 2);
  }
  ((WasmInterpEntrySig_15)wasm_native_to_interp_ftndescs [15].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [15].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_16) (int*, int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_SerializeState (void * arg0, void * arg1, void * arg2) { 
  if (!(WasmInterpEntrySig_16)wasm_native_to_interp_ftndescs [16].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "CSharpInstanceBridge", "SerializeState", 3);
  }
  ((WasmInterpEntrySig_16)wasm_native_to_interp_ftndescs [16].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [16].arg);
}

typedef void (*WasmInterpEntrySig_17) (int*, int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_DeserializeState (void * arg0, void * arg1, void * arg2) { 
  if (!(WasmInterpEntrySig_17)wasm_native_to_interp_ftndescs [17].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "CSharpInstanceBridge", "DeserializeState", 3);
  }
  ((WasmInterpEntrySig_17)wasm_native_to_interp_ftndescs [17].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [17].arg);
}

typedef void (*WasmInterpEntrySig_18) (int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_GCHandleBridge_FreeGCHandle (void * arg0) { 
  if (!(WasmInterpEntrySig_18)wasm_native_to_interp_ftndescs [18].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "GCHandleBridge", "FreeGCHandle", 1);
  }
  ((WasmInterpEntrySig_18)wasm_native_to_interp_ftndescs [18].func) ((int*)&arg0, wasm_native_to_interp_ftndescs [18].arg);
}

typedef void (*WasmInterpEntrySig_19) (int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_Bridge_GodotSharp_GCHandleBridge_GCHandleIsTargetCollectible (void * arg0) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_19)wasm_native_to_interp_ftndescs [19].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "GCHandleBridge", "GCHandleIsTargetCollectible", 1);
  }
  ((WasmInterpEntrySig_19)wasm_native_to_interp_ftndescs [19].func) ((int*)&res, (int*)&arg0, wasm_native_to_interp_ftndescs [19].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_20) (int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_FrameCallback () { 
  if (!(WasmInterpEntrySig_20)wasm_native_to_interp_ftndescs [20].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "FrameCallback", 0);
  }
  ((WasmInterpEntrySig_20)wasm_native_to_interp_ftndescs [20].func) (wasm_native_to_interp_ftndescs [20].arg);
}

typedef void (*WasmInterpEntrySig_21) (int*, int*, int*, int*);
void * wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_CreateManagedForGodotObjectBinding (void * arg0, void * arg1) { 
  void * res;
  if (!(WasmInterpEntrySig_21)wasm_native_to_interp_ftndescs [21].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "CreateManagedForGodotObjectBinding", 2);
  }
  ((WasmInterpEntrySig_21)wasm_native_to_interp_ftndescs [21].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [21].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_22) (int*, int*, int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_CreateManagedForGodotObjectScriptInstance (void * arg0, void * arg1, void * arg2, int32_t arg3) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_22)wasm_native_to_interp_ftndescs [22].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "CreateManagedForGodotObjectScriptInstance", 4);
  }
  ((WasmInterpEntrySig_22)wasm_native_to_interp_ftndescs [22].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, wasm_native_to_interp_ftndescs [22].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_23) (int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_GetScriptNativeName (void * arg0, void * arg1) { 
  if (!(WasmInterpEntrySig_23)wasm_native_to_interp_ftndescs [23].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "GetScriptNativeName", 2);
  }
  ((WasmInterpEntrySig_23)wasm_native_to_interp_ftndescs [23].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [23].arg);
}

typedef void (*WasmInterpEntrySig_24) (int*, int*, int*, int*, int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_GetGlobalClassName (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) { 
  if (!(WasmInterpEntrySig_24)wasm_native_to_interp_ftndescs [24].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "GetGlobalClassName", 6);
  }
  ((WasmInterpEntrySig_24)wasm_native_to_interp_ftndescs [24].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [24].arg);
}

typedef void (*WasmInterpEntrySig_25) (int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_SetGodotObjectPtr (void * arg0, void * arg1) { 
  if (!(WasmInterpEntrySig_25)wasm_native_to_interp_ftndescs [25].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "SetGodotObjectPtr", 2);
  }
  ((WasmInterpEntrySig_25)wasm_native_to_interp_ftndescs [25].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [25].arg);
}

typedef void (*WasmInterpEntrySig_26) (int*, int*, int*, int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_RaiseEventSignal (void * arg0, void * arg1, void * arg2, int32_t arg3, void * arg4) { 
  if (!(WasmInterpEntrySig_26)wasm_native_to_interp_ftndescs [26].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "RaiseEventSignal", 5);
  }
  ((WasmInterpEntrySig_26)wasm_native_to_interp_ftndescs [26].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, wasm_native_to_interp_ftndescs [26].arg);
}

typedef void (*WasmInterpEntrySig_27) (int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_ScriptIsOrInherits (void * arg0, void * arg1) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_27)wasm_native_to_interp_ftndescs [27].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "ScriptIsOrInherits", 2);
  }
  ((WasmInterpEntrySig_27)wasm_native_to_interp_ftndescs [27].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [27].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_28) (int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_AddScriptBridge (void * arg0, void * arg1) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_28)wasm_native_to_interp_ftndescs [28].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "AddScriptBridge", 2);
  }
  ((WasmInterpEntrySig_28)wasm_native_to_interp_ftndescs [28].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [28].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_29) (int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_GetOrCreateScriptBridgeForPath (void * arg0, void * arg1) { 
  if (!(WasmInterpEntrySig_29)wasm_native_to_interp_ftndescs [29].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "GetOrCreateScriptBridgeForPath", 2);
  }
  ((WasmInterpEntrySig_29)wasm_native_to_interp_ftndescs [29].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [29].arg);
}

typedef void (*WasmInterpEntrySig_30) (int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_RemoveScriptBridge (void * arg0) { 
  if (!(WasmInterpEntrySig_30)wasm_native_to_interp_ftndescs [30].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "RemoveScriptBridge", 1);
  }
  ((WasmInterpEntrySig_30)wasm_native_to_interp_ftndescs [30].func) ((int*)&arg0, wasm_native_to_interp_ftndescs [30].arg);
}

typedef void (*WasmInterpEntrySig_31) (int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_TryReloadRegisteredScriptWithClass (void * arg0) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_31)wasm_native_to_interp_ftndescs [31].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "TryReloadRegisteredScriptWithClass", 1);
  }
  ((WasmInterpEntrySig_31)wasm_native_to_interp_ftndescs [31].func) ((int*)&res, (int*)&arg0, wasm_native_to_interp_ftndescs [31].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_32) (int*, int*, int*, int*, int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_UpdateScriptClassInfo (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) { 
  if (!(WasmInterpEntrySig_32)wasm_native_to_interp_ftndescs [32].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "UpdateScriptClassInfo", 6);
  }
  ((WasmInterpEntrySig_32)wasm_native_to_interp_ftndescs [32].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [32].arg);
}

typedef void (*WasmInterpEntrySig_33) (int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_GetPropertyInfoList (void * arg0, void * arg1) { 
  if (!(WasmInterpEntrySig_33)wasm_native_to_interp_ftndescs [33].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "GetPropertyInfoList", 2);
  }
  ((WasmInterpEntrySig_33)wasm_native_to_interp_ftndescs [33].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [33].arg);
}

typedef void (*WasmInterpEntrySig_34) (int*, int*, int*, int*, int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_CallStatic (void * arg0, void * arg1, void * arg2, int32_t arg3, void * arg4, void * arg5) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_34)wasm_native_to_interp_ftndescs [34].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "CallStatic", 6);
  }
  ((WasmInterpEntrySig_34)wasm_native_to_interp_ftndescs [34].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [34].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_35) (int*, int*, int*);
void wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_GetPropertyDefaultValues (void * arg0, void * arg1) { 
  if (!(WasmInterpEntrySig_35)wasm_native_to_interp_ftndescs [35].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "GetPropertyDefaultValues", 2);
  }
  ((WasmInterpEntrySig_35)wasm_native_to_interp_ftndescs [35].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [35].arg);
}

typedef void (*WasmInterpEntrySig_36) (int*, int*, int*, int*, int*);
uint32_t wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_SwapGCHandleForType (void * arg0, void * arg1, uint32_t arg2) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_36)wasm_native_to_interp_ftndescs [36].func) {
   mono_wasm_marshal_get_managed_wrapper ("GodotSharp","Godot.Bridge", "ScriptManagerBridge", "SwapGCHandleForType", 3);
  }
  ((WasmInterpEntrySig_36)wasm_native_to_interp_ftndescs [36].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [36].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_37) (int*, int*, int*, int*, int*, int*);
__attribute__((export_name("godotsharp_game_main_init")))
uint32_t godotsharp_game_main_init (void * arg0, void * arg1, void * arg2, int32_t arg3) { 
  uint32_t res;
  if (!(WasmInterpEntrySig_37)wasm_native_to_interp_ftndescs [37].func) {
   mono_wasm_marshal_get_managed_wrapper ("net-web-example","GodotPlugins.Game", "Main", "InitializeFromGameProject", 4);
  }
  ((WasmInterpEntrySig_37)wasm_native_to_interp_ftndescs [37].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, wasm_native_to_interp_ftndescs [37].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_38) (int*, int*, int*, int*, int*, int*, int*, int*);
int32_t wasm_native_to_interp_Internal_Runtime_InteropServices_System_Private_CoreLib_ComponentActivator_LoadAssemblyAndGetFunctionPointer (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) { 
  int32_t res;
  if (!(WasmInterpEntrySig_38)wasm_native_to_interp_ftndescs [38].func) {
   mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib","Internal.Runtime.InteropServices", "ComponentActivator", "LoadAssemblyAndGetFunctionPointer", 6);
  }
  ((WasmInterpEntrySig_38)wasm_native_to_interp_ftndescs [38].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [38].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_39) (int*, int*, int*, int*, int*);
int32_t wasm_native_to_interp_Internal_Runtime_InteropServices_System_Private_CoreLib_ComponentActivator_LoadAssembly (void * arg0, void * arg1, void * arg2) { 
  int32_t res;
  if (!(WasmInterpEntrySig_39)wasm_native_to_interp_ftndescs [39].func) {
   mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib","Internal.Runtime.InteropServices", "ComponentActivator", "LoadAssembly", 3);
  }
  ((WasmInterpEntrySig_39)wasm_native_to_interp_ftndescs [39].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [39].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_40) (int*, int*, int*, int*, int*, int*, int*, int*);
int32_t wasm_native_to_interp_Internal_Runtime_InteropServices_System_Private_CoreLib_ComponentActivator_LoadAssemblyBytes (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) { 
  int32_t res;
  if (!(WasmInterpEntrySig_40)wasm_native_to_interp_ftndescs [40].func) {
   mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib","Internal.Runtime.InteropServices", "ComponentActivator", "LoadAssemblyBytes", 6);
  }
  ((WasmInterpEntrySig_40)wasm_native_to_interp_ftndescs [40].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [40].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_41) (int*, int*, int*, int*, int*, int*, int*, int*);
int32_t wasm_native_to_interp_Internal_Runtime_InteropServices_System_Private_CoreLib_ComponentActivator_GetFunctionPointer (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) { 
  int32_t res;
  if (!(WasmInterpEntrySig_41)wasm_native_to_interp_ftndescs [41].func) {
   mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib","Internal.Runtime.InteropServices", "ComponentActivator", "GetFunctionPointer", 6);
  }
  ((WasmInterpEntrySig_41)wasm_native_to_interp_ftndescs [41].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [41].arg);
  return res;
}

typedef void (*WasmInterpEntrySig_42) (int*, int*, int*);
void wasm_native_to_interp_System_Globalization_System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback (void * arg0, void * arg1) { 
  if (!(WasmInterpEntrySig_42)wasm_native_to_interp_ftndescs [42].func) {
   mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib","System.Globalization", "CalendarData", "EnumCalendarInfoCallback", 2);
  }
  ((WasmInterpEntrySig_42)wasm_native_to_interp_ftndescs [42].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [42].arg);
}

typedef void (*WasmInterpEntrySig_43) (int*, int*, int*, int*, int*, int*, int*, int*);
void wasm_native_to_interp_System_Diagnostics_Tracing_System_Private_CoreLib_EventPipeEventProvider_Callback (void * arg0, int32_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4, void * arg5, void * arg6) { 
  if (!(WasmInterpEntrySig_43)wasm_native_to_interp_ftndescs [43].func) {
   mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib","System.Diagnostics.Tracing", "EventPipeEventProvider", "Callback", 7);
  }
  ((WasmInterpEntrySig_43)wasm_native_to_interp_ftndescs [43].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, wasm_native_to_interp_ftndescs [43].arg);
}

typedef void (*WasmInterpEntrySig_44) (int*, int*);
void wasm_native_to_interp_System_Runtime_InteropServices_JavaScript_System_Runtime_InteropServices_JavaScript_JavaScriptExports_BeforeSyncJSExport (void * arg0) { 
  if (!(WasmInterpEntrySig_44)wasm_native_to_interp_ftndescs [44].func) {
   mono_wasm_marshal_get_managed_wrapper ("System.Runtime.InteropServices.JavaScript","System.Runtime.InteropServices.JavaScript", "JavaScriptExports", "BeforeSyncJSExport", 1);
  }
  ((WasmInterpEntrySig_44)wasm_native_to_interp_ftndescs [44].func) ((int*)&arg0, wasm_native_to_interp_ftndescs [44].arg);
}

typedef void (*WasmInterpEntrySig_45) (int*, int*);
void wasm_native_to_interp_System_Runtime_InteropServices_JavaScript_System_Runtime_InteropServices_JavaScript_JavaScriptExports_AfterSyncJSExport (void * arg0) { 
  if (!(WasmInterpEntrySig_45)wasm_native_to_interp_ftndescs [45].func) {
   mono_wasm_marshal_get_managed_wrapper ("System.Runtime.InteropServices.JavaScript","System.Runtime.InteropServices.JavaScript", "JavaScriptExports", "AfterSyncJSExport", 1);
  }
  ((WasmInterpEntrySig_45)wasm_native_to_interp_ftndescs [45].func) ((int*)&arg0, wasm_native_to_interp_ftndescs [45].arg);
}

typedef void (*WasmInterpEntrySig_46) (int*);
void wasm_native_to_interp_System_Runtime_InteropServices_JavaScript_System_Runtime_InteropServices_JavaScript_JSSynchronizationContext_PumpHandler () { 
  if (!(WasmInterpEntrySig_46)wasm_native_to_interp_ftndescs [46].func) {
   mono_wasm_marshal_get_managed_wrapper ("System.Runtime.InteropServices.JavaScript","System.Runtime.InteropServices.JavaScript", "JSSynchronizationContext", "PumpHandler", 0);
  }
  ((WasmInterpEntrySig_46)wasm_native_to_interp_ftndescs [46].func) (wasm_native_to_interp_ftndescs [46].arg);
}


static void *wasm_native_to_interp_funcs[] = {
    wasm_native_to_interp_Godot_GodotSharp_DebuggingUtils_GetCurrentStackInfo, wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_DelegateEquals, wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_DelegateHash, wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_GetArgumentCount, wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_InvokeWithVariantArgs, wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_TrySerializeDelegateWithGCHandle, wasm_native_to_interp_Godot_GodotSharp_DelegateUtils_TryDeserializeDelegateWithGCHandle, wasm_native_to_interp_Godot_GodotSharp_GD_OnCoreApiAssemblyLoaded, wasm_native_to_interp_Godot_GodotSharp_DisposablesTracker_OnGodotShuttingDown, wasm_native_to_interp_Godot_GodotSharp_SignalAwaiter_SignalCallback, wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_Call, wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_Set, wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_Get, wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_CallDispose, wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_CallToString, wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_HasMethodUnknownParams, wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_SerializeState, wasm_native_to_interp_Godot_Bridge_GodotSharp_CSharpInstanceBridge_DeserializeState, wasm_native_to_interp_Godot_Bridge_GodotSharp_GCHandleBridge_FreeGCHandle, wasm_native_to_interp_Godot_Bridge_GodotSharp_GCHandleBridge_GCHandleIsTargetCollectible, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_FrameCallback, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_CreateManagedForGodotObjectBinding, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_CreateManagedForGodotObjectScriptInstance, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_GetScriptNativeName, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_GetGlobalClassName, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_SetGodotObjectPtr, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_RaiseEventSignal, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_ScriptIsOrInherits, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_AddScriptBridge, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_GetOrCreateScriptBridgeForPath, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_RemoveScriptBridge, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_TryReloadRegisteredScriptWithClass, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_UpdateScriptClassInfo, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_GetPropertyInfoList, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_CallStatic, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_GetPropertyDefaultValues, wasm_native_to_interp_Godot_Bridge_GodotSharp_ScriptManagerBridge_SwapGCHandleForType, godotsharp_game_main_init, wasm_native_to_interp_Internal_Runtime_InteropServices_System_Private_CoreLib_ComponentActivator_LoadAssemblyAndGetFunctionPointer, wasm_native_to_interp_Internal_Runtime_InteropServices_System_Private_CoreLib_ComponentActivator_LoadAssembly, wasm_native_to_interp_Internal_Runtime_InteropServices_System_Private_CoreLib_ComponentActivator_LoadAssemblyBytes, wasm_native_to_interp_Internal_Runtime_InteropServices_System_Private_CoreLib_ComponentActivator_GetFunctionPointer, wasm_native_to_interp_System_Globalization_System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback, wasm_native_to_interp_System_Diagnostics_Tracing_System_Private_CoreLib_EventPipeEventProvider_Callback, wasm_native_to_interp_System_Runtime_InteropServices_JavaScript_System_Runtime_InteropServices_JavaScript_JavaScriptExports_BeforeSyncJSExport, wasm_native_to_interp_System_Runtime_InteropServices_JavaScript_System_Runtime_InteropServices_JavaScript_JavaScriptExports_AfterSyncJSExport, wasm_native_to_interp_System_Runtime_InteropServices_JavaScript_System_Runtime_InteropServices_JavaScript_JSSynchronizationContext_PumpHandler
};

// these strings need to match the keys generated in get_native_to_interp
static const char *wasm_native_to_interp_map[] = {
    "GodotSharp_DebuggingUtils_GetCurrentStackInfo", "GodotSharp_DelegateUtils_DelegateEquals", "GodotSharp_DelegateUtils_DelegateHash", "GodotSharp_DelegateUtils_GetArgumentCount", "GodotSharp_DelegateUtils_InvokeWithVariantArgs", "GodotSharp_DelegateUtils_TrySerializeDelegateWithGCHandle", "GodotSharp_DelegateUtils_TryDeserializeDelegateWithGCHandle", "GodotSharp_GD_OnCoreApiAssemblyLoaded", "GodotSharp_DisposablesTracker_OnGodotShuttingDown", "GodotSharp_SignalAwaiter_SignalCallback", "GodotSharp_CSharpInstanceBridge_Call", "GodotSharp_CSharpInstanceBridge_Set", "GodotSharp_CSharpInstanceBridge_Get", "GodotSharp_CSharpInstanceBridge_CallDispose", "GodotSharp_CSharpInstanceBridge_CallToString", "GodotSharp_CSharpInstanceBridge_HasMethodUnknownParams", "GodotSharp_CSharpInstanceBridge_SerializeState", "GodotSharp_CSharpInstanceBridge_DeserializeState", "GodotSharp_GCHandleBridge_FreeGCHandle", "GodotSharp_GCHandleBridge_GCHandleIsTargetCollectible", "GodotSharp_ScriptManagerBridge_FrameCallback", "GodotSharp_ScriptManagerBridge_CreateManagedForGodotObjectBinding", "GodotSharp_ScriptManagerBridge_CreateManagedForGodotObjectScriptInstance", "GodotSharp_ScriptManagerBridge_GetScriptNativeName", "GodotSharp_ScriptManagerBridge_GetGlobalClassName", "GodotSharp_ScriptManagerBridge_SetGodotObjectPtr", "GodotSharp_ScriptManagerBridge_RaiseEventSignal", "GodotSharp_ScriptManagerBridge_ScriptIsOrInherits", "GodotSharp_ScriptManagerBridge_AddScriptBridge", "GodotSharp_ScriptManagerBridge_GetOrCreateScriptBridgeForPath", "GodotSharp_ScriptManagerBridge_RemoveScriptBridge", "GodotSharp_ScriptManagerBridge_TryReloadRegisteredScriptWithClass", "GodotSharp_ScriptManagerBridge_UpdateScriptClassInfo", "GodotSharp_ScriptManagerBridge_GetPropertyInfoList", "GodotSharp_ScriptManagerBridge_CallStatic", "GodotSharp_ScriptManagerBridge_GetPropertyDefaultValues", "GodotSharp_ScriptManagerBridge_SwapGCHandleForType", "net_web_example_Main_InitializeFromGameProject", "System_Private_CoreLib_ComponentActivator_LoadAssemblyAndGetFunctionPointer", "System_Private_CoreLib_ComponentActivator_LoadAssembly", "System_Private_CoreLib_ComponentActivator_LoadAssemblyBytes", "System_Private_CoreLib_ComponentActivator_GetFunctionPointer", "System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback", "System_Private_CoreLib_EventPipeEventProvider_Callback", "System_Runtime_InteropServices_JavaScript_JavaScriptExports_BeforeSyncJSExport", "System_Runtime_InteropServices_JavaScript_JavaScriptExports_AfterSyncJSExport", "System_Runtime_InteropServices_JavaScript_JSSynchronizationContext_PumpHandler"
};
