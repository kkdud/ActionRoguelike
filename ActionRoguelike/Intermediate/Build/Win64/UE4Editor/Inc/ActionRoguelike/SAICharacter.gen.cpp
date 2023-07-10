// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/AI/SAICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAICharacter() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASAICharacter_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASAICharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
// End Cross Module References
	void ASAICharacter::StaticRegisterNativesASAICharacter()
	{
	}
	UClass* Z_Construct_UClass_ASAICharacter_NoRegister()
	{
		return ASAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/SAICharacter.h" },
		{ "ModuleRelativePath", "Public/AI/SAICharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAICharacter_Statics::ClassParams = {
		&ASAICharacter::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ASAICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAICharacter, 4218076706);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<ASAICharacter>()
	{
		return ASAICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAICharacter(Z_Construct_UClass_ASAICharacter, &ASAICharacter::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("ASAICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
