// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test26/Test26GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest26GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TEST26_API UClass* Z_Construct_UClass_ATest26GameMode();
	TEST26_API UClass* Z_Construct_UClass_ATest26GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Test26();
// End Cross Module References
	void ATest26GameMode::StaticRegisterNativesATest26GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATest26GameMode);
	UClass* Z_Construct_UClass_ATest26GameMode_NoRegister()
	{
		return ATest26GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATest26GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATest26GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test26,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATest26GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest26GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Test26GameMode.h" },
		{ "ModuleRelativePath", "Test26GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATest26GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest26GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATest26GameMode_Statics::ClassParams = {
		&ATest26GameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATest26GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATest26GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATest26GameMode()
	{
		if (!Z_Registration_Info_UClass_ATest26GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATest26GameMode.OuterSingleton, Z_Construct_UClass_ATest26GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATest26GameMode.OuterSingleton;
	}
	template<> TEST26_API UClass* StaticClass<ATest26GameMode>()
	{
		return ATest26GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATest26GameMode);
	ATest26GameMode::~ATest26GameMode() {}
	struct Z_CompiledInDeferFile_FID_Test26_Source_Test26_Test26GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test26_Source_Test26_Test26GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATest26GameMode, ATest26GameMode::StaticClass, TEXT("ATest26GameMode"), &Z_Registration_Info_UClass_ATest26GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATest26GameMode), 1105901570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test26_Source_Test26_Test26GameMode_h_3358518496(TEXT("/Script/Test26"),
		Z_CompiledInDeferFile_FID_Test26_Source_Test26_Test26GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test26_Source_Test26_Test26GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
