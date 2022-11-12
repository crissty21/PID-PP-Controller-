// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "learnToDrive/Private/Screens.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreens() {}
// Cross Module References
	LEARNTODRIVE_API UClass* Z_Construct_UClass_UScreens_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_UScreens();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_learnToDrive();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UScreens::execReadFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadFrame();
		P_NATIVE_END;
	}
	void UScreens::StaticRegisterNativesUScreens()
	{
		UClass* Class = UScreens::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadFrame", &UScreens::execReadFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScreens_ReadFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreens_ReadFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "// reads the current video frame\n" },
		{ "ModuleRelativePath", "Private/Screens.h" },
		{ "ToolTip", "reads the current video frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreens_ReadFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreens, nullptr, "ReadFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreens_ReadFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreens_ReadFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreens_ReadFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreens_ReadFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScreens);
	UClass* Z_Construct_UClass_UScreens_NoRegister()
	{
		return UScreens::StaticClass();
	}
	struct Z_Construct_UClass_UScreens_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Screen_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Screen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_Mat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera_Mat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_Texture2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera_Texture2D;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreens_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_learnToDrive,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScreens_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreens_ReadFrame, "ReadFrame" }, // 12527673
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreens_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Screens.h" },
		{ "ModuleRelativePath", "Private/Screens.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreens_Statics::NewProp_Screen_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera)\n//\x09USceneComponent* rootComp;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Screens.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera)\n       USceneComponent* rootComp;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreens_Statics::NewProp_Screen = { "Screen", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreens, Screen), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreens_Statics::NewProp_Screen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreens_Statics::NewProp_Screen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreens_Statics::NewProp_RefreshRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0" },
		{ "Comment", "// The rate at which the color data array and video texture is updated (in frames per second)\n" },
		{ "ModuleRelativePath", "Private/Screens.h" },
		{ "ToolTip", "The rate at which the color data array and video texture is updated (in frames per second)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScreens_Statics::NewProp_RefreshRate = { "RefreshRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreens, RefreshRate), METADATA_PARAMS(Z_Construct_UClass_UScreens_Statics::NewProp_RefreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreens_Statics::NewProp_RefreshRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreens_Statics::NewProp_RefreshTimer_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The refresh timer\n" },
		{ "ModuleRelativePath", "Private/Screens.h" },
		{ "ToolTip", "The refresh timer" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScreens_Statics::NewProp_RefreshTimer = { "RefreshTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreens, RefreshTimer), METADATA_PARAMS(Z_Construct_UClass_UScreens_Statics::NewProp_RefreshTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreens_Statics::NewProp_RefreshTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreens_Statics::NewProp_VideoSize_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The videos width and height (width, height)\n" },
		{ "ModuleRelativePath", "Private/Screens.h" },
		{ "ToolTip", "The videos width and height (width, height)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScreens_Statics::NewProp_VideoSize = { "VideoSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreens, VideoSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UScreens_Statics::NewProp_VideoSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreens_Statics::NewProp_VideoSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreens_Statics::NewProp_Camera_RenderTarget_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Render Target\n" },
		{ "ModuleRelativePath", "Private/Screens.h" },
		{ "ToolTip", "Camera Render Target" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreens_Statics::NewProp_Camera_RenderTarget = { "Camera_RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreens, Camera_RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreens_Statics::NewProp_Camera_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreens_Statics::NewProp_Camera_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreens_Statics::NewProp_Camera_Mat_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Material Instance\n" },
		{ "ModuleRelativePath", "Private/Screens.h" },
		{ "ToolTip", "Camera Material Instance" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreens_Statics::NewProp_Camera_Mat = { "Camera_Mat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreens, Camera_Mat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreens_Statics::NewProp_Camera_Mat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreens_Statics::NewProp_Camera_Mat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreens_Statics::NewProp_Camera_Texture2D_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Texture\n" },
		{ "ModuleRelativePath", "Private/Screens.h" },
		{ "ToolTip", "Camera Texture" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreens_Statics::NewProp_Camera_Texture2D = { "Camera_Texture2D", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreens, Camera_Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreens_Statics::NewProp_Camera_Texture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreens_Statics::NewProp_Camera_Texture2D_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScreens_Statics::NewProp_ColorData_Inner = { "ColorData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreens_Statics::NewProp_ColorData_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// Color Data\n" },
		{ "ModuleRelativePath", "Private/Screens.h" },
		{ "ToolTip", "Color Data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScreens_Statics::NewProp_ColorData = { "ColorData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreens, ColorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScreens_Statics::NewProp_ColorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreens_Statics::NewProp_ColorData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreens_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreens_Statics::NewProp_Screen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreens_Statics::NewProp_RefreshRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreens_Statics::NewProp_RefreshTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreens_Statics::NewProp_VideoSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreens_Statics::NewProp_Camera_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreens_Statics::NewProp_Camera_Mat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreens_Statics::NewProp_Camera_Texture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreens_Statics::NewProp_ColorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreens_Statics::NewProp_ColorData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreens_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreens>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreens_Statics::ClassParams = {
		&UScreens::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScreens_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreens_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScreens_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreens_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreens()
	{
		if (!Z_Registration_Info_UClass_UScreens.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreens.OuterSingleton, Z_Construct_UClass_UScreens_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScreens.OuterSingleton;
	}
	template<> LEARNTODRIVE_API UClass* StaticClass<UScreens>()
	{
		return UScreens::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreens);
	struct Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Screens_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Screens_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScreens, UScreens::StaticClass, TEXT("UScreens"), &Z_Registration_Info_UClass_UScreens, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreens), 3218091009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Screens_h_2576424262(TEXT("/Script/learnToDrive"),
		Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Screens_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_Screens_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
