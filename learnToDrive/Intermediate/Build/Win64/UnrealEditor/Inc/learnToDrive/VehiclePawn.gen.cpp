// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "learnToDrive/Private/VehiclePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehiclePawn() {}
// Cross Module References
	LEARNTODRIVE_API UClass* Z_Construct_UClass_AVehiclePawn_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_AVehiclePawn();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
	UPackage* Z_Construct_UPackage__Script_learnToDrive();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_ARoad_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_UScreens_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVehiclePawn::execResetCar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehiclePawn::execHandBreakReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandBreakReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehiclePawn::execHandBreak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandBreak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehiclePawn::execSteer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Steer(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehiclePawn::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_AVehiclePawn_BreakLights = FName(TEXT("BreakLights"));
	void AVehiclePawn::BreakLights(bool state)
	{
		VehiclePawn_eventBreakLights_Parms Parms;
		Parms.state=state ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AVehiclePawn_BreakLights),&Parms);
	}
	void AVehiclePawn::StaticRegisterNativesAVehiclePawn()
	{
		UClass* Class = AVehiclePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandBreak", &AVehiclePawn::execHandBreak },
			{ "HandBreakReleased", &AVehiclePawn::execHandBreakReleased },
			{ "MoveForward", &AVehiclePawn::execMoveForward },
			{ "ResetCar", &AVehiclePawn::execResetCar },
			{ "Steer", &AVehiclePawn::execSteer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics
	{
		static void NewProp_state_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::NewProp_state_SetBit(void* Obj)
	{
		((VehiclePawn_eventBreakLights_Parms*)Obj)->state = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePawn_eventBreakLights_Parms), &Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePawn, nullptr, "BreakLights", nullptr, nullptr, sizeof(VehiclePawn_eventBreakLights_Parms), Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehiclePawn_BreakLights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehiclePawn_BreakLights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehiclePawn_HandBreak_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehiclePawn_HandBreak_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehiclePawn_HandBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePawn, nullptr, "HandBreak", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehiclePawn_HandBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehiclePawn_HandBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehiclePawn_HandBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehiclePawn_HandBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehiclePawn_HandBreakReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehiclePawn_HandBreakReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehiclePawn_HandBreakReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePawn, nullptr, "HandBreakReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehiclePawn_HandBreakReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehiclePawn_HandBreakReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehiclePawn_HandBreakReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehiclePawn_HandBreakReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics
	{
		struct VehiclePawn_eventMoveForward_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehiclePawn_eventMoveForward_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Called to bind functionality to input\n" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
		{ "ToolTip", "Called to bind functionality to input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePawn, nullptr, "MoveForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics::VehiclePawn_eventMoveForward_Parms), Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehiclePawn_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehiclePawn_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehiclePawn_ResetCar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehiclePawn_ResetCar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehiclePawn_ResetCar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePawn, nullptr, "ResetCar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehiclePawn_ResetCar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehiclePawn_ResetCar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehiclePawn_ResetCar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehiclePawn_ResetCar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehiclePawn_Steer_Statics
	{
		struct VehiclePawn_eventSteer_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehiclePawn_Steer_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehiclePawn_eventSteer_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehiclePawn_Steer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehiclePawn_Steer_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehiclePawn_Steer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehiclePawn_Steer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePawn, nullptr, "Steer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVehiclePawn_Steer_Statics::VehiclePawn_eventSteer_Parms), Z_Construct_UFunction_AVehiclePawn_Steer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehiclePawn_Steer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehiclePawn_Steer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehiclePawn_Steer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehiclePawn_Steer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehiclePawn_Steer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVehiclePawn);
	UClass* Z_Construct_UClass_AVehiclePawn_NoRegister()
	{
		return AVehiclePawn::StaticClass();
	}
	struct Z_Construct_UClass_AVehiclePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancePoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AdvancePoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Road_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Road;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Screen_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Screen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaosWheeledVehicleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChaosWheeledVehicleComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehiclePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_learnToDrive,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVehiclePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVehiclePawn_BreakLights, "BreakLights" }, // 1477781959
		{ &Z_Construct_UFunction_AVehiclePawn_HandBreak, "HandBreak" }, // 4138351973
		{ &Z_Construct_UFunction_AVehiclePawn_HandBreakReleased, "HandBreakReleased" }, // 814974815
		{ &Z_Construct_UFunction_AVehiclePawn_MoveForward, "MoveForward" }, // 3733110522
		{ &Z_Construct_UFunction_AVehiclePawn_ResetCar, "ResetCar" }, // 55419817
		{ &Z_Construct_UFunction_AVehiclePawn_Steer, "Steer" }, // 3256498168
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehiclePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VehiclePawn.h" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehiclePawn_Statics::NewProp_DesiredSpeed_MetaData[] = {
		{ "Category", "VehiclePawn" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehiclePawn_Statics::NewProp_DesiredSpeed = { "DesiredSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehiclePawn, DesiredSpeed), METADATA_PARAMS(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_DesiredSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_DesiredSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehiclePawn_Statics::NewProp_FrontPoint_MetaData[] = {
		{ "Category", "VehiclePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehiclePawn_Statics::NewProp_FrontPoint = { "FrontPoint", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehiclePawn, FrontPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_FrontPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_FrontPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehiclePawn_Statics::NewProp_BackPoint_MetaData[] = {
		{ "Category", "VehiclePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehiclePawn_Statics::NewProp_BackPoint = { "BackPoint", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehiclePawn, BackPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_BackPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_BackPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehiclePawn_Statics::NewProp_AdvancePoint_MetaData[] = {
		{ "Category", "VehiclePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehiclePawn_Statics::NewProp_AdvancePoint = { "AdvancePoint", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehiclePawn, AdvancePoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_AdvancePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_AdvancePoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Road_MetaData[] = {
		{ "Category", "VehiclePawn" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Road = { "Road", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehiclePawn, Road), Z_Construct_UClass_ARoad_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Road_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Road_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Screen_MetaData[] = {
		{ "Category", "VehiclePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Screen = { "Screen", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehiclePawn, Screen), Z_Construct_UClass_UScreens_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Screen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Screen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "VehiclePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehiclePawn, Camera), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehiclePawn_Statics::NewProp_CriticalAngle_MetaData[] = {
		{ "Category", "VehiclePawn" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehiclePawn_Statics::NewProp_CriticalAngle = { "CriticalAngle", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehiclePawn, CriticalAngle), METADATA_PARAMS(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_CriticalAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_CriticalAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehiclePawn_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "VehiclePawn" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehiclePawn_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehiclePawn, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehiclePawn_Statics::NewProp_ChaosWheeledVehicleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehiclePawn_Statics::NewProp_ChaosWheeledVehicleComponent = { "ChaosWheeledVehicleComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehiclePawn, ChaosWheeledVehicleComponent), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_ChaosWheeledVehicleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::NewProp_ChaosWheeledVehicleComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehiclePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehiclePawn_Statics::NewProp_DesiredSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehiclePawn_Statics::NewProp_FrontPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehiclePawn_Statics::NewProp_BackPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehiclePawn_Statics::NewProp_AdvancePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Road,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Screen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehiclePawn_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehiclePawn_Statics::NewProp_CriticalAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehiclePawn_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehiclePawn_Statics::NewProp_ChaosWheeledVehicleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehiclePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehiclePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVehiclePawn_Statics::ClassParams = {
		&AVehiclePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVehiclePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVehiclePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVehiclePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehiclePawn()
	{
		if (!Z_Registration_Info_UClass_AVehiclePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVehiclePawn.OuterSingleton, Z_Construct_UClass_AVehiclePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVehiclePawn.OuterSingleton;
	}
	template<> LEARNTODRIVE_API UClass* StaticClass<AVehiclePawn>()
	{
		return AVehiclePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehiclePawn);
	struct Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVehiclePawn, AVehiclePawn::StaticClass, TEXT("AVehiclePawn"), &Z_Registration_Info_UClass_AVehiclePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVehiclePawn), 1676637577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_230670778(TEXT("/Script/learnToDrive"),
		Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
