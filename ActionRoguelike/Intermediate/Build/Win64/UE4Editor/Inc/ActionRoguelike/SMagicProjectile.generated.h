// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class ASMagicProjectile;
#ifdef ACTIONROGUELIKE_SMagicProjectile_generated_h
#error "SMagicProjectile.generated.h already included, missing '#pragma once' in SMagicProjectile.h"
#endif
#define ACTIONROGUELIKE_SMagicProjectile_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateBounceBulletBack);


#define ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateBounceBulletBack);


#define ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASMagicProjectile(); \
	friend struct Z_Construct_UClass_ASMagicProjectile_Statics; \
public: \
	DECLARE_CLASS(ASMagicProjectile, ASProjectileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASMagicProjectile)


#define ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASMagicProjectile(); \
	friend struct Z_Construct_UClass_ASMagicProjectile_Statics; \
public: \
	DECLARE_CLASS(ASMagicProjectile, ASProjectileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(ASMagicProjectile)


#define ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASMagicProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASMagicProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMagicProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMagicProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMagicProjectile(ASMagicProjectile&&); \
	NO_API ASMagicProjectile(const ASMagicProjectile&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMagicProjectile(ASMagicProjectile&&); \
	NO_API ASMagicProjectile(const ASMagicProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMagicProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMagicProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASMagicProjectile)


#define ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParryTag() { return STRUCT_OFFSET(ASMagicProjectile, ParryTag); } \
	FORCEINLINE static uint32 __PPO__ViolentTag() { return STRUCT_OFFSET(ASMagicProjectile, ViolentTag); } \
	FORCEINLINE static uint32 __PPO__BurningEffectClass() { return STRUCT_OFFSET(ASMagicProjectile, BurningEffectClass); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_16_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASMagicProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SMagicProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
