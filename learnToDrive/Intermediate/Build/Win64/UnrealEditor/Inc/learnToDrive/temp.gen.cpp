// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "learnToDrive/Private/temp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetemp() {}
// Cross Module References
	LEARNTODRIVE_API UClass* Z_Construct_UClass_Atemp_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_Atemp();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_learnToDrive();
// End Cross Module References
	void Atemp::StaticRegisterNativesAtemp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Atemp);
	UClass* Z_Construct_UClass_Atemp_NoRegister()
	{
		return Atemp::StaticClass();
	}
	struct Z_Construct_UClass_Atemp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Atemp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_learnToDrive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atemp_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "temp.h" },
		{ "ModuleRelativePath", "Private/temp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Atemp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atemp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Atemp_Statics::ClassParams = {
		&Atemp::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Atemp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Atemp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Atemp()
	{
		if (!Z_Registration_Info_UClass_Atemp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Atemp.OuterSingleton, Z_Construct_UClass_Atemp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Atemp.OuterSingleton;
	}
	template<> LEARNTODRIVE_API UClass* StaticClass<Atemp>()
	{
		return Atemp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atemp);
	struct Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_temp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_temp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Atemp, Atemp::StaticClass, TEXT("Atemp"), &Z_Registration_Info_UClass_Atemp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Atemp), 1621692185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_temp_h_3603847842(TEXT("/Script/learnToDrive"),
		Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_temp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_temp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
