// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "learnToDrive/Private/Road.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoad() {}
// Cross Module References
	LEARNTODRIVE_API UClass* Z_Construct_UClass_ARoad_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_ARoad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_learnToDrive();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void ARoad::StaticRegisterNativesARoad()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoad);
	UClass* Z_Construct_UClass_ARoad_NoRegister()
	{
		return ARoad::StaticClass();
	}
	struct Z_Construct_UClass_ARoad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_learnToDrive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Road.h" },
		{ "ModuleRelativePath", "Private/Road.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoad_Statics::NewProp_SplineComp_MetaData[] = {
		{ "Category", "Road" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Road.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoad_Statics::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoad, SplineComp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoad_Statics::NewProp_SplineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::NewProp_SplineComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoad_Statics::NewProp_SplineComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoad>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoad_Statics::ClassParams = {
		&ARoad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARoad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoad()
	{
		if (!Z_Registration_Info_UClass_ARoad.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoad.OuterSingleton, Z_Construct_UClass_ARoad_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoad.OuterSingleton;
	}
	template<> LEARNTODRIVE_API UClass* StaticClass<ARoad>()
	{
		return ARoad::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoad);
	struct Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Road_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Road_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoad, ARoad::StaticClass, TEXT("ARoad"), &Z_Registration_Info_UClass_ARoad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoad), 1879386172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Road_h_1315949476(TEXT("/Script/learnToDrive"),
		Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Road_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Road_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
