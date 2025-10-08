#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
312,
319,
321,
323,
339,
352,
353,
354,
355,
356,
357,
358,
359,
360,
363,
364,
365,
558,
559,
560,
592,
593,
594,
621,
622,
623,
740,
741,
742,
743,
744,
745,
746,
749,
845,
846,
847,
848,
849,
850,
851,
852,
853,
856,
866,
867,
869,
871,
888,
891,
904,
912,
913,
914,
915,
916,
917,
918,
919,
920,
921,
922,
923,
924,
925,
926,
927,
928,
930,
931,
932,
933,
934,
935,
936,
1038,
1039,
1040,
1041,
1042,
1043,
1044,
1045,
1046,
1047,
1048,
1049,
1050,
1051,
1052,
1053,
1054,
1056,
1057,
1058,
1059,
1060,
1061,
1062,
1144,
1145,
1149,
1160,
1161,
1234,
1242,
1245,
1247,
1253,
1254,
1256,
1257,
1261,
1263,
1266,
1267,
1269,
1270,
1273,
1274,
1275,
1278,
1280,
1283,
1285,
1287,
1294,
1299,
1301,
1304,
1384,
1387,
1389,
1399,
1400,
1401,
1403,
1409,
1410,
1411,
1412,
1413,
1421,
1422,
1423,
1427,
1428,
1431,
1436,
1437,
1438,
1736,
1976,
1978,
1999,
2000,
15575,
15576,
15578,
15579,
15580,
15581,
15582,
15583,
15585,
15586,
15587,
15588,
15589,
15590,
15629,
15631,
15641,
15643,
15645,
15647,
15650,
15712,
15719,
15720,
15721,
15723,
15724,
15725,
15726,
15727,
15729,
15731,
15732,
15733,
15842,
15844,
15846,
15848,
18273,
18277,
18281,
18282,
18283,
18284,
27862,
27863,
27864,
27865,
27887,
27888,
27889,
27890,
27891,
27894,
27895,
27896,
27898,
27899,
28135,
28136,
28137,
28138,
28966,
28970,
28984,
28985,
28986,
28987,
28988,
28989,
28990,
28991,
28993,
29522,
29523,
29524,
29530,
29531,
29610,
29611,
29673,
29680,
29687,
29698,
29702,
29738,
29763,
29931,
29944,
29946,
29948,
29971,
29973,
29974,
29975,
29976,
29977,
29986,
30002,
30024,
30025,
30036,
30038,
30045,
30046,
30049,
30051,
30056,
30057,
30075,
30076,
30083,
30085,
30096,
30099,
30102,
30103,
30104,
30116,
30126,
30132,
30133,
30134,
30136,
30137,
30155,
30157,
30173,
30217,
30218,
30219,
30220,
30221,
30222,
30223,
30224,
30225,
30226,
30227,
30228,
30251,
30257,
30266,
30267,
30268,
30305,
30306,
31178,
31179,
31180,
31270,
31313,
31439,
31440,
31518,
31787,
31788,
31821,
31822,
31823,
31830,
31928,
32025,
32026,
33320,
33321,
34500,
34502,
34504,
34510,
34526,
34871,
34872,
34873,
34875,
34876,
34878,
34879,
34880,
34881,
34882,
34883,
34884,
34885,
34889,
34890,
34891,
34892,
34893,
34894,
34895,
34896,
34897,
34898,
34899,
34900,
34901,
34902,
34903,
34904,
37390,
37411,
37413,
37415,
};
void ves_icall_System_ArgIterator_Setup (int,int,int);
void ves_icall_System_ArgIterator_IntGetNextArg (int,int);
void ves_icall_System_ArgIterator_IntGetNextArgWithType (int,int,int);
int ves_icall_System_ArgIterator_IntGetNextArgType (int);
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int mono_environment_exitcode_get ();
void mono_environment_exitcode_set (int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_Exit (int);
int ves_icall_System_Environment_GetCommandLineArgs_raw (int);
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
int ves_icall_System_GC_GetMaxGeneration ();
void ves_icall_System_GC_InternalCollect (int);
void ves_icall_System_GC_AddPressure (uint64_t);
void ves_icall_System_GC_RemovePressure (uint64_t);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
int64_t ves_icall_System_GC_GetAllocatedBytesForCurrentThread ();
int64_t ves_icall_System_GC_GetTotalAllocatedBytes_raw (int,int);
int ves_icall_System_GC_GetGeneration_raw (int,int);
void ves_icall_System_GC_WaitForPendingFinalizers ();
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
int64_t ves_icall_System_GC_GetTotalMemory (int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_System_RuntimeFieldHandle_GetValueDirect_raw (int,int,int,int,int);
void ves_icall_System_RuntimeFieldHandle_SetValueDirect_raw (int,int,int,int,int,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_IsUnmanagedFunctionPointerInternal (int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeType_GetFunctionPointerTypeModifiers_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCallingConventionFromFunctionPointerInternal (int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_TypedReference_ToObject_raw (int,int);
void ves_icall_System_TypedReference_InternalMakeTypedReference_raw (int,int,int,int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Decrement_Long (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Interlocked_MemoryBarrierProcessWide ();
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int64_t ves_icall_System_Threading_Monitor_Monitor_get_lock_contention_count ();
void ves_icall_System_Threading_Thread_StartInternal_raw (int,int,int);
uint64_t ves_icall_System_Threading_Thread_GetCurrentOSThreadId_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
int ves_icall_System_Threading_Thread_Join_internal_raw (int,int,int);
void ves_icall_System_Threading_Thread_Interrupt_internal_raw (int,int);
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
int ves_icall_System_Threading_LowLevelLifoSemaphore_InitInternal ();
void ves_icall_System_Threading_LowLevelLifoSemaphore_DeleteInternal (int);
int ves_icall_System_Threading_LowLevelLifoSemaphore_TimedWaitInternal (int,int);
void ves_icall_System_Threading_LowLevelLifoSemaphore_ReleaseInternal (int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_DestroyStructure_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_OffsetOf_raw (int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureHelper_raw (int,int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegateInternal_raw (int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_Prelink_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadFromPath_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
void ves_icall_System_Runtime_InteropServices_NativeLibrary_FreeLib_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_GetSymbol_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_PrepareMethod_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunModuleConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SizeOf_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetCallingAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void ves_icall_System_Reflection_AssemblyName_FreeAssemblyName (int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
int ves_icall_GetCurrentMethod_raw (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetEntryPoint_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetTopLevelForwardedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInfoInternal_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetReferencedAssemblies_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_FieldInfo_GetTypeModifiers_raw (int,int,int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_GetGlobalType_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveTypeToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveFieldToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveStringToken_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMemberToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveSignature_raw (int,int,int,int);
void ves_icall_System_Reflection_RuntimeModule_GetPEKind_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_RuntimePropertyInfo_GetTypeModifiers_raw (int,int,int,int);
int ves_icall_property_info_get_default_value_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_AssemblyExtensions_ApplyUpdateEnabled (int);
int ves_icall_AssemblyExtensions_GetApplyUpdateCapabilities_raw (int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_EnumBuilder_setup_enum_type_raw (int,int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_SignatureHelper_get_signature_local_raw (int,int);
int ves_icall_SignatureHelper_get_signature_field_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
uint64_t ves_icall_System_Diagnostics_Tracing_EventPipeInternal_Enable (int,int,int,int,int);
void ves_icall_System_Diagnostics_Tracing_EventPipeInternal_Disable (uint64_t);
int ves_icall_System_Diagnostics_Tracing_EventPipeInternal_CreateProvider_raw (int,int,int,int);
int ves_icall_System_Diagnostics_Tracing_EventPipeInternal_DefineEvent (int,int,int64_t,int,int,int,int);
int ves_icall_System_Diagnostics_Tracing_EventPipeInternal_GetProvider (int);
void ves_icall_System_Diagnostics_Tracing_EventPipeInternal_DeleteProvider (int);
int ves_icall_System_Diagnostics_Tracing_EventPipeInternal_EventActivityIdControl (int,int);
void ves_icall_System_Diagnostics_Tracing_EventPipeInternal_WriteEventData (int,int,int,int,int);
int ves_icall_System_Diagnostics_Tracing_EventPipeInternal_GetSessionInfo (uint64_t,int);
int ves_icall_System_Diagnostics_Tracing_EventPipeInternal_GetNextEvent (uint64_t,int);
int ves_icall_System_Diagnostics_Tracing_EventPipeInternal_SignalSession (uint64_t);
int ves_icall_System_Diagnostics_Tracing_EventPipeInternal_WaitForSessionSignal (uint64_t,int);
uint64_t ves_icall_System_Diagnostics_Tracing_EventPipeInternal_GetRuntimeCounterValue (int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionLockCreated (int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStart (int,int,int,int,uint64_t);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStop (int,int,double);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadStart (int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadStop (int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadWait (int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolMinMaxThreads (int,int,int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentSample (double,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentAdjustment (double,int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentStats (double,double,double,double,double,double,double,double,double,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIOEnqueue (int,int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIODequeue (int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkingThreadCount (int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIOPack (int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStart (int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStop (int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 312,
ves_icall_System_ArgIterator_Setup,
// token 319,
ves_icall_System_ArgIterator_IntGetNextArg,
// token 321,
ves_icall_System_ArgIterator_IntGetNextArgWithType,
// token 323,
ves_icall_System_ArgIterator_IntGetNextArgType,
// token 339,
ves_icall_System_Array_InternalCreate,
// token 352,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 353,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 354,
ves_icall_System_Array_CanChangePrimitive,
// token 355,
ves_icall_System_Array_FastCopy,
// token 356,
ves_icall_System_Array_GetLengthInternal_raw,
// token 357,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 358,
ves_icall_System_Array_GetGenericValue_icall,
// token 359,
ves_icall_System_Array_GetValueImpl_raw,
// token 360,
ves_icall_System_Array_SetGenericValue_icall,
// token 363,
ves_icall_System_Array_SetValueImpl_raw,
// token 364,
ves_icall_System_Array_InitializeInternal_raw,
// token 365,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 558,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 559,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 560,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 592,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 593,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 594,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 621,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 622,
ves_icall_System_Enum_InternalGetCorElementType,
// token 623,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 740,
mono_environment_exitcode_get,
// token 741,
mono_environment_exitcode_set,
// token 742,
ves_icall_System_Environment_get_ProcessorCount,
// token 743,
ves_icall_System_Environment_get_TickCount,
// token 744,
ves_icall_System_Environment_get_TickCount64,
// token 745,
ves_icall_System_Environment_Exit,
// token 746,
ves_icall_System_Environment_GetCommandLineArgs_raw,
// token 749,
ves_icall_System_Environment_FailFast_raw,
// token 845,
ves_icall_System_GC_GetCollectionCount,
// token 846,
ves_icall_System_GC_GetMaxGeneration,
// token 847,
ves_icall_System_GC_InternalCollect,
// token 848,
ves_icall_System_GC_AddPressure,
// token 849,
ves_icall_System_GC_RemovePressure,
// token 850,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 851,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 852,
ves_icall_System_GC_GetAllocatedBytesForCurrentThread,
// token 853,
ves_icall_System_GC_GetTotalAllocatedBytes_raw,
// token 856,
ves_icall_System_GC_GetGeneration_raw,
// token 866,
ves_icall_System_GC_WaitForPendingFinalizers,
// token 867,
ves_icall_System_GC_SuppressFinalize_raw,
// token 869,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 871,
ves_icall_System_GC_GetTotalMemory,
// token 888,
ves_icall_System_GC_GetGCMemoryInfo,
// token 891,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 904,
ves_icall_System_Object_MemberwiseClone_raw,
// token 912,
ves_icall_System_Math_Acos,
// token 913,
ves_icall_System_Math_Acosh,
// token 914,
ves_icall_System_Math_Asin,
// token 915,
ves_icall_System_Math_Asinh,
// token 916,
ves_icall_System_Math_Atan,
// token 917,
ves_icall_System_Math_Atan2,
// token 918,
ves_icall_System_Math_Atanh,
// token 919,
ves_icall_System_Math_Cbrt,
// token 920,
ves_icall_System_Math_Ceiling,
// token 921,
ves_icall_System_Math_Cos,
// token 922,
ves_icall_System_Math_Cosh,
// token 923,
ves_icall_System_Math_Exp,
// token 924,
ves_icall_System_Math_Floor,
// token 925,
ves_icall_System_Math_Log,
// token 926,
ves_icall_System_Math_Log10,
// token 927,
ves_icall_System_Math_Pow,
// token 928,
ves_icall_System_Math_Sin,
// token 930,
ves_icall_System_Math_Sinh,
// token 931,
ves_icall_System_Math_Sqrt,
// token 932,
ves_icall_System_Math_Tan,
// token 933,
ves_icall_System_Math_Tanh,
// token 934,
ves_icall_System_Math_FusedMultiplyAdd,
// token 935,
ves_icall_System_Math_Log2,
// token 936,
ves_icall_System_Math_ModF,
// token 1038,
ves_icall_System_MathF_Acos,
// token 1039,
ves_icall_System_MathF_Acosh,
// token 1040,
ves_icall_System_MathF_Asin,
// token 1041,
ves_icall_System_MathF_Asinh,
// token 1042,
ves_icall_System_MathF_Atan,
// token 1043,
ves_icall_System_MathF_Atan2,
// token 1044,
ves_icall_System_MathF_Atanh,
// token 1045,
ves_icall_System_MathF_Cbrt,
// token 1046,
ves_icall_System_MathF_Ceiling,
// token 1047,
ves_icall_System_MathF_Cos,
// token 1048,
ves_icall_System_MathF_Cosh,
// token 1049,
ves_icall_System_MathF_Exp,
// token 1050,
ves_icall_System_MathF_Floor,
// token 1051,
ves_icall_System_MathF_Log,
// token 1052,
ves_icall_System_MathF_Log10,
// token 1053,
ves_icall_System_MathF_Pow,
// token 1054,
ves_icall_System_MathF_Sin,
// token 1056,
ves_icall_System_MathF_Sinh,
// token 1057,
ves_icall_System_MathF_Sqrt,
// token 1058,
ves_icall_System_MathF_Tan,
// token 1059,
ves_icall_System_MathF_Tanh,
// token 1060,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 1061,
ves_icall_System_MathF_Log2,
// token 1062,
ves_icall_System_MathF_ModF,
// token 1144,
ves_icall_System_RuntimeFieldHandle_GetValueDirect_raw,
// token 1145,
ves_icall_System_RuntimeFieldHandle_SetValueDirect_raw,
// token 1149,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 1160,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 1161,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 1234,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 1242,
ves_icall_RuntimeType_make_array_type_raw,
// token 1245,
ves_icall_RuntimeType_make_byref_type_raw,
// token 1247,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 1253,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 1254,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 1256,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 1257,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 1261,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 1263,
ves_icall_RuntimeType_GetPacking_raw,
// token 1266,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 1267,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 1269,
ves_icall_System_RuntimeType_getFullName_raw,
// token 1270,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 1273,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 1274,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 1275,
ves_icall_RuntimeType_GetFields_native_raw,
// token 1278,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 1280,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 1283,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 1285,
ves_icall_RuntimeType_GetName_raw,
// token 1287,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1294,
ves_icall_RuntimeType_IsUnmanagedFunctionPointerInternal,
// token 1299,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 1301,
ves_icall_RuntimeType_GetFunctionPointerTypeModifiers_raw,
// token 1304,
ves_icall_RuntimeType_GetCallingConventionFromFunctionPointerInternal,
// token 1384,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1387,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1389,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1399,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1400,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1401,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1403,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1409,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1410,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1411,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1412,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1413,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1421,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1422,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1423,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1427,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1428,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1431,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1436,
ves_icall_System_String_FastAllocateString_raw,
// token 1437,
ves_icall_System_String_InternalIsInterned_raw,
// token 1438,
ves_icall_System_String_InternalIntern_raw,
// token 1736,
ves_icall_System_Type_internal_from_handle_raw,
// token 1976,
ves_icall_System_TypedReference_ToObject_raw,
// token 1978,
ves_icall_System_TypedReference_InternalMakeTypedReference_raw,
// token 1999,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 2000,
ves_icall_System_ValueType_Equals_raw,
// token 15575,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 15576,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 15578,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 15579,
ves_icall_System_Threading_Interlocked_Decrement_Long,
// token 15580,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 15581,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 15582,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 15583,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 15585,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 15586,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 15587,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 15588,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 15589,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 15590,
ves_icall_System_Threading_Interlocked_MemoryBarrierProcessWide,
// token 15629,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 15631,
mono_monitor_exit_icall_raw,
// token 15641,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 15643,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 15645,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 15647,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 15650,
ves_icall_System_Threading_Monitor_Monitor_get_lock_contention_count,
// token 15712,
ves_icall_System_Threading_Thread_StartInternal_raw,
// token 15719,
ves_icall_System_Threading_Thread_GetCurrentOSThreadId_raw,
// token 15720,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 15721,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 15723,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 15724,
ves_icall_System_Threading_Thread_GetState_raw,
// token 15725,
ves_icall_System_Threading_Thread_SetState_raw,
// token 15726,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 15727,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 15729,
ves_icall_System_Threading_Thread_YieldInternal,
// token 15731,
ves_icall_System_Threading_Thread_Join_internal_raw,
// token 15732,
ves_icall_System_Threading_Thread_Interrupt_internal_raw,
// token 15733,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 15842,
ves_icall_System_Threading_LowLevelLifoSemaphore_InitInternal,
// token 15844,
ves_icall_System_Threading_LowLevelLifoSemaphore_DeleteInternal,
// token 15846,
ves_icall_System_Threading_LowLevelLifoSemaphore_TimedWaitInternal,
// token 15848,
ves_icall_System_Threading_LowLevelLifoSemaphore_ReleaseInternal,
// token 18273,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 18277,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 18281,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 18282,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 18283,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 18284,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 27862,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 27863,
ves_icall_System_GCHandle_InternalFree_raw,
// token 27864,
ves_icall_System_GCHandle_InternalGet_raw,
// token 27865,
ves_icall_System_GCHandle_InternalSet_raw,
// token 27887,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 27888,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 27889,
ves_icall_System_Runtime_InteropServices_Marshal_DestroyStructure_raw,
// token 27890,
ves_icall_System_Runtime_InteropServices_Marshal_OffsetOf_raw,
// token 27891,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 27894,
ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureHelper_raw,
// token 27895,
ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw,
// token 27896,
ves_icall_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegateInternal_raw,
// token 27898,
ves_icall_System_Runtime_InteropServices_Marshal_Prelink_raw,
// token 27899,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 28135,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadFromPath_raw,
// token 28136,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 28137,
ves_icall_System_Runtime_InteropServices_NativeLibrary_FreeLib_raw,
// token 28138,
ves_icall_System_Runtime_InteropServices_NativeLibrary_GetSymbol_raw,
// token 28966,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 28970,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 28984,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_PrepareMethod_raw,
// token 28985,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 28986,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 28987,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 28988,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 28989,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunModuleConstructor_raw,
// token 28990,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 28991,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 28993,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SizeOf_raw,
// token 29522,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 29523,
ves_icall_System_Reflection_Assembly_GetCallingAssembly_raw,
// token 29524,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 29530,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 29531,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 29610,
ves_icall_System_Reflection_AssemblyName_FreeAssemblyName,
// token 29611,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 29673,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 29680,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 29687,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 29698,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 29702,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 29738,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 29763,
ves_icall_GetCurrentMethod_raw,
// token 29931,
ves_icall_System_Reflection_RuntimeAssembly_GetEntryPoint_raw,
// token 29944,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 29946,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 29948,
ves_icall_System_Reflection_RuntimeAssembly_GetTopLevelForwardedTypes_raw,
// token 29971,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 29973,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInfoInternal_raw,
// token 29974,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 29975,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 29976,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 29977,
ves_icall_System_Reflection_Assembly_InternalGetReferencedAssemblies_raw,
// token 29986,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 30002,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 30024,
ves_icall_reflection_get_token_raw,
// token 30025,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 30036,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 30038,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 30045,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 30046,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 30049,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 30051,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 30056,
ves_icall_reflection_get_token_raw,
// token 30057,
ves_icall_System_Reflection_FieldInfo_GetTypeModifiers_raw,
// token 30075,
ves_icall_get_method_info_raw,
// token 30076,
ves_icall_get_method_attributes,
// token 30083,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 30085,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 30096,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw,
// token 30099,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 30102,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 30103,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 30104,
ves_icall_reflection_get_token_raw,
// token 30116,
ves_icall_InternalInvoke_raw,
// token 30126,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 30132,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 30133,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 30134,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 30136,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 30137,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 30155,
ves_icall_InvokeClassConstructor_raw,
// token 30157,
ves_icall_InternalInvoke_raw,
// token 30173,
ves_icall_reflection_get_token_raw,
// token 30217,
ves_icall_reflection_get_token_raw,
// token 30218,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 30219,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 30220,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 30221,
ves_icall_System_Reflection_RuntimeModule_GetGlobalType_raw,
// token 30222,
ves_icall_System_Reflection_RuntimeModule_ResolveTypeToken_raw,
// token 30223,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 30224,
ves_icall_System_Reflection_RuntimeModule_ResolveFieldToken_raw,
// token 30225,
ves_icall_System_Reflection_RuntimeModule_ResolveStringToken_raw,
// token 30226,
ves_icall_System_Reflection_RuntimeModule_ResolveMemberToken_raw,
// token 30227,
ves_icall_System_Reflection_RuntimeModule_ResolveSignature_raw,
// token 30228,
ves_icall_System_Reflection_RuntimeModule_GetPEKind_raw,
// token 30251,
ves_icall_reflection_get_token_raw,
// token 30257,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 30266,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 30267,
ves_icall_RuntimePropertyInfo_GetTypeModifiers_raw,
// token 30268,
ves_icall_property_info_get_default_value_raw,
// token 30305,
ves_icall_reflection_get_token_raw,
// token 30306,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 31178,
ves_icall_AssemblyExtensions_ApplyUpdateEnabled,
// token 31179,
ves_icall_AssemblyExtensions_GetApplyUpdateCapabilities_raw,
// token 31180,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 31270,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 31313,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 31439,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 31440,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 31518,
ves_icall_EnumBuilder_setup_enum_type_raw,
// token 31787,
ves_icall_ModuleBuilder_basic_init_raw,
// token 31788,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 31821,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 31822,
ves_icall_ModuleBuilder_getToken_raw,
// token 31823,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 31830,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 31928,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 32025,
ves_icall_SignatureHelper_get_signature_local_raw,
// token 32026,
ves_icall_SignatureHelper_get_signature_field_raw,
// token 33320,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 33321,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 34500,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 34502,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 34504,
ves_icall_System_Diagnostics_Debugger_Log,
// token 34510,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 34526,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 34871,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_Enable,
// token 34872,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_Disable,
// token 34873,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_CreateProvider_raw,
// token 34875,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_DefineEvent,
// token 34876,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_GetProvider,
// token 34878,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_DeleteProvider,
// token 34879,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_EventActivityIdControl,
// token 34880,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_WriteEventData,
// token 34881,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_GetSessionInfo,
// token 34882,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_GetNextEvent,
// token 34883,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_SignalSession,
// token 34884,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_WaitForSessionSignal,
// token 34885,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_GetRuntimeCounterValue,
// token 34889,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionLockCreated,
// token 34890,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStart,
// token 34891,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStop,
// token 34892,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadStart,
// token 34893,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadStop,
// token 34894,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadWait,
// token 34895,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolMinMaxThreads,
// token 34896,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentSample,
// token 34897,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentAdjustment,
// token 34898,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentStats,
// token 34899,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIOEnqueue,
// token 34900,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIODequeue,
// token 34901,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkingThreadCount,
// token 34902,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIOPack,
// token 34903,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStart,
// token 34904,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStop,
// token 37390,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 37411,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 37413,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 37415,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
0,
0,
0,
4,
4,
0,
0,
0,
0,
0,
4,
4,
0,
4,
4,
0,
4,
4,
0,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
};
