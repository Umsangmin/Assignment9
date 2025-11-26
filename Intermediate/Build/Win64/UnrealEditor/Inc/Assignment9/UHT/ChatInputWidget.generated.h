// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChatInputWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT9_ChatInputWidget_generated_h
#error "ChatInputWidget.generated.h already included, missing '#pragma once' in ChatInputWidget.h"
#endif
#define ASSIGNMENT9_ChatInputWidget_generated_h

#define FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChattingTextInput);


#define FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChatInputWidget(); \
	friend struct Z_Construct_UClass_UChatInputWidget_Statics; \
public: \
	DECLARE_CLASS(UChatInputWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Assignment9"), NO_API) \
	DECLARE_SERIALIZER(UChatInputWidget)


#define FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChatInputWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChatInputWidget(UChatInputWidget&&); \
	UChatInputWidget(const UChatInputWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChatInputWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatInputWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChatInputWidget) \
	NO_API virtual ~UChatInputWidget();


#define FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_9_PROLOG
#define FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT9_API UClass* StaticClass<class UChatInputWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
