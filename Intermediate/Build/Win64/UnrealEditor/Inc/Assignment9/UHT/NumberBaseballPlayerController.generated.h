// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NumberBaseballPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT9_NumberBaseballPlayerController_generated_h
#error "NumberBaseballPlayerController.generated.h already included, missing '#pragma once' in NumberBaseballPlayerController.h"
#endif
#define ASSIGNMENT9_NumberBaseballPlayerController_generated_h

#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPC_PrintChatting_Implementation(const FString& InChattingMessage); \
	virtual void ClientRPC_PrintChatting_Implementation(const FString& InChattingMessage); \
	DECLARE_FUNCTION(execServerRPC_PrintChatting); \
	DECLARE_FUNCTION(execClientRPC_PrintChatting);


#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_12_CALLBACK_WRAPPERS
#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANumberBaseballPlayerController(); \
	friend struct Z_Construct_UClass_ANumberBaseballPlayerController_Statics; \
public: \
	DECLARE_CLASS(ANumberBaseballPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment9"), NO_API) \
	DECLARE_SERIALIZER(ANumberBaseballPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AlarmText=NETFIELD_REP_START, \
		NETFIELD_REP_END=AlarmText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANumberBaseballPlayerController(ANumberBaseballPlayerController&&); \
	ANumberBaseballPlayerController(const ANumberBaseballPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANumberBaseballPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANumberBaseballPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANumberBaseballPlayerController) \
	NO_API virtual ~ANumberBaseballPlayerController();


#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_9_PROLOG
#define FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_12_CALLBACK_WRAPPERS \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT9_API UClass* StaticClass<class ANumberBaseballPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
