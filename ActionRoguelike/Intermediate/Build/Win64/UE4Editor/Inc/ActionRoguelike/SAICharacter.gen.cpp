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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USAttributeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_USActionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASAICharacter::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAICharacter::execSetTargetActor)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetActor(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAICharacter::execOnHealthChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_GET_OBJECT(USAttributeComponent,Z_Param_OwningComp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthChanged(Z_Param_InstigatorActor,Z_Param_OwningComp,Z_Param_NewHealth,Z_Param_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAICharacter::execOnPawnSeen)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSeen(Z_Param_Pawn);
		P_NATIVE_END;
	}
	void ASAICharacter::StaticRegisterNativesASAICharacter()
	{
		UClass* Class = ASAICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAlive", &ASAICharacter::execIsAlive },
			{ "OnHealthChanged", &ASAICharacter::execOnHealthChanged },
			{ "OnPawnSeen", &ASAICharacter::execOnPawnSeen },
			{ "SetTargetActor", &ASAICharacter::execSetTargetActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAICharacter_IsAlive_Statics
	{
		struct SAICharacter_eventIsAlive_Parms
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
	void Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAICharacter_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAICharacter_eventIsAlive_Parms), &Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICharacter, nullptr, "IsAlive", nullptr, nullptr, sizeof(SAICharacter_eventIsAlive_Parms), Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAICharacter_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAICharacter_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics
	{
		struct SAICharacter_eventOnHealthChanged_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAICharacter_eventOnHealthChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAICharacter_eventOnHealthChanged_Parms, OwningComp), Z_Construct_UClass_USAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::NewProp_OwningComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::NewProp_OwningComp_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAICharacter_eventOnHealthChanged_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAICharacter_eventOnHealthChanged_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::NewProp_InstigatorActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::NewProp_OwningComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::NewProp_NewHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICharacter, nullptr, "OnHealthChanged", nullptr, nullptr, sizeof(SAICharacter_eventOnHealthChanged_Parms), Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAICharacter_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAICharacter_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics
	{
		struct SAICharacter_eventOnPawnSeen_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAICharacter_eventOnPawnSeen_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICharacter, nullptr, "OnPawnSeen", nullptr, nullptr, sizeof(SAICharacter_eventOnPawnSeen_Parms), Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAICharacter_OnPawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAICharacter_SetTargetActor_Statics
	{
		struct SAICharacter_eventSetTargetActor_Parms
		{
			AActor* TargetActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAICharacter_SetTargetActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAICharacter_eventSetTargetActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAICharacter_SetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAICharacter_SetTargetActor_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICharacter_SetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICharacter_SetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICharacter, nullptr, "SetTargetActor", nullptr, nullptr, sizeof(SAICharacter_eventSetTargetActor_Parms), Z_Construct_UFunction_ASAICharacter_SetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_SetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAICharacter_SetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_SetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAICharacter_SetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAICharacter_SetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASAICharacter_NoRegister()
	{
		return ASAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HealthBarWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToHitParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TimeToHitParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASAICharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAICharacter_IsAlive, "IsAlive" }, // 3210947290
		{ &Z_Construct_UFunction_ASAICharacter_OnHealthChanged, "OnHealthChanged" }, // 935437434
		{ &Z_Construct_UFunction_ASAICharacter_OnPawnSeen, "OnPawnSeen" }, // 732256161
		{ &Z_Construct_UFunction_ASAICharacter_SetTargetActor, "SetTargetActor" }, // 3830716151
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/SAICharacter.h" },
		{ "ModuleRelativePath", "Public/AI/SAICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICharacter_Statics::NewProp_HealthBarWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/AI/SAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASAICharacter_Statics::NewProp_HealthBarWidgetClass = { "HealthBarWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAICharacter, HealthBarWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASAICharacter_Statics::NewProp_HealthBarWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::NewProp_HealthBarWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICharacter_Statics::NewProp_TimeToHitParamName_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/AI/SAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAICharacter_Statics::NewProp_TimeToHitParamName = { "TimeToHitParamName", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAICharacter, TimeToHitParamName), METADATA_PARAMS(Z_Construct_UClass_ASAICharacter_Statics::NewProp_TimeToHitParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::NewProp_TimeToHitParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICharacter_Statics::NewProp_PawnSensComp_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/SAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAICharacter_Statics::NewProp_PawnSensComp = { "PawnSensComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAICharacter, PawnSensComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAICharacter_Statics::NewProp_PawnSensComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::NewProp_PawnSensComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICharacter_Statics::NewProp_AttributeComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/SAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAICharacter_Statics::NewProp_AttributeComp = { "AttributeComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAICharacter, AttributeComp), Z_Construct_UClass_USAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAICharacter_Statics::NewProp_AttributeComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::NewProp_AttributeComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICharacter_Statics::NewProp_ActionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/SAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAICharacter_Statics::NewProp_ActionComp = { "ActionComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAICharacter, ActionComp), Z_Construct_UClass_USActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAICharacter_Statics::NewProp_ActionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::NewProp_ActionComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICharacter_Statics::NewProp_HealthBarWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICharacter_Statics::NewProp_TimeToHitParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICharacter_Statics::NewProp_PawnSensComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICharacter_Statics::NewProp_AttributeComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICharacter_Statics::NewProp_ActionComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAICharacter_Statics::ClassParams = {
		&ASAICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASAICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ASAICharacter, 4237162375);
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
