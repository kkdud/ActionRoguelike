// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameModeBase() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASGameModeBase_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASPowerupActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASGameModeBase::execOnPowerupSpawnQueryCompleted)
	{
		P_GET_OBJECT(UEnvQueryInstanceBlueprintWrapper,Z_Param_QueryInstance);
		P_GET_PROPERTY(FByteProperty,Z_Param_QueryStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPowerupSpawnQueryCompleted(Z_Param_QueryInstance,EEnvQueryStatus::Type(Z_Param_QueryStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASGameModeBase::execRespawnPlayerElapsed)
	{
		P_GET_OBJECT(AController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RespawnPlayerElapsed(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASGameModeBase::execOnBotSpawnQueryCompleted)
	{
		P_GET_OBJECT(UEnvQueryInstanceBlueprintWrapper,Z_Param_QueryInstance);
		P_GET_PROPERTY(FByteProperty,Z_Param_QueryStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBotSpawnQueryCompleted(Z_Param_QueryInstance,EEnvQueryStatus::Type(Z_Param_QueryStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASGameModeBase::execBotSpawnTimerElapsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BotSpawnTimerElapsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASGameModeBase::execKillAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillAll();
		P_NATIVE_END;
	}
	void ASGameModeBase::StaticRegisterNativesASGameModeBase()
	{
		UClass* Class = ASGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BotSpawnTimerElapsed", &ASGameModeBase::execBotSpawnTimerElapsed },
			{ "KillAll", &ASGameModeBase::execKillAll },
			{ "OnBotSpawnQueryCompleted", &ASGameModeBase::execOnBotSpawnQueryCompleted },
			{ "OnPowerupSpawnQueryCompleted", &ASGameModeBase::execOnPowerupSpawnQueryCompleted },
			{ "RespawnPlayerElapsed", &ASGameModeBase::execRespawnPlayerElapsed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASGameModeBase_BotSpawnTimerElapsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameModeBase_BotSpawnTimerElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameModeBase_BotSpawnTimerElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameModeBase, nullptr, "BotSpawnTimerElapsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameModeBase_BotSpawnTimerElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameModeBase_BotSpawnTimerElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameModeBase_BotSpawnTimerElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameModeBase_BotSpawnTimerElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameModeBase_KillAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameModeBase_KillAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameModeBase_KillAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameModeBase, nullptr, "KillAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameModeBase_KillAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameModeBase_KillAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameModeBase_KillAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameModeBase_KillAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics
	{
		struct SGameModeBase_eventOnBotSpawnQueryCompleted_Parms
		{
			UEnvQueryInstanceBlueprintWrapper* QueryInstance;
			TEnumAsByte<EEnvQueryStatus::Type> QueryStatus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryInstance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::NewProp_QueryInstance = { "QueryInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameModeBase_eventOnBotSpawnQueryCompleted_Parms, QueryInstance), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::NewProp_QueryStatus = { "QueryStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameModeBase_eventOnBotSpawnQueryCompleted_Parms, QueryStatus), Z_Construct_UEnum_AIModule_EEnvQueryStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::NewProp_QueryInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::NewProp_QueryStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameModeBase, nullptr, "OnBotSpawnQueryCompleted", nullptr, nullptr, sizeof(SGameModeBase_eventOnBotSpawnQueryCompleted_Parms), Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics
	{
		struct SGameModeBase_eventOnPowerupSpawnQueryCompleted_Parms
		{
			UEnvQueryInstanceBlueprintWrapper* QueryInstance;
			TEnumAsByte<EEnvQueryStatus::Type> QueryStatus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryInstance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::NewProp_QueryInstance = { "QueryInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameModeBase_eventOnPowerupSpawnQueryCompleted_Parms, QueryInstance), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::NewProp_QueryStatus = { "QueryStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameModeBase_eventOnPowerupSpawnQueryCompleted_Parms, QueryStatus), Z_Construct_UEnum_AIModule_EEnvQueryStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::NewProp_QueryInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::NewProp_QueryStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameModeBase, nullptr, "OnPowerupSpawnQueryCompleted", nullptr, nullptr, sizeof(SGameModeBase_eventOnPowerupSpawnQueryCompleted_Parms), Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed_Statics
	{
		struct SGameModeBase_eventRespawnPlayerElapsed_Parms
		{
			AController* Controller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameModeBase_eventRespawnPlayerElapsed_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameModeBase, nullptr, "RespawnPlayerElapsed", nullptr, nullptr, sizeof(SGameModeBase_eventRespawnPlayerElapsed_Parms), Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGameModeBase_NoRegister()
	{
		return ASGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredPowerupDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredPowerupDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredPowerupCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredPowerupCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupSpawnQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerupSpawnQuery;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PowerupClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PowerupClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreditPerKill_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CreditPerKill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotSpawnTimerInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BotSpawnTimerInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotSpawnQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotSpawnQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MinionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DifficultyCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGameModeBase_BotSpawnTimerElapsed, "BotSpawnTimerElapsed" }, // 1262615607
		{ &Z_Construct_UFunction_ASGameModeBase_KillAll, "KillAll" }, // 450896440
		{ &Z_Construct_UFunction_ASGameModeBase_OnBotSpawnQueryCompleted, "OnBotSpawnQueryCompleted" }, // 3762529788
		{ &Z_Construct_UFunction_ASGameModeBase_OnPowerupSpawnQueryCompleted, "OnPowerupSpawnQueryCompleted" }, // 2207086421
		{ &Z_Construct_UFunction_ASGameModeBase_RespawnPlayerElapsed, "RespawnPlayerElapsed" }, // 2689314238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SGameModeBase.h" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_RequiredPowerupDistance_MetaData[] = {
		{ "Category", "Powerup" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_RequiredPowerupDistance = { "RequiredPowerupDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, RequiredPowerupDistance), METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_RequiredPowerupDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_RequiredPowerupDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DesiredPowerupCount_MetaData[] = {
		{ "Category", "Powerup" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DesiredPowerupCount = { "DesiredPowerupCount", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, DesiredPowerupCount), METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DesiredPowerupCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DesiredPowerupCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupSpawnQuery_MetaData[] = {
		{ "Category", "Powerup" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupSpawnQuery = { "PowerupSpawnQuery", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, PowerupSpawnQuery), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupSpawnQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupSpawnQuery_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupClasses_Inner = { "PowerupClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASPowerupActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupClasses_MetaData[] = {
		{ "Category", "Powerup" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupClasses = { "PowerupClasses", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, PowerupClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_CreditPerKill_MetaData[] = {
		{ "Category", "Credits" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_CreditPerKill = { "CreditPerKill", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, CreditPerKill), METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_CreditPerKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_CreditPerKill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_BotSpawnTimerInterval_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_BotSpawnTimerInterval = { "BotSpawnTimerInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, BotSpawnTimerInterval), METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_BotSpawnTimerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_BotSpawnTimerInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_BotSpawnQuery_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_BotSpawnQuery = { "BotSpawnQuery", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, BotSpawnQuery), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_BotSpawnQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_BotSpawnQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_MinionClass_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_MinionClass = { "MinionClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, MinionClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_MinionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_MinionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DifficultyCurve_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DifficultyCurve = { "DifficultyCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, DifficultyCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DifficultyCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DifficultyCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_RequiredPowerupDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DesiredPowerupCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupSpawnQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_PowerupClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_CreditPerKill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_BotSpawnTimerInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_BotSpawnQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_MinionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DifficultyCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASGameModeBase_Statics::ClassParams = {
		&ASGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGameModeBase, 2609719329);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<ASGameModeBase>()
	{
		return ASGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGameModeBase(Z_Construct_UClass_ASGameModeBase, &ASGameModeBase::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("ASGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
