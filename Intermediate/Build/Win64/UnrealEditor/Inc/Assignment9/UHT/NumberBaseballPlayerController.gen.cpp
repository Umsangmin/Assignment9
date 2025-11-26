// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment9/NumberBaseballPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberBaseballPlayerController() {}

// Begin Cross Module References
ASSIGNMENT9_API UClass* Z_Construct_UClass_ANumberBaseballPlayerController();
ASSIGNMENT9_API UClass* Z_Construct_UClass_ANumberBaseballPlayerController_NoRegister();
ASSIGNMENT9_API UClass* Z_Construct_UClass_UChatInputWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Assignment9();
// End Cross Module References

// Begin Class ANumberBaseballPlayerController Function ClientRPC_PrintChatting
struct NumberBaseballPlayerController_eventClientRPC_PrintChatting_Parms
{
	FString InChattingMessage;
};
static const FName NAME_ANumberBaseballPlayerController_ClientRPC_PrintChatting = FName(TEXT("ClientRPC_PrintChatting"));
void ANumberBaseballPlayerController::ClientRPC_PrintChatting(const FString& InChattingMessage)
{
	NumberBaseballPlayerController_eventClientRPC_PrintChatting_Parms Parms;
	Parms.InChattingMessage=InChattingMessage;
	UFunction* Func = FindFunctionChecked(NAME_ANumberBaseballPlayerController_ClientRPC_PrintChatting);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChattingMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChattingMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting_Statics::NewProp_InChattingMessage = { "InChattingMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballPlayerController_eventClientRPC_PrintChatting_Parms, InChattingMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChattingMessage_MetaData), NewProp_InChattingMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting_Statics::NewProp_InChattingMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballPlayerController, nullptr, "ClientRPC_PrintChatting", nullptr, nullptr, Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting_Statics::PropPointers), sizeof(NumberBaseballPlayerController_eventClientRPC_PrintChatting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting_Statics::Function_MetaDataParams) };
static_assert(sizeof(NumberBaseballPlayerController_eventClientRPC_PrintChatting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballPlayerController::execClientRPC_PrintChatting)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InChattingMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPC_PrintChatting_Implementation(Z_Param_InChattingMessage);
	P_NATIVE_END;
}
// End Class ANumberBaseballPlayerController Function ClientRPC_PrintChatting

// Begin Class ANumberBaseballPlayerController Function ServerRPC_PrintChatting
struct NumberBaseballPlayerController_eventServerRPC_PrintChatting_Parms
{
	FString InChattingMessage;
};
static const FName NAME_ANumberBaseballPlayerController_ServerRPC_PrintChatting = FName(TEXT("ServerRPC_PrintChatting"));
void ANumberBaseballPlayerController::ServerRPC_PrintChatting(const FString& InChattingMessage)
{
	NumberBaseballPlayerController_eventServerRPC_PrintChatting_Parms Parms;
	Parms.InChattingMessage=InChattingMessage;
	UFunction* Func = FindFunctionChecked(NAME_ANumberBaseballPlayerController_ServerRPC_PrintChatting);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChattingMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChattingMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting_Statics::NewProp_InChattingMessage = { "InChattingMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballPlayerController_eventServerRPC_PrintChatting_Parms, InChattingMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChattingMessage_MetaData), NewProp_InChattingMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting_Statics::NewProp_InChattingMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballPlayerController, nullptr, "ServerRPC_PrintChatting", nullptr, nullptr, Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting_Statics::PropPointers), sizeof(NumberBaseballPlayerController_eventServerRPC_PrintChatting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting_Statics::Function_MetaDataParams) };
static_assert(sizeof(NumberBaseballPlayerController_eventServerRPC_PrintChatting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballPlayerController::execServerRPC_PrintChatting)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InChattingMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPC_PrintChatting_Implementation(Z_Param_InChattingMessage);
	P_NATIVE_END;
}
// End Class ANumberBaseballPlayerController Function ServerRPC_PrintChatting

// Begin Class ANumberBaseballPlayerController
void ANumberBaseballPlayerController::StaticRegisterNativesANumberBaseballPlayerController()
{
	UClass* Class = ANumberBaseballPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientRPC_PrintChatting", &ANumberBaseballPlayerController::execClientRPC_PrintChatting },
		{ "ServerRPC_PrintChatting", &ANumberBaseballPlayerController::execServerRPC_PrintChatting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANumberBaseballPlayerController);
UClass* Z_Construct_UClass_ANumberBaseballPlayerController_NoRegister()
{
	return ANumberBaseballPlayerController::StaticClass();
}
struct Z_Construct_UClass_ANumberBaseballPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NumberBaseballPlayerController.h" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetClass_MetaData[] = {
		{ "Category", "NumberBaseballPlayerController" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlarmTextWidgetClass_MetaData[] = {
		{ "Category", "NumberBaseballPlayerController" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlarmTextWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlarmText_MetaData[] = {
		{ "Category", "NumberBaseballPlayerController" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatInputWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AlarmTextWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlarmTextWidgetInstance;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AlarmText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANumberBaseballPlayerController_ClientRPC_PrintChatting, "ClientRPC_PrintChatting" }, // 1592241521
		{ &Z_Construct_UFunction_ANumberBaseballPlayerController_ServerRPC_PrintChatting, "ServerRPC_PrintChatting" }, // 3583414786
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumberBaseballPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_ChatInputWidgetClass = { "ChatInputWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerController, ChatInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UChatInputWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetClass_MetaData), NewProp_ChatInputWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_ChatInputWidgetInstance = { "ChatInputWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerController, ChatInputWidgetInstance), Z_Construct_UClass_UChatInputWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetInstance_MetaData), NewProp_ChatInputWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_AlarmTextWidgetClass = { "AlarmTextWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerController, AlarmTextWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlarmTextWidgetClass_MetaData), NewProp_AlarmTextWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_AlarmTextWidgetInstance = { "AlarmTextWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerController, AlarmTextWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlarmTextWidgetInstance_MetaData), NewProp_AlarmTextWidgetInstance_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_AlarmText = { "AlarmText", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerController, AlarmText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlarmText_MetaData), NewProp_AlarmText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANumberBaseballPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_ChatInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_ChatInputWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_AlarmTextWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_AlarmTextWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_AlarmText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANumberBaseballPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANumberBaseballPlayerController_Statics::ClassParams = {
	&ANumberBaseballPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANumberBaseballPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANumberBaseballPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANumberBaseballPlayerController()
{
	if (!Z_Registration_Info_UClass_ANumberBaseballPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANumberBaseballPlayerController.OuterSingleton, Z_Construct_UClass_ANumberBaseballPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANumberBaseballPlayerController.OuterSingleton;
}
template<> ASSIGNMENT9_API UClass* StaticClass<ANumberBaseballPlayerController>()
{
	return ANumberBaseballPlayerController::StaticClass();
}
void ANumberBaseballPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AlarmText(TEXT("AlarmText"));
	const bool bIsValid = true
		&& Name_AlarmText == ClassReps[(int32)ENetFields_Private::AlarmText].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANumberBaseballPlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANumberBaseballPlayerController);
ANumberBaseballPlayerController::~ANumberBaseballPlayerController() {}
// End Class ANumberBaseballPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANumberBaseballPlayerController, ANumberBaseballPlayerController::StaticClass, TEXT("ANumberBaseballPlayerController"), &Z_Registration_Info_UClass_ANumberBaseballPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANumberBaseballPlayerController), 3486836990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_3964438943(TEXT("/Script/Assignment9"),
	Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
