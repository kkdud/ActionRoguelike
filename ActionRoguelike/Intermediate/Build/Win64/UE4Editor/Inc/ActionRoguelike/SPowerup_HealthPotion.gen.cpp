// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SPowerup_HealthPotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerup_HealthPotion() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASPowerup_HealthPotion_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASPowerup_HealthPotion();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASPowerupActor();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
// End Cross Module References
	void ASPowerup_HealthPotion::StaticRegisterNativesASPowerup_HealthPotion()
	{
	}
	UClass* Z_Construct_UClass_ASPowerup_HealthPotion_NoRegister()
	{
		return ASPowerup_HealthPotion::StaticClass();
	}
	struct Z_Construct_UClass_ASPowerup_HealthPotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPowerup_HealthPotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASPowerupActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerup_HealthPotion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SPowerup_HealthPotion.h" },
		{ "ModuleRelativePath", "Public/SPowerup_HealthPotion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPowerup_HealthPotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPowerup_HealthPotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPowerup_HealthPotion_Statics::ClassParams = {
		&ASPowerup_HealthPotion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPowerup_HealthPotion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerup_HealthPotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPowerup_HealthPotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPowerup_HealthPotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPowerup_HealthPotion, 1111690957);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<ASPowerup_HealthPotion>()
	{
		return ASPowerup_HealthPotion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerup_HealthPotion(Z_Construct_UClass_ASPowerup_HealthPotion, &ASPowerup_HealthPotion::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("ASPowerup_HealthPotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerup_HealthPotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
