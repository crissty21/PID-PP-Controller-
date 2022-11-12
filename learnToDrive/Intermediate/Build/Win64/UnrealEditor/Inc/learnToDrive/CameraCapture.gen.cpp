// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "learnToDrive/Private/CameraCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraCapture() {}
// Cross Module References
	LEARNTODRIVE_API UClass* Z_Construct_UClass_UCameraCapture_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_UCameraCapture();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_learnToDrive();
// End Cross Module References
	void UCameraCapture::StaticRegisterNativesUCameraCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraCapture);
	UClass* Z_Construct_UClass_UCameraCapture_NoRegister()
	{
		return UCameraCapture::StaticClass();
	}
	struct Z_Construct_UClass_UCameraCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_learnToDrive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CameraCapture.h" },
		{ "ModuleRelativePath", "Private/CameraCapture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraCapture_Statics::ClassParams = {
		&UCameraCapture::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraCapture()
	{
		if (!Z_Registration_Info_UClass_UCameraCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraCapture.OuterSingleton, Z_Construct_UClass_UCameraCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraCapture.OuterSingleton;
	}
	template<> LEARNTODRIVE_API UClass* StaticClass<UCameraCapture>()
	{
		return UCameraCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraCapture);
	struct Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_CameraCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_CameraCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraCapture, UCameraCapture::StaticClass, TEXT("UCameraCapture"), &Z_Registration_Info_UClass_UCameraCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraCapture), 3922509535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_CameraCapture_h_1348258665(TEXT("/Script/learnToDrive"),
		Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_CameraCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_CameraCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
