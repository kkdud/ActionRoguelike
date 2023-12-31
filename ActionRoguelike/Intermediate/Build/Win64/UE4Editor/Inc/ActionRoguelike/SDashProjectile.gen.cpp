// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SDashProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDashProjectile() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASDashProjectile_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASDashProjectile();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASProjectileBase();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
// End Cross Module References
	DEFINE_FUNCTION(ASDashProjectile::execDetonate_Elapsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Detonate_Elapsed();
		P_NATIVE_END;
	}
	void ASDashProjectile::StaticRegisterNativesASDashProjectile()
	{
		UClass* Class = ASDashProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Detonate_Elapsed", &ASDashProjectile::execDetonate_Elapsed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASDashProjectile_Detonate_Elapsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDashProjectile_Detonate_Elapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SDashProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDashProjectile_Detonate_Elapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDashProjectile, nullptr, "Detonate_Elapsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDashProjectile_Detonate_Elapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDashProjectile_Detonate_Elapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDashProjectile_Detonate_Elapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASDashProjectile_Detonate_Elapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASDashProjectile_NoRegister()
	{
		return ASDashProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ASDashProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetonateDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetonateDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASDashProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASProjectileBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASDashProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASDashProjectile_Detonate_Elapsed, "Detonate_Elapsed" }, // 2835816462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDashProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SDashProjectile.h" },
		{ "ModuleRelativePath", "Public/SDashProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDashProjectile_Statics::NewProp_TeleportDelay_MetaData[] = {
		{ "Category", "Teleport" },
		{ "ModuleRelativePath", "Public/SDashProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDashProjectile_Statics::NewProp_TeleportDelay = { "TeleportDelay", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASDashProjectile, TeleportDelay), METADATA_PARAMS(Z_Construct_UClass_ASDashProjectile_Statics::NewProp_TeleportDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDashProjectile_Statics::NewProp_TeleportDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDashProjectile_Statics::NewProp_DetonateDelay_MetaData[] = {
		{ "Category", "Teleport" },
		{ "ModuleRelativePath", "Public/SDashProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDashProjectile_Statics::NewProp_DetonateDelay = { "DetonateDelay", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASDashProjectile, DetonateDelay), METADATA_PARAMS(Z_Construct_UClass_ASDashProjectile_Statics::NewProp_DetonateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDashProjectile_Statics::NewProp_DetonateDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASDashProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDashProjectile_Statics::NewProp_TeleportDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDashProjectile_Statics::NewProp_DetonateDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASDashProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDashProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASDashProjectile_Statics::ClassParams = {
		&ASDashProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASDashProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASDashProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASDashProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASDashProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASDashProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASDashProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASDashProjectile, 2607629604);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<ASDashProjectile>()
	{
		return ASDashProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASDashProjectile(Z_Construct_UClass_ASDashProjectile, &ASDashProjectile::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("ASDashProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASDashProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
