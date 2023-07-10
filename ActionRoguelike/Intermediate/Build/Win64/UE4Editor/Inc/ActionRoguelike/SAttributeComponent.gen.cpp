// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SAttributeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAttributeComponent() {}
// Cross Module References
	ACTIONROGUELIKE_API UFunction* Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAttributeComponent_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAttributeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics
	{
		struct _Script_ActionRoguelike_eventOnHealthChanged_Parms
		{
			AActor* InstigatorActor;
			USAttributeComponent* OwningComp;
			float NewHealth;
			float Delta;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRoguelike_eventOnHealthChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRoguelike_eventOnHealthChanged_Parms, OwningComp), Z_Construct_UClass_USAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRoguelike_eventOnHealthChanged_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRoguelike_eventOnHealthChanged_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::NewProp_InstigatorActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::NewProp_OwningComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionRoguelike, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_ActionRoguelike_eventOnHealthChanged_Parms), Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USAttributeComponent::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAttributeComponent::execApplyHealthChange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyHealthChange(Z_Param_Delta);
		P_NATIVE_END;
	}
	void USAttributeComponent::StaticRegisterNativesUSAttributeComponent()
	{
		UClass* Class = USAttributeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyHealthChange", &USAttributeComponent::execApplyHealthChange },
			{ "IsAlive", &USAttributeComponent::execIsAlive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics
	{
		struct SAttributeComponent_eventApplyHealthChange_Parms
		{
			float Delta;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAttributeComponent_eventApplyHealthChange_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAttributeComponent_eventApplyHealthChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAttributeComponent_eventApplyHealthChange_Parms), &Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/SAttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAttributeComponent, nullptr, "ApplyHealthChange", nullptr, nullptr, sizeof(SAttributeComponent_eventApplyHealthChange_Parms), Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics
	{
		struct SAttributeComponent_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAttributeComponent_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAttributeComponent_eventIsAlive_Parms), &Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAttributeComponent, nullptr, "IsAlive", nullptr, nullptr, sizeof(SAttributeComponent_eventIsAlive_Parms), Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAttributeComponent_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAttributeComponent_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAttributeComponent_NoRegister()
	{
		return USAttributeComponent::StaticClass();
	}
	struct Z_Construct_UClass_USAttributeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAttributeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAttributeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAttributeComponent_ApplyHealthChange, "ApplyHealthChange" }, // 2593999559
		{ &Z_Construct_UFunction_USAttributeComponent_IsAlive, "IsAlive" }, // 1521855365
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAttributeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SAttributeComponent.h" },
		{ "ModuleRelativePath", "Public/SAttributeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAttributeComponent_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/SAttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAttributeComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAttributeComponent, Health), METADATA_PARAMS(Z_Construct_UClass_USAttributeComponent_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeComponent_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAttributeComponent_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/SAttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USAttributeComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAttributeComponent, OnHealthChanged), Z_Construct_UDelegateFunction_ActionRoguelike_OnHealthChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USAttributeComponent_Statics::NewProp_OnHealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeComponent_Statics::NewProp_OnHealthChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAttributeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAttributeComponent_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAttributeComponent_Statics::NewProp_OnHealthChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAttributeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAttributeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAttributeComponent_Statics::ClassParams = {
		&USAttributeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USAttributeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USAttributeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAttributeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAttributeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAttributeComponent, 3243775678);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<USAttributeComponent>()
	{
		return USAttributeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAttributeComponent(Z_Construct_UClass_USAttributeComponent, &USAttributeComponent::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("USAttributeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAttributeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
