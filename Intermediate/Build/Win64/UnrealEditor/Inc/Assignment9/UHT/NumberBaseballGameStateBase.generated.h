// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NumberBaseballGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT9_NumberBaseballGameStateBase_generated_h
#error "NumberBaseballGameStateBase.generated.h already included, missing '#pragma once' in NumberBaseballGameStateBase.h"
#endif
#define ASSIGNMENT9_NumberBaseballGameStateBase_generated_h

#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCLogin_Implementation(const FString& PlayerNameString); \
	DECLARE_FUNCTION(execMulticastRPCLogin);


#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_10_CALLBACK_WRAPPERS
#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANumberBaseballGameStateBase(); \
	friend struct Z_Construct_UClass_ANumberBaseballGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ANumberBaseballGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment9"), NO_API) \
	DECLARE_SERIALIZER(ANumberBaseballGameStateBase)


#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANumberBaseballGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANumberBaseballGameStateBase(ANumberBaseballGameStateBase&&); \
	ANumberBaseballGameStateBase(const ANumberBaseballGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANumberBaseballGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANumberBaseballGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANumberBaseballGameStateBase) \
	NO_API virtual ~ANumberBaseballGameStateBase();


#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_7_PROLOG
#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_10_CALLBACK_WRAPPERS \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT9_API UClass* StaticClass<class ANumberBaseballGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
