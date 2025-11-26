// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment9/NumberBaseballPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberBaseballPlayerState() {}

// Begin Cross Module References
ASSIGNMENT9_API UClass* Z_Construct_UClass_ANumberBaseballPlayerState();
ASSIGNMENT9_API UClass* Z_Construct_UClass_ANumberBaseballPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_Assignment9();
// End Cross Module References

// Begin Class ANumberBaseballPlayerState
void ANumberBaseballPlayerState::StaticRegisterNativesANumberBaseballPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANumberBaseballPlayerState);
UClass* Z_Construct_UClass_ANumberBaseballPlayerState_NoRegister()
{
	return ANumberBaseballPlayerState::StaticClass();
}
struct Z_Construct_UClass_ANumberBaseballPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NumberBaseballPlayerState.h" },
		{ "ModuleRelativePath", "NumberBaseballPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNickName_MetaData[] = {
		{ "ModuleRelativePath", "NumberBaseballPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNumberCount_MetaData[] = {
		{ "ModuleRelativePath", "NumberBaseballPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberCount_MetaData[] = {
		{ "ModuleRelativePath", "NumberBaseballPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingSeconds_MetaData[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "NumberBaseballPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNickName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNumberCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumberBaseballPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANumberBaseballPlayerState_Statics::NewProp_PlayerNickName = { "PlayerNickName", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerState, PlayerNickName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNickName_MetaData), NewProp_PlayerNickName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANumberBaseballPlayerState_Statics::NewProp_CurrentNumberCount = { "CurrentNumberCount", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerState, CurrentNumberCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNumberCount_MetaData), NewProp_CurrentNumberCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANumberBaseballPlayerState_Statics::NewProp_MaxNumberCount = { "MaxNumberCount", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerState, MaxNumberCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberCount_MetaData), NewProp_MaxNumberCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANumberBaseballPlayerState_Statics::NewProp_RemainingSeconds = { "RemainingSeconds", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerState, RemainingSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingSeconds_MetaData), NewProp_RemainingSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANumberBaseballPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerState_Statics::NewProp_PlayerNickName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerState_Statics::NewProp_CurrentNumberCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerState_Statics::NewProp_MaxNumberCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerState_Statics::NewProp_RemainingSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANumberBaseballPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANumberBaseballPlayerState_Statics::ClassParams = {
	&ANumberBaseballPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANumberBaseballPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ANumberBaseballPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANumberBaseballPlayerState()
{
	if (!Z_Registration_Info_UClass_ANumberBaseballPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANumberBaseballPlayerState.OuterSingleton, Z_Construct_UClass_ANumberBaseballPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANumberBaseballPlayerState.OuterSingleton;
}
template<> ASSIGNMENT9_API UClass* StaticClass<ANumberBaseballPlayerState>()
{
	return ANumberBaseballPlayerState::StaticClass();
}
void ANumberBaseballPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PlayerNickName(TEXT("PlayerNickName"));
	static const FName Name_CurrentNumberCount(TEXT("CurrentNumberCount"));
	static const FName Name_MaxNumberCount(TEXT("MaxNumberCount"));
	static const FName Name_RemainingSeconds(TEXT("RemainingSeconds"));
	const bool bIsValid = true
		&& Name_PlayerNickName == ClassReps[(int32)ENetFields_Private::PlayerNickName].Property->GetFName()
		&& Name_CurrentNumberCount == ClassReps[(int32)ENetFields_Private::CurrentNumberCount].Property->GetFName()
		&& Name_MaxNumberCount == ClassReps[(int32)ENetFields_Private::MaxNumberCount].Property->GetFName()
		&& Name_RemainingSeconds == ClassReps[(int32)ENetFields_Private::RemainingSeconds].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANumberBaseballPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANumberBaseballPlayerState);
ANumberBaseballPlayerState::~ANumberBaseballPlayerState() {}
// End Class ANumberBaseballPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANumberBaseballPlayerState, ANumberBaseballPlayerState::StaticClass, TEXT("ANumberBaseballPlayerState"), &Z_Registration_Info_UClass_ANumberBaseballPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANumberBaseballPlayerState), 2085427379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerState_h_1728432814(TEXT("/Script/Assignment9"),
	Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
