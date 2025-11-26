// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment9/ChatInputWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatInputWidget() {}

// Begin Cross Module References
ASSIGNMENT9_API UClass* Z_Construct_UClass_UChatInputWidget();
ASSIGNMENT9_API UClass* Z_Construct_UClass_UChatInputWidget_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Assignment9();
// End Cross Module References

// Begin Class UChatInputWidget Function ChattingTextInput
struct Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics
{
	struct ChatInputWidget_eventChattingTextInput_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChatInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChatInputWidget_eventChattingTextInput_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChatInputWidget_eventChattingTextInput_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChatInputWidget, nullptr, "ChattingTextInput", nullptr, nullptr, Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::ChatInputWidget_eventChattingTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::ChatInputWidget_eventChattingTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChatInputWidget_ChattingTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChatInputWidget_ChattingTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChatInputWidget::execChattingTextInput)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChattingTextInput(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UChatInputWidget Function ChattingTextInput

// Begin Class UChatInputWidget
void UChatInputWidget::StaticRegisterNativesUChatInputWidget()
{
	UClass* Class = UChatInputWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChattingTextInput", &UChatInputWidget::execChattingTextInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChatInputWidget);
UClass* Z_Construct_UClass_UChatInputWidget_NoRegister()
{
	return UChatInputWidget::StaticClass();
}
struct Z_Construct_UClass_UChatInputWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ChatInputWidget.h" },
		{ "ModuleRelativePath", "ChatInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChatInputWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatTextBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChatInputWidget_ChattingTextInput, "ChattingTextInput" }, // 4221083563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatInputWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChatInputWidget_Statics::NewProp_ChatTextBox = { "ChatTextBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChatInputWidget, ChatTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatTextBox_MetaData), NewProp_ChatTextBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChatInputWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatInputWidget_Statics::NewProp_ChatTextBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatInputWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChatInputWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatInputWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChatInputWidget_Statics::ClassParams = {
	&UChatInputWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UChatInputWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UChatInputWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChatInputWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UChatInputWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChatInputWidget()
{
	if (!Z_Registration_Info_UClass_UChatInputWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChatInputWidget.OuterSingleton, Z_Construct_UClass_UChatInputWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChatInputWidget.OuterSingleton;
}
template<> ASSIGNMENT9_API UClass* StaticClass<UChatInputWidget>()
{
	return UChatInputWidget::StaticClass();
}
UChatInputWidget::UChatInputWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChatInputWidget);
UChatInputWidget::~UChatInputWidget() {}
// End Class UChatInputWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChatInputWidget, UChatInputWidget::StaticClass, TEXT("UChatInputWidget"), &Z_Registration_Info_UClass_UChatInputWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChatInputWidget), 2603626865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_3647705894(TEXT("/Script/Assignment9"),
	Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_ChatInputWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
