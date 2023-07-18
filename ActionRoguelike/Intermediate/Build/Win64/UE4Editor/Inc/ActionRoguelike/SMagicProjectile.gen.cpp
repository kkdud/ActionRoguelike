// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SMagicProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMagicProjectile() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASMagicProjectile_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASMagicProjectile();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASProjectileBase();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASMagicProjectile::execCreateBounceBulletBack)
	{
		P_GET_OBJECT(APawn,Z_Param_SourcePawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASMagicProjectile**)Z_Param__Result=P_THIS->CreateBounceBulletBack(Z_Param_SourcePawn);
		P_NATIVE_END;
	}
	void ASMagicProjectile::StaticRegisterNativesASMagicProjectile()
	{
		UClass* Class = ASMagicProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateBounceBulletBack", &ASMagicProjectile::execCreateBounceBulletBack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics
	{
		struct SMagicProjectile_eventCreateBounceBulletBack_Parms
		{
			APawn* SourcePawn;
			ASMagicProjectile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourcePawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::NewProp_SourcePawn = { "SourcePawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMagicProjectile_eventCreateBounceBulletBack_Parms, SourcePawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMagicProjectile_eventCreateBounceBulletBack_Parms, ReturnValue), Z_Construct_UClass_ASMagicProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::NewProp_SourcePawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMagicProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASMagicProjectile, nullptr, "CreateBounceBulletBack", nullptr, nullptr, sizeof(SMagicProjectile_eventCreateBounceBulletBack_Parms), Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASMagicProjectile_NoRegister()
	{
		return ASMagicProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ASMagicProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParryTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViolentTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViolentTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurningEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BurningEffectClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMagicProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASProjectileBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASMagicProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASMagicProjectile_CreateBounceBulletBack, "CreateBounceBulletBack" }, // 2351112891
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMagicProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SMagicProjectile.h" },
		{ "ModuleRelativePath", "Public/SMagicProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ParryTag_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/SMagicProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ParryTag = { "ParryTag", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASMagicProjectile, ParryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ParryTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ParryTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ViolentTag_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/SMagicProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ViolentTag = { "ViolentTag", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASMagicProjectile, ViolentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ViolentTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ViolentTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_BurningEffectClass_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/SMagicProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_BurningEffectClass = { "BurningEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASMagicProjectile, BurningEffectClass), Z_Construct_UClass_USAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_BurningEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_BurningEffectClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ParryTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ViolentTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_BurningEffectClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMagicProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMagicProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASMagicProjectile_Statics::ClassParams = {
		&ASMagicProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASMagicProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASMagicProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASMagicProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASMagicProjectile, 3824346112);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<ASMagicProjectile>()
	{
		return ASMagicProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASMagicProjectile(Z_Construct_UClass_ASMagicProjectile, &ASMagicProjectile::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("ASMagicProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMagicProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
