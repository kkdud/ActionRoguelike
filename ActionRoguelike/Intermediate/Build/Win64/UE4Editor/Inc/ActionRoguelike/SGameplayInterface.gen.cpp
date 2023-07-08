// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SGameplayInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameplayInterface() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USGameplayInterface_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USGameplayInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISGameplayInterface::execInteract)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_InstigatorPawn);
		P_NATIVE_END;
	}
	void ISGameplayInterface::Interact(APawn* InstigatorPawn)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void USGameplayInterface::StaticRegisterNativesUSGameplayInterface()
	{
		UClass* Class = USGameplayInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &ISGameplayInterface::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USGameplayInterface_Interact_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayInterface_Interact_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayInterface_eventInteract_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameplayInterface_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayInterface_Interact_Statics::NewProp_InstigatorPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayInterface_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameplayInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameplayInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayInterface, nullptr, "Interact", nullptr, nullptr, sizeof(SGameplayInterface_eventInteract_Parms), Z_Construct_UFunction_USGameplayInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayInterface_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameplayInterface_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayInterface_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameplayInterface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USGameplayInterface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USGameplayInterface_NoRegister()
	{
		return USGameplayInterface::StaticClass();
	}
	struct Z_Construct_UClass_USGameplayInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGameplayInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USGameplayInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USGameplayInterface_Interact, "Interact" }, // 2007967279
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameplayInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameplayInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGameplayInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISGameplayInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USGameplayInterface_Statics::ClassParams = {
		&USGameplayInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USGameplayInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USGameplayInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USGameplayInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USGameplayInterface, 1049283579);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USGameplayInterface>()
	{
		return USGameplayInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USGameplayInterface(Z_Construct_UClass_USGameplayInterface, &USGameplayInterface::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USGameplayInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USGameplayInterface);
	static FName NAME_USGameplayInterface_Interact = FName(TEXT("Interact"));
	void ISGameplayInterface::Execute_Interact(UObject* O, APawn* InstigatorPawn)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USGameplayInterface::StaticClass()));
		SGameplayInterface_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USGameplayInterface_Interact);
		if (Func)
		{
			Parms.InstigatorPawn=InstigatorPawn;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISGameplayInterface*)(O->GetNativeInterfaceAddress(USGameplayInterface::StaticClass())))
		{
			I->Interact_Implementation(InstigatorPawn);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
