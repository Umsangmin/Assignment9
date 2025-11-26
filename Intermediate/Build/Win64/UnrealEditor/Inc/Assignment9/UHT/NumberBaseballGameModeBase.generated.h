// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NumberBaseballGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT9_NumberBaseballGameModeBase_generated_h
#error "NumberBaseballGameModeBase.generated.h already included, missing '#pragma once' in NumberBaseballGameModeBase.h"
#endif
#define ASSIGNMENT9_NumberBaseballGameModeBase_generated_h

#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTickTurnTimer);


#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANumberBaseballGameModeBase(); \
	friend struct Z_Construct_UClass_ANumberBaseballGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ANumberBaseballGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment9"), NO_API) \
	DECLARE_SERIALIZER(ANumberBaseballGameModeBase)


#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANumberBaseballGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANumberBaseballGameModeBase(ANumberBaseballGameModeBase&&); \
	ANumberBaseballGameModeBase(const ANumberBaseballGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANumberBaseballGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANumberBaseballGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANumberBaseballGameModeBase) \
	NO_API virtual ~ANumberBaseballGameModeBase();


#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_9_PROLOG
#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT9_API UClass* StaticClass<class ANumberBaseballGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
