// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkActivatedPlugins.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkActivatedPlugins() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPluginList();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkActivatedPlugins_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkActivatedPlugins();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FAkPluginList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkPluginList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPluginList, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPluginList"), sizeof(FAkPluginList), Get_Z_Construct_UScriptStruct_FAkPluginList_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPluginList>()
{
	return FAkPluginList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkPluginList(FAkPluginList::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkPluginList"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkPluginList
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkPluginList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkPluginList")),new UScriptStruct::TCppStructOps<FAkPluginList>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkPluginList;
	struct Z_Construct_UScriptStruct_FAkPluginList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PluginNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginList_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkActivatedPlugins.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPluginList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPluginList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginList_Statics::NewProp_PluginNames_MetaData[] = {
		{ "Category", "Plug-in Activation" },
		{ "ModuleRelativePath", "Classes/AkActivatedPlugins.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkPluginList_Statics::NewProp_PluginNames = { "PluginNames", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPluginList, PluginNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginList_Statics::NewProp_PluginNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginList_Statics::NewProp_PluginNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPluginList_Statics::NewProp_PluginNames_Inner = { "PluginNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPluginList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginList_Statics::NewProp_PluginNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginList_Statics::NewProp_PluginNames_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPluginList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkPluginList",
		sizeof(FAkPluginList),
		alignof(FAkPluginList),
		Z_Construct_UScriptStruct_FAkPluginList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPluginList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkPluginList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkPluginList"), sizeof(FAkPluginList), Get_Z_Construct_UScriptStruct_FAkPluginList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkPluginList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkPluginList_Hash() { return 1432587650U; }
	void UAkActivatedPlugins::StaticRegisterNativesUAkActivatedPlugins()
	{
	}
	UClass* Z_Construct_UClass_UAkActivatedPlugins_NoRegister()
	{
		return UAkActivatedPlugins::StaticClass();
	}
	struct Z_Construct_UClass_UAkActivatedPlugins_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Platforms;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platforms_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Platforms_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkActivatedPlugins_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkActivatedPlugins_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkActivatedPlugins.h" },
		{ "ModuleRelativePath", "Classes/AkActivatedPlugins.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkActivatedPlugins_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "Plug-in Activation" },
		{ "ModuleRelativePath", "Classes/AkActivatedPlugins.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkActivatedPlugins_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkActivatedPlugins, Platforms), METADATA_PARAMS(Z_Construct_UClass_UAkActivatedPlugins_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkActivatedPlugins_Statics::NewProp_Platforms_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkActivatedPlugins_Statics::NewProp_Platforms_Key_KeyProp = { "Platforms_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkActivatedPlugins_Statics::NewProp_Platforms_ValueProp = { "Platforms", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAkPluginList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkActivatedPlugins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkActivatedPlugins_Statics::NewProp_Platforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkActivatedPlugins_Statics::NewProp_Platforms_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkActivatedPlugins_Statics::NewProp_Platforms_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkActivatedPlugins_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkActivatedPlugins>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkActivatedPlugins_Statics::ClassParams = {
		&UAkActivatedPlugins::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkActivatedPlugins_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkActivatedPlugins_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkActivatedPlugins_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkActivatedPlugins_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkActivatedPlugins()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkActivatedPlugins_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkActivatedPlugins, 3053705521);
	template<> AKAUDIO_API UClass* StaticClass<UAkActivatedPlugins>()
	{
		return UAkActivatedPlugins::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkActivatedPlugins(Z_Construct_UClass_UAkActivatedPlugins, &UAkActivatedPlugins::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkActivatedPlugins"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkActivatedPlugins);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
