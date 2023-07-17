// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ACTIONROGUELIKE_SProjectileBase_generated_h
#error "SProjectileBase.generated.h already included, missing '#pragma once' in SProjectileBase.h"
#endif
#define ACTIONROGUELIKE_SProjectileBase_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_RPC_WRAPPERS \
	virtual void Explode_Implementation(AActor* SourceActor, AActor* TargetActor); \
 \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execSetIgnoreCollision); \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execDamageActor); \
	DECLARE_FUNCTION(execPlayImpactEffect); \
	DECLARE_FUNCTION(execOnActorHit);


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Explode_Implementation(AActor* SourceActor, AActor* TargetActor); \
 \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execSetIgnoreCollision); \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execDamageActor); \
	DECLARE_FUNCTION(execPlayImpactEffect); \
	DECLARE_FUNCTION(execOnActorHit);


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_EVENT_PARMS \
	struct SProjectileBase_eventExplode_Parms \
	{ \
		AActor* SourceActor; \
		AActor* TargetActor; \
	};


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_CALLBACK_WRAPPERS
#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASProjectileBase(); \
	friend struct Z_Construct_UClass_ASProjectileBase_Statics; \
public: \
	DECLARE_CLASS(ASProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASProjectileBase)


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASProjectileBase(); \
	friend struct Z_Construct_UClass_ASProjectileBase_Statics; \
public: \
	DECLARE_CLASS(ASProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASProjectileBase)


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASProjectileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASProjectileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectileBase(ASProjectileBase&&); \
	NO_API ASProjectileBase(const ASProjectileBase&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectileBase(ASProjectileBase&&); \
	NO_API ASProjectileBase(const ASProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASProjectileBase)


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamageAmount() { return STRUCT_OFFSET(ASProjectileBase, DamageAmount); } \
	FORCEINLINE static uint32 __PPO__ImpactVFX() { return STRUCT_OFFSET(ASProjectileBase, ImpactVFX); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ASProjectileBase, SphereComp); } \
	FORCEINLINE static uint32 __PPO__MoveComp() { return STRUCT_OFFSET(ASProjectileBase, MoveComp); } \
	FORCEINLINE static uint32 __PPO__EffectComp() { return STRUCT_OFFSET(ASProjectileBase, EffectComp); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_13_PROLOG \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_EVENT_PARMS


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_CALLBACK_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SProjectileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
