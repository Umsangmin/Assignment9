// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NumberBaseballPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT9_NumberBaseballPlayerState_generated_h
#error "NumberBaseballPlayerState.generated.h already included, missing '#pragma once' in NumberBaseballPlayerState.h"
#endif
#define ASSIGNMENT9_NumberBaseballPlayerState_generated_h

#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANumberBaseballPlayerState(); \
	friend struct Z_Construct_UClass_ANumberBaseballPlayerState_Statics; \
public: \
	DECLARE_CLASS(ANumberBaseballPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment9"), NO_API) \
	DECLARE_SERIALIZER(ANumberBaseballPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNickName=NETFIELD_REP_START, \
		CurrentNumberCount, \
		MaxNumberCount, \
		RemainingSeconds, \
		NETFIELD_REP_END=RemainingSeconds	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANumberBaseballPlayerState(ANumberBaseballPlayerState&&); \
	ANumberBaseballPlayerState(const ANumberBaseballPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANumberBaseballPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANumberBaseballPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANumberBaseballPlayerState) \
	NO_API virtual ~ANumberBaseballPlayerState();


#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerState_h_7_PROLOG
#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerState_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT9_API UClass* StaticClass<class ANumberBaseballPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
