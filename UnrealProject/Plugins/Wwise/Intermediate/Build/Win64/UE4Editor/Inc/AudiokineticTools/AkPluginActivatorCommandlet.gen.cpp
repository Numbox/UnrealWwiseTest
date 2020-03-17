// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/AkPluginActivatorCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPluginActivatorCommandlet() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkPluginActivatorCommandlet_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkPluginActivatorCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UAkPluginActivatorCommandlet::StaticRegisterNativesUAkPluginActivatorCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UAkPluginActivatorCommandlet_NoRegister()
	{
		return UAkPluginActivatorCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UAkPluginActivatorCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkPluginActivatorCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPluginActivatorCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AkPluginActivatorCommandlet.h" },
		{ "ModuleRelativePath", "Classes/AkPluginActivatorCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkPluginActivatorCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPluginActivatorCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkPluginActivatorCommandlet_Statics::ClassParams = {
		&UAkPluginActivatorCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAkPluginActivatorCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPluginActivatorCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkPluginActivatorCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkPluginActivatorCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkPluginActivatorCommandlet, 1549293676);
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkPluginActivatorCommandlet>()
	{
		return UAkPluginActivatorCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkPluginActivatorCommandlet(Z_Construct_UClass_UAkPluginActivatorCommandlet, &UAkPluginActivatorCommandlet::StaticClass, TEXT("/Script/AudiokineticTools"), TEXT("UAkPluginActivatorCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPluginActivatorCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
