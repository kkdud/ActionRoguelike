// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionRoguelike_init() {}
	ACTIONROGUELIKE_API UFunction* Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature();
	ACTIONROGUELIKE_API UFunction* Z_Construct_UDelegateFunction_ActionRoguelike_OnInteractionChanged__DelegateSignature();
	ACTIONROGUELIKE_API UFunction* Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature();
	ACTIONROGUELIKE_API UFunction* Z_Construct_UDelegateFunction_ActionRoguelike_OnCreditsChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionRoguelike_OnInteractionChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionRoguelike_OnPawnChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionRoguelike_OnCreditsChanged__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/ActionRoguelike",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x74B69A81,
				0x8467A5F3,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
