// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef INFLUXDBTOOLS_InfluxDBUnrealClient_generated_h
#error "InfluxDBUnrealClient.generated.h already included, missing '#pragma once' in InfluxDBUnrealClient.h"
#endif
#define INFLUXDBTOOLS_InfluxDBUnrealClient_generated_h

#define UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPostLineProtocolToInfluxDBServer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_lines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostLineProtocolToInfluxDBServer(Z_Param_lines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildAndAddLineProtocolToBuffer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_label); \
		P_GET_PROPERTY(UStrProperty,Z_Param_values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BuildAndAddLineProtocolToBuffer(Z_Param_label,Z_Param_values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildLineProtocol) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_label); \
		P_GET_PROPERTY(UStrProperty,Z_Param_values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UInfluxDBUnrealClient::BuildLineProtocol(Z_Param_label,Z_Param_values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertTransformToLineProtocol) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_transform); \
		P_GET_PROPERTY(UStrProperty,Z_Param_label); \
		P_GET_UBOOL(Z_Param_bIncludeLocation); \
		P_GET_UBOOL(Z_Param_bIncludeRotation); \
		P_GET_UBOOL(Z_Param_bIncludeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UInfluxDBUnrealClient::ConvertTransformToLineProtocol(Z_Param_transform,Z_Param_label,Z_Param_bIncludeLocation,Z_Param_bIncludeRotation,Z_Param_bIncludeScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpLineProtocolBufferToDatabase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DumpLineProtocolBufferToDatabase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToLineProtocolBuffer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_line); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddToLineProtocolBuffer(Z_Param_line); \
		P_NATIVE_END; \
	}


#define UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPostLineProtocolToInfluxDBServer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_lines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostLineProtocolToInfluxDBServer(Z_Param_lines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildAndAddLineProtocolToBuffer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_label); \
		P_GET_PROPERTY(UStrProperty,Z_Param_values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BuildAndAddLineProtocolToBuffer(Z_Param_label,Z_Param_values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildLineProtocol) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_label); \
		P_GET_PROPERTY(UStrProperty,Z_Param_values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UInfluxDBUnrealClient::BuildLineProtocol(Z_Param_label,Z_Param_values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertTransformToLineProtocol) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_transform); \
		P_GET_PROPERTY(UStrProperty,Z_Param_label); \
		P_GET_UBOOL(Z_Param_bIncludeLocation); \
		P_GET_UBOOL(Z_Param_bIncludeRotation); \
		P_GET_UBOOL(Z_Param_bIncludeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UInfluxDBUnrealClient::ConvertTransformToLineProtocol(Z_Param_transform,Z_Param_label,Z_Param_bIncludeLocation,Z_Param_bIncludeRotation,Z_Param_bIncludeScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpLineProtocolBufferToDatabase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DumpLineProtocolBufferToDatabase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToLineProtocolBuffer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_line); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddToLineProtocolBuffer(Z_Param_line); \
		P_NATIVE_END; \
	}


#define UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInfluxDBUnrealClient(); \
	friend INFLUXDBTOOLS_API class UClass* Z_Construct_UClass_UInfluxDBUnrealClient(); \
public: \
	DECLARE_CLASS(UInfluxDBUnrealClient, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InfluxDbTools"), NO_API) \
	DECLARE_SERIALIZER(UInfluxDBUnrealClient) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUInfluxDBUnrealClient(); \
	friend INFLUXDBTOOLS_API class UClass* Z_Construct_UClass_UInfluxDBUnrealClient(); \
public: \
	DECLARE_CLASS(UInfluxDBUnrealClient, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InfluxDbTools"), NO_API) \
	DECLARE_SERIALIZER(UInfluxDBUnrealClient) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInfluxDBUnrealClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInfluxDBUnrealClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfluxDBUnrealClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfluxDBUnrealClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInfluxDBUnrealClient(UInfluxDBUnrealClient&&); \
	NO_API UInfluxDBUnrealClient(const UInfluxDBUnrealClient&); \
public:


#define UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInfluxDBUnrealClient(UInfluxDBUnrealClient&&); \
	NO_API UInfluxDBUnrealClient(const UInfluxDBUnrealClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfluxDBUnrealClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfluxDBUnrealClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInfluxDBUnrealClient)


#define UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_PRIVATE_PROPERTY_OFFSET
#define UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_10_PROLOG
#define UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_RPC_WRAPPERS \
	UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_INCLASS \
	UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_INCLASS_NO_PURE_DECLS \
	UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InfluxDBUnrealClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealInfluxDbDemos_Plugins_InfluxDbTools_Source_InfluxDbTools_Public_InfluxDBUnrealClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
