// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ACTIONROGUELIKE_SInteractionComponent_generated_h
#error "SInteractionComponent.generated.h already included, missing '#pragma once' in SInteractionComponent.h"
#endif
#define ACTIONROGUELIKE_SInteractionComponent_generated_h

#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_11_DELEGATE \
struct _Script_ActionRoguelike_eventOnInteractionChanged_Parms \
{ \
	AActor* FocusActor; \
}; \
static inline void FOnInteractionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionChanged, AActor* FocusActor) \
{ \
	_Script_ActionRoguelike_eventOnInteractionChanged_Parms Parms; \
	Parms.FocusActor=FocusActor; \
	OnInteractionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_RPC_WRAPPERS
#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSInteractionComponent(); \
	friend struct Z_Construct_UClass_USInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(USInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USInteractionComponent)


#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSInteractionComponent(); \
	friend struct Z_Construct_UClass_USInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(USInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(USInteractionComponent)


#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USInteractionComponent(USInteractionComponent&&); \
	NO_API USInteractionComponent(const USInteractionComponent&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USInteractionComponent(USInteractionComponent&&); \
	NO_API USInteractionComponent(const USInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USInteractionComponent)


#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnInteractionChanged() { return STRUCT_OFFSET(USInteractionComponent, OnInteractionChanged); } \
	FORCEINLINE static uint32 __PPO__TraceDistance() { return STRUCT_OFFSET(USInteractionComponent, TraceDistance); } \
	FORCEINLINE static uint32 __PPO__TraceRadius() { return STRUCT_OFFSET(USInteractionComponent, TraceRadius); } \
	FORCEINLINE static uint32 __PPO__CollisionChannel() { return STRUCT_OFFSET(USInteractionComponent, CollisionChannel); } \
	FORCEINLINE static uint32 __PPO__FocusActor() { return STRUCT_OFFSET(USInteractionComponent, FocusActor); } \
	FORCEINLINE static uint32 __PPO__DefaultWidgetClass() { return STRUCT_OFFSET(USInteractionComponent, DefaultWidgetClass); } \
	FORCEINLINE static uint32 __PPO__DefaultWidgetInstance() { return STRUCT_OFFSET(USInteractionComponent, DefaultWidgetInstance); }


#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_13_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class USInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_Public_SInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
