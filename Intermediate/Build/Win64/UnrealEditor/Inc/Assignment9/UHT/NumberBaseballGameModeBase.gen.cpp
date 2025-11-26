// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment9/NumberBaseballGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberBaseballGameModeBase() {}

// Begin Cross Module References
ASSIGNMENT9_API UClass* Z_Construct_UClass_ANumberBaseballGameModeBase();
ASSIGNMENT9_API UClass* Z_Construct_UClass_ANumberBaseballGameModeBase_NoRegister();
ASSIGNMENT9_API UClass* Z_Construct_UClass_ANumberBaseballPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Assignment9();
// End Cross Module References

// Begin Class ANumberBaseballGameModeBase Function TickTurnTimer
struct Z_Construct_UFunction_ANumberBaseballGameModeBase_TickTurnTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NumberBaseballGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballGameModeBase_TickTurnTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballGameModeBase, nullptr, "TickTurnTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballGameModeBase_TickTurnTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballGameModeBase_TickTurnTimer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANumberBaseballGameModeBase_TickTurnTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballGameModeBase_TickTurnTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballGameModeBase::execTickTurnTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TickTurnTimer();
	P_NATIVE_END;
}
// End Class ANumberBaseballGameModeBase Function TickTurnTimer

// Begin Class ANumberBaseballGameModeBase
void ANumberBaseballGameModeBase::StaticRegisterNativesANumberBaseballGameModeBase()
{
	UClass* Class = ANumberBaseballGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TickTurnTimer", &ANumberBaseballGameModeBase::execTickTurnTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANumberBaseballGameModeBase);
UClass* Z_Construct_UClass_ANumberBaseballGameModeBase_NoRegister()
{
	return ANumberBaseballGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ANumberBaseballGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NumberBaseballGameModeBase.h" },
		{ "ModuleRelativePath", "NumberBaseballGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundResetDelay_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "NumberBaseballGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnTimeLimit_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "NumberBaseballGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurnPlayer_MetaData[] = {
		{ "ModuleRelativePath", "NumberBaseballGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundResetDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnTimeLimit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTurnPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANumberBaseballGameModeBase_TickTurnTimer, "TickTurnTimer" }, // 696686739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumberBaseballGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::NewProp_RoundResetDelay = { "RoundResetDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballGameModeBase, RoundResetDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundResetDelay_MetaData), NewProp_RoundResetDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::NewProp_TurnTimeLimit = { "TurnTimeLimit", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballGameModeBase, TurnTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnTimeLimit_MetaData), NewProp_TurnTimeLimit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::NewProp_CurrentTurnPlayer = { "CurrentTurnPlayer", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballGameModeBase, CurrentTurnPlayer), Z_Construct_UClass_ANumberBaseballPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurnPlayer_MetaData), NewProp_CurrentTurnPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::NewProp_RoundResetDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::NewProp_TurnTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::NewProp_CurrentTurnPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::ClassParams = {
	&ANumberBaseballGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANumberBaseballGameModeBase()
{
	if (!Z_Registration_Info_UClass_ANumberBaseballGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANumberBaseballGameModeBase.OuterSingleton, Z_Construct_UClass_ANumberBaseballGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANumberBaseballGameModeBase.OuterSingleton;
}
template<> ASSIGNMENT9_API UClass* StaticClass<ANumberBaseballGameModeBase>()
{
	return ANumberBaseballGameModeBase::StaticClass();
}
ANumberBaseballGameModeBase::ANumberBaseballGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANumberBaseballGameModeBase);
ANumberBaseballGameModeBase::~ANumberBaseballGameModeBase() {}
// End Class ANumberBaseballGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANumberBaseballGameModeBase, ANumberBaseballGameModeBase::StaticClass, TEXT("ANumberBaseballGameModeBase"), &Z_Registration_Info_UClass_ANumberBaseballGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANumberBaseballGameModeBase), 193424417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_1356718940(TEXT("/Script/Assignment9"),
	Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
