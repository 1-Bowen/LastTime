// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastTime/LastTimeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLastTimeGameMode() {}
// Cross Module References
	LASTTIME_API UClass* Z_Construct_UClass_ALastTimeGameMode_NoRegister();
	LASTTIME_API UClass* Z_Construct_UClass_ALastTimeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LastTime();
// End Cross Module References
	void ALastTimeGameMode::StaticRegisterNativesALastTimeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALastTimeGameMode_NoRegister()
	{
		return ALastTimeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALastTimeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALastTimeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LastTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastTimeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LastTimeGameMode.h" },
		{ "ModuleRelativePath", "LastTimeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALastTimeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALastTimeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALastTimeGameMode_Statics::ClassParams = {
		&ALastTimeGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ALastTimeGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALastTimeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALastTimeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALastTimeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALastTimeGameMode, 3762357393);
	template<> LASTTIME_API UClass* StaticClass<ALastTimeGameMode>()
	{
		return ALastTimeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALastTimeGameMode(Z_Construct_UClass_ALastTimeGameMode, &ALastTimeGameMode::StaticClass, TEXT("/Script/LastTime"), TEXT("ALastTimeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALastTimeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
