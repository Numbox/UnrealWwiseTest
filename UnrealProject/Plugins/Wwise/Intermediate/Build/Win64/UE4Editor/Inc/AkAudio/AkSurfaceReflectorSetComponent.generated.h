// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkSurfaceReflectorSetComponent_generated_h
#error "AkSurfaceReflectorSetComponent.generated.h already included, missing '#pragma once' in AkSurfaceReflectorSetComponent.h"
#endif
#define AKAUDIO_AkSurfaceReflectorSetComponent_generated_h

#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkPoly_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkPoly>();

#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_SPARSE_DATA
#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendSurfaceReflectorSet(); \
		P_NATIVE_END; \
	}


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendSurfaceReflectorSet(); \
		P_NATIVE_END; \
	}


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSurfaceReflectorSetComponent(); \
	friend struct Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics; \
public: \
	DECLARE_CLASS(UAkSurfaceReflectorSetComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSurfaceReflectorSetComponent)


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUAkSurfaceReflectorSetComponent(); \
	friend struct Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics; \
public: \
	DECLARE_CLASS(UAkSurfaceReflectorSetComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSurfaceReflectorSetComponent)


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSurfaceReflectorSetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSurfaceReflectorSetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSurfaceReflectorSetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSurfaceReflectorSetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSurfaceReflectorSetComponent(UAkSurfaceReflectorSetComponent&&); \
	NO_API UAkSurfaceReflectorSetComponent(const UAkSurfaceReflectorSetComponent&); \
public:


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSurfaceReflectorSetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSurfaceReflectorSetComponent(UAkSurfaceReflectorSetComponent&&); \
	NO_API UAkSurfaceReflectorSetComponent(const UAkSurfaceReflectorSetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSurfaceReflectorSetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSurfaceReflectorSetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSurfaceReflectorSetComponent)


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_29_PROLOG
#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_SPARSE_DATA \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_RPC_WRAPPERS \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_INCLASS \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_SPARSE_DATA \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_INCLASS_NO_PURE_DECLS \
	UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkSurfaceReflectorSetComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkSurfaceReflectorSetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
