// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ACTIONROGUELIKE_SExplosiveBarrel_generated_h
#error "SExplosiveBarrel.generated.h already included, missing '#pragma once' in SExplosiveBarrel.h"
#endif
#define ACTIONROGUELIKE_SExplosiveBarrel_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorHit);


#define ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorHit);


#define ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASExplosiveBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASExplosiveBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASExplosiveBarrel)


#define ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASExplosiveBarrel, MeshComp); } \
	FORCEINLINE static uint32 __PPO__ForceComp() { return STRUCT_OFFSET(ASExplosiveBarrel, ForceComp); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_12_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASExplosiveBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
