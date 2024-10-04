// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicMegaJam/EpicMegaJamGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicMegaJamGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	EPICMEGAJAM_API UClass* Z_Construct_UClass_AEpicMegaJamGameMode();
	EPICMEGAJAM_API UClass* Z_Construct_UClass_AEpicMegaJamGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EpicMegaJam();
// End Cross Module References
	void AEpicMegaJamGameMode::StaticRegisterNativesAEpicMegaJamGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEpicMegaJamGameMode);
	UClass* Z_Construct_UClass_AEpicMegaJamGameMode_NoRegister()
	{
		return AEpicMegaJamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEpicMegaJamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEpicMegaJamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicMegaJam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEpicMegaJamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EpicMegaJamGameMode.h" },
		{ "ModuleRelativePath", "EpicMegaJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEpicMegaJamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEpicMegaJamGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEpicMegaJamGameMode_Statics::ClassParams = {
		&AEpicMegaJamGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEpicMegaJamGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEpicMegaJamGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEpicMegaJamGameMode()
	{
		if (!Z_Registration_Info_UClass_AEpicMegaJamGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEpicMegaJamGameMode.OuterSingleton, Z_Construct_UClass_AEpicMegaJamGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEpicMegaJamGameMode.OuterSingleton;
	}
	template<> EPICMEGAJAM_API UClass* StaticClass<AEpicMegaJamGameMode>()
	{
		return AEpicMegaJamGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEpicMegaJamGameMode);
	AEpicMegaJamGameMode::~AEpicMegaJamGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_wynek_Perforce_hpdang_Dragon_Lair_9369_main_Source_EpicMegaJam_EpicMegaJamGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wynek_Perforce_hpdang_Dragon_Lair_9369_main_Source_EpicMegaJam_EpicMegaJamGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEpicMegaJamGameMode, AEpicMegaJamGameMode::StaticClass, TEXT("AEpicMegaJamGameMode"), &Z_Registration_Info_UClass_AEpicMegaJamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEpicMegaJamGameMode), 206282565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wynek_Perforce_hpdang_Dragon_Lair_9369_main_Source_EpicMegaJam_EpicMegaJamGameMode_h_182399265(TEXT("/Script/EpicMegaJam"),
		Z_CompiledInDeferFile_FID_Users_wynek_Perforce_hpdang_Dragon_Lair_9369_main_Source_EpicMegaJam_EpicMegaJamGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wynek_Perforce_hpdang_Dragon_Lair_9369_main_Source_EpicMegaJam_EpicMegaJamGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
