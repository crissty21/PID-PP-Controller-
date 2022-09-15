// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "learnToDrive/MyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAIController() {}
// Cross Module References
	LEARNTODRIVE_API UClass* Z_Construct_UClass_AMyAIController_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_AMyAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_learnToDrive();
// End Cross Module References
	void AMyAIController::StaticRegisterNativesAMyAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyAIController);
	UClass* Z_Construct_UClass_AMyAIController_NoRegister()
	{
		return AMyAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_learnToDrive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyAIController.h" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyAIController_Statics::ClassParams = {
		&AMyAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyAIController()
	{
		if (!Z_Registration_Info_UClass_AMyAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyAIController.OuterSingleton, Z_Construct_UClass_AMyAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyAIController.OuterSingleton;
	}
	template<> LEARNTODRIVE_API UClass* StaticClass<AMyAIController>()
	{
		return AMyAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAIController);
	struct Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_MyAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_MyAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyAIController, AMyAIController::StaticClass, TEXT("AMyAIController"), &Z_Registration_Info_UClass_AMyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyAIController), 571919034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_MyAIController_h_2938401367(TEXT("/Script/learnToDrive"),
		Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_MyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_MyAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
