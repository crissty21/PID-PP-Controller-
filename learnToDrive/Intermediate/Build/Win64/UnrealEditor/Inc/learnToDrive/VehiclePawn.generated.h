// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARNTODRIVE_VehiclePawn_generated_h
#error "VehiclePawn.generated.h already included, missing '#pragma once' in VehiclePawn.h"
#endif
#define LEARNTODRIVE_VehiclePawn_generated_h

#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_SPARSE_DATA
#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetCar); \
	DECLARE_FUNCTION(execHandBreakReleased); \
	DECLARE_FUNCTION(execHandBreak); \
	DECLARE_FUNCTION(execSteer); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetCar); \
	DECLARE_FUNCTION(execHandBreakReleased); \
	DECLARE_FUNCTION(execHandBreak); \
	DECLARE_FUNCTION(execSteer); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_EVENT_PARMS \
	struct VehiclePawn_eventBreakLights_Parms \
	{ \
		bool state; \
	};


#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_CALLBACK_WRAPPERS
#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehiclePawn(); \
	friend struct Z_Construct_UClass_AVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(AVehiclePawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/learnToDrive"), NO_API) \
	DECLARE_SERIALIZER(AVehiclePawn)


#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAVehiclePawn(); \
	friend struct Z_Construct_UClass_AVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(AVehiclePawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/learnToDrive"), NO_API) \
	DECLARE_SERIALIZER(AVehiclePawn)


#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVehiclePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehiclePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehiclePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehiclePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehiclePawn(AVehiclePawn&&); \
	NO_API AVehiclePawn(const AVehiclePawn&); \
public:


#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehiclePawn(AVehiclePawn&&); \
	NO_API AVehiclePawn(const AVehiclePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehiclePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehiclePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVehiclePawn)


#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_13_PROLOG \
	FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_EVENT_PARMS


#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_SPARSE_DATA \
	FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_RPC_WRAPPERS \
	FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_CALLBACK_WRAPPERS \
	FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_INCLASS \
	FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_SPARSE_DATA \
	FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_CALLBACK_WRAPPERS \
	FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_INCLASS_NO_PURE_DECLS \
	FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNTODRIVE_API UClass* StaticClass<class AVehiclePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learnToDrive_Source_learnToDrive_Private_VehiclePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
