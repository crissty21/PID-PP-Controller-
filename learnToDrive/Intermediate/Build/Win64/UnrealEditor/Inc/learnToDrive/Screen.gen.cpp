// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "learnToDrive/Private/Screen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreen() {}
// Cross Module References
	LEARNTODRIVE_API UClass* Z_Construct_UClass_UScreen_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_UScreen();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_learnToDrive();
// End Cross Module References
	void UScreen::StaticRegisterNativesUScreen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScreen);
	UClass* Z_Construct_UClass_UScreen_NoRegister()
	{
		return UScreen::StaticClass();
	}
	struct Z_Construct_UClass_UScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_learnToDrive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Screen.h" },
		{ "ModuleRelativePath", "Private/Screen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreen_Statics::ClassParams = {
		&UScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreen()
	{
		if (!Z_Registration_Info_UClass_UScreen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreen.OuterSingleton, Z_Construct_UClass_UScreen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScreen.OuterSingleton;
	}
	template<> LEARNTODRIVE_API UClass* StaticClass<UScreen>()
	{
		return UScreen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreen);
	struct Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Screen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Screen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScreen, UScreen::StaticClass, TEXT("UScreen"), &Z_Registration_Info_UClass_UScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreen), 4064294813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Screen_h_1186688367(TEXT("/Script/learnToDrive"),
		Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Screen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Screen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
