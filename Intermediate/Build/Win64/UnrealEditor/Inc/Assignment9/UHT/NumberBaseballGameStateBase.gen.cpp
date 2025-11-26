// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment9/NumberBaseballGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberBaseballGameStateBase() {}

// Begin Cross Module References
ASSIGNMENT9_API UClass* Z_Construct_UClass_ANumberBaseballGameStateBase();
ASSIGNMENT9_API UClass* Z_Construct_UClass_ANumberBaseballGameStateBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_Assignment9();
// End Cross Module References

// Begin Class ANumberBaseballGameStateBase Function MulticastRPCLogin
struct NumberBaseballGameStateBase_eventMulticastRPCLogin_Parms
{
	FString PlayerNameString;
};
static const FName NAME_ANumberBaseballGameStateBase_MulticastRPCLogin = FName(TEXT("MulticastRPCLogin"));
void ANumberBaseballGameStateBase::MulticastRPCLogin(const FString& PlayerNameString)
{
	NumberBaseballGameStateBase_eventMulticastRPCLogin_Parms Parms;
	Parms.PlayerNameString=PlayerNameString;
	UFunction* Func = FindFunctionChecked(NAME_ANumberBaseballGameStateBase_MulticastRPCLogin);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NumberBaseballGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNameString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin_Statics::NewProp_PlayerNameString = { "PlayerNameString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballGameStateBase_eventMulticastRPCLogin_Parms, PlayerNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNameString_MetaData), NewProp_PlayerNameString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin_Statics::NewProp_PlayerNameString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballGameStateBase, nullptr, "MulticastRPCLogin", nullptr, nullptr, Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin_Statics::PropPointers), sizeof(NumberBaseballGameStateBase_eventMulticastRPCLogin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin_Statics::Function_MetaDataParams) };
static_assert(sizeof(NumberBaseballGameStateBase_eventMulticastRPCLogin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballGameStateBase::execMulticastRPCLogin)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerNameString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRPCLogin_Implementation(Z_Param_PlayerNameString);
	P_NATIVE_END;
}
// End Class ANumberBaseballGameStateBase Function MulticastRPCLogin

// Begin Class ANumberBaseballGameStateBase
void ANumberBaseballGameStateBase::StaticRegisterNativesANumberBaseballGameStateBase()
{
	UClass* Class = ANumberBaseballGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastRPCLogin", &ANumberBaseballGameStateBase::execMulticastRPCLogin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANumberBaseballGameStateBase);
UClass* Z_Construct_UClass_ANumberBaseballGameStateBase_NoRegister()
{
	return ANumberBaseballGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ANumberBaseballGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NumberBaseballGameStateBase.h" },
		{ "ModuleRelativePath", "NumberBaseballGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANumberBaseballGameStateBase_MulticastRPCLogin, "MulticastRPCLogin" }, // 1081335378
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumberBaseballGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANumberBaseballGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANumberBaseballGameStateBase_Statics::ClassParams = {
	&ANumberBaseballGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANumberBaseballGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANumberBaseballGameStateBase()
{
	if (!Z_Registration_Info_UClass_ANumberBaseballGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANumberBaseballGameStateBase.OuterSingleton, Z_Construct_UClass_ANumberBaseballGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANumberBaseballGameStateBase.OuterSingleton;
}
template<> ASSIGNMENT9_API UClass* StaticClass<ANumberBaseballGameStateBase>()
{
	return ANumberBaseballGameStateBase::StaticClass();
}
ANumberBaseballGameStateBase::ANumberBaseballGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANumberBaseballGameStateBase);
ANumberBaseballGameStateBase::~ANumberBaseballGameStateBase() {}
// End Class ANumberBaseballGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANumberBaseballGameStateBase, ANumberBaseballGameStateBase::StaticClass, TEXT("ANumberBaseballGameStateBase"), &Z_Registration_Info_UClass_ANumberBaseballGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANumberBaseballGameStateBase), 1100867714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_1062367113(TEXT("/Script/Assignment9"),
	Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Assignment9_Source_Assignment9_NumberBaseballGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
