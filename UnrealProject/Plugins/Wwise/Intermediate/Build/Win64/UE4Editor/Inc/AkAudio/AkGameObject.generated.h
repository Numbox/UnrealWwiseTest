// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
struct FAkExternalSourceInfo;
#ifdef AKAUDIO_AkGameObject_generated_h
#error "AkGameObject.generated.h already included, missing '#pragma once' in AkGameObject.h"
#endif
#define AKAUDIO_AkGameObject_generated_h

#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_SPARSE_DATA
#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEvent) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CallbackMask); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_PostEventCallback); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_PROPERTY(UStrProperty,Z_Param_in_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PostAkEvent(Z_Param_AkEvent,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources,Z_Param_in_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAssociatedAkEvent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CallbackMask); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_PostEventCallback); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEvent(Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources); \
		P_NATIVE_END; \
	}


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEvent) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CallbackMask); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_PostEventCallback); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_PROPERTY(UStrProperty,Z_Param_in_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PostAkEvent(Z_Param_AkEvent,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources,Z_Param_in_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAssociatedAkEvent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CallbackMask); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_PostEventCallback); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEvent(Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources); \
		P_NATIVE_END; \
	}


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGameObject(); \
	friend struct Z_Construct_UClass_UAkGameObject_Statics; \
public: \
	DECLARE_CLASS(UAkGameObject, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameObject)


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAkGameObject(); \
	friend struct Z_Construct_UClass_UAkGameObject_Statics; \
public: \
	DECLARE_CLASS(UAkGameObject, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameObject)


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameObject(UAkGameObject&&); \
	NO_API UAkGameObject(const UAkGameObject&); \
public:


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameObject(UAkGameObject&&); \
	NO_API UAkGameObject(const UAkGameObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameObject)


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_14_PROLOG
#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_SPARSE_DATA \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_RPC_WRAPPERS \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_INCLASS \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_SPARSE_DATA \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_INCLASS_NO_PURE_DECLS \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkGameObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGameObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
