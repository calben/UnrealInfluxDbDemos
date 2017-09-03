// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/InfluxDBUnrealClient.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfluxDBUnrealClient() {}
// Cross Module References
	INFLUXDBTOOLS_API UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_AddToLineProtocolBuffer();
	INFLUXDBTOOLS_API UClass* Z_Construct_UClass_UInfluxDBUnrealClient();
	INFLUXDBTOOLS_API UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_BuildAndAddLineProtocolToBuffer();
	INFLUXDBTOOLS_API UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_BuildLineProtocol();
	INFLUXDBTOOLS_API UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_ConvertTransformToLineProtocol();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	INFLUXDBTOOLS_API UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_DumpLineProtocolBufferToDatabase();
	INFLUXDBTOOLS_API UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_PostLineProtocolToInfluxDBServer();
	INFLUXDBTOOLS_API UClass* Z_Construct_UClass_UInfluxDBUnrealClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_InfluxDbTools();
// End Cross Module References
	void UInfluxDBUnrealClient::StaticRegisterNativesUInfluxDBUnrealClient()
	{
		UClass* Class = UInfluxDBUnrealClient::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddToLineProtocolBuffer", (Native)&UInfluxDBUnrealClient::execAddToLineProtocolBuffer },
			{ "BuildAndAddLineProtocolToBuffer", (Native)&UInfluxDBUnrealClient::execBuildAndAddLineProtocolToBuffer },
			{ "BuildLineProtocol", (Native)&UInfluxDBUnrealClient::execBuildLineProtocol },
			{ "ConvertTransformToLineProtocol", (Native)&UInfluxDBUnrealClient::execConvertTransformToLineProtocol },
			{ "DumpLineProtocolBufferToDatabase", (Native)&UInfluxDBUnrealClient::execDumpLineProtocolBufferToDatabase },
			{ "PostLineProtocolToInfluxDBServer", (Native)&UInfluxDBUnrealClient::execPostLineProtocolToInfluxDBServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_AddToLineProtocolBuffer()
	{
		struct InfluxDBUnrealClient_eventAddToLineProtocolBuffer_Parms
		{
			FString line;
		};
		UObject* Outer = Z_Construct_UClass_UInfluxDBUnrealClient();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddToLineProtocolBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(InfluxDBUnrealClient_eventAddToLineProtocolBuffer_Parms));
			UProperty* NewProp_line = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("line"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(line, InfluxDBUnrealClient_eventAddToLineProtocolBuffer_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/InfluxDBUnrealClient.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_BuildAndAddLineProtocolToBuffer()
	{
		struct InfluxDBUnrealClient_eventBuildAndAddLineProtocolToBuffer_Parms
		{
			FString label;
			FString values;
		};
		UObject* Outer = Z_Construct_UClass_UInfluxDBUnrealClient();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BuildAndAddLineProtocolToBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(InfluxDBUnrealClient_eventBuildAndAddLineProtocolToBuffer_Parms));
			UProperty* NewProp_values = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("values"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(values, InfluxDBUnrealClient_eventBuildAndAddLineProtocolToBuffer_Parms), 0x0010000000000080);
			UProperty* NewProp_label = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("label"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(label, InfluxDBUnrealClient_eventBuildAndAddLineProtocolToBuffer_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/InfluxDBUnrealClient.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_BuildLineProtocol()
	{
		struct InfluxDBUnrealClient_eventBuildLineProtocol_Parms
		{
			FString label;
			FString values;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UInfluxDBUnrealClient();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BuildLineProtocol"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(InfluxDBUnrealClient_eventBuildLineProtocol_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, InfluxDBUnrealClient_eventBuildLineProtocol_Parms), 0x0010000000000580);
			UProperty* NewProp_values = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("values"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(values, InfluxDBUnrealClient_eventBuildLineProtocol_Parms), 0x0010000000000080);
			UProperty* NewProp_label = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("label"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(label, InfluxDBUnrealClient_eventBuildLineProtocol_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/InfluxDBUnrealClient.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_ConvertTransformToLineProtocol()
	{
		struct InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms
		{
			FTransform transform;
			FString label;
			bool bIncludeLocation;
			bool bIncludeRotation;
			bool bIncludeScale;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UInfluxDBUnrealClient();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConvertTransformToLineProtocol"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIncludeScale, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms);
			UProperty* NewProp_bIncludeScale = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIncludeScale"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIncludeScale, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIncludeScale, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIncludeRotation, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms);
			UProperty* NewProp_bIncludeRotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIncludeRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIncludeRotation, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIncludeRotation, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIncludeLocation, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms);
			UProperty* NewProp_bIncludeLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIncludeLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIncludeLocation, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIncludeLocation, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms), sizeof(bool), true);
			UProperty* NewProp_label = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("label"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(label, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms), 0x0010000000000080);
			UProperty* NewProp_transform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("transform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(transform, InfluxDBUnrealClient_eventConvertTransformToLineProtocol_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FTransform());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bIncludeLocation"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bIncludeRotation"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bIncludeScale"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/InfluxDBUnrealClient.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_DumpLineProtocolBufferToDatabase()
	{
		UObject* Outer = Z_Construct_UClass_UInfluxDBUnrealClient();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DumpLineProtocolBufferToDatabase"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/InfluxDBUnrealClient.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInfluxDBUnrealClient_PostLineProtocolToInfluxDBServer()
	{
		struct InfluxDBUnrealClient_eventPostLineProtocolToInfluxDBServer_Parms
		{
			FString lines;
		};
		UObject* Outer = Z_Construct_UClass_UInfluxDBUnrealClient();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostLineProtocolToInfluxDBServer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(InfluxDBUnrealClient_eventPostLineProtocolToInfluxDBServer_Parms));
			UProperty* NewProp_lines = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("lines"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(lines, InfluxDBUnrealClient_eventPostLineProtocolToInfluxDBServer_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/InfluxDBUnrealClient.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInfluxDBUnrealClient_NoRegister()
	{
		return UInfluxDBUnrealClient::StaticClass();
	}
	UClass* Z_Construct_UClass_UInfluxDBUnrealClient()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_InfluxDbTools();
			OuterClass = UInfluxDBUnrealClient::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UInfluxDBUnrealClient_AddToLineProtocolBuffer());
				OuterClass->LinkChild(Z_Construct_UFunction_UInfluxDBUnrealClient_BuildAndAddLineProtocolToBuffer());
				OuterClass->LinkChild(Z_Construct_UFunction_UInfluxDBUnrealClient_BuildLineProtocol());
				OuterClass->LinkChild(Z_Construct_UFunction_UInfluxDBUnrealClient_ConvertTransformToLineProtocol());
				OuterClass->LinkChild(Z_Construct_UFunction_UInfluxDBUnrealClient_DumpLineProtocolBufferToDatabase());
				OuterClass->LinkChild(Z_Construct_UFunction_UInfluxDBUnrealClient_PostLineProtocolToInfluxDBServer());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPrintDebugToLog, UInfluxDBUnrealClient);
				UProperty* NewProp_bPrintDebugToLog = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bPrintDebugToLog"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPrintDebugToLog, UInfluxDBUnrealClient), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bPrintDebugToLog, UInfluxDBUnrealClient), sizeof(bool), true);
				UProperty* NewProp_LineProtocolBuffer = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LineProtocolBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LineProtocolBuffer, UInfluxDBUnrealClient), 0x0010000000020015);
				UProperty* NewProp_LineProtocolBuffer_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LineProtocolBuffer, TEXT("LineProtocolBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000);
				UProperty* NewProp_UrlAddressAsString = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UrlAddressAsString"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(UrlAddressAsString, UInfluxDBUnrealClient), 0x0010000000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInfluxDBUnrealClient_AddToLineProtocolBuffer(), "AddToLineProtocolBuffer"); // 1550674806
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInfluxDBUnrealClient_BuildAndAddLineProtocolToBuffer(), "BuildAndAddLineProtocolToBuffer"); // 3249457873
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInfluxDBUnrealClient_BuildLineProtocol(), "BuildLineProtocol"); // 2201279329
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInfluxDBUnrealClient_ConvertTransformToLineProtocol(), "ConvertTransformToLineProtocol"); // 1480942180
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInfluxDBUnrealClient_DumpLineProtocolBufferToDatabase(), "DumpLineProtocolBufferToDatabase"); // 2844688754
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInfluxDBUnrealClient_PostLineProtocolToInfluxDBServer(), "PostLineProtocolToInfluxDBServer"); // 3077640509
				static TCppClassTypeInfo<TCppClassTypeTraits<UInfluxDBUnrealClient> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InfluxDBUnrealClient.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/InfluxDBUnrealClient.h"));
				MetaData->SetValue(NewProp_bPrintDebugToLog, TEXT("Category"), TEXT("InfluxDBUnrealClient"));
				MetaData->SetValue(NewProp_bPrintDebugToLog, TEXT("ModuleRelativePath"), TEXT("Public/InfluxDBUnrealClient.h"));
				MetaData->SetValue(NewProp_LineProtocolBuffer, TEXT("Category"), TEXT("InfluxDBUnrealClient"));
				MetaData->SetValue(NewProp_LineProtocolBuffer, TEXT("ModuleRelativePath"), TEXT("Public/InfluxDBUnrealClient.h"));
				MetaData->SetValue(NewProp_UrlAddressAsString, TEXT("Category"), TEXT("InfluxDBUnrealClient"));
				MetaData->SetValue(NewProp_UrlAddressAsString, TEXT("ModuleRelativePath"), TEXT("Public/InfluxDBUnrealClient.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInfluxDBUnrealClient, 4133721573);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInfluxDBUnrealClient(Z_Construct_UClass_UInfluxDBUnrealClient, &UInfluxDBUnrealClient::StaticClass, TEXT("/Script/InfluxDbTools"), TEXT("UInfluxDBUnrealClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInfluxDBUnrealClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
