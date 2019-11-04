// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LASTTIME_LastTimeCharacter_generated_h
#error "LastTimeCharacter.generated.h already included, missing '#pragma once' in LastTimeCharacter.h"
#endif
#define LASTTIME_LastTimeCharacter_generated_h

#define LastTime_Source_LastTime_LastTimeCharacter_h_12_RPC_WRAPPERS
#define LastTime_Source_LastTime_LastTimeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define LastTime_Source_LastTime_LastTimeCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALastTimeCharacter(); \
	friend struct Z_Construct_UClass_ALastTimeCharacter_Statics; \
public: \
	DECLARE_CLASS(ALastTimeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LastTime"), NO_API) \
	DECLARE_SERIALIZER(ALastTimeCharacter)


#define LastTime_Source_LastTime_LastTimeCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALastTimeCharacter(); \
	friend struct Z_Construct_UClass_ALastTimeCharacter_Statics; \
public: \
	DECLARE_CLASS(ALastTimeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LastTime"), NO_API) \
	DECLARE_SERIALIZER(ALastTimeCharacter)


#define LastTime_Source_LastTime_LastTimeCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALastTimeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALastTimeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALastTimeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALastTimeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALastTimeCharacter(ALastTimeCharacter&&); \
	NO_API ALastTimeCharacter(const ALastTimeCharacter&); \
public:


#define LastTime_Source_LastTime_LastTimeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALastTimeCharacter(ALastTimeCharacter&&); \
	NO_API ALastTimeCharacter(const ALastTimeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALastTimeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALastTimeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALastTimeCharacter)


#define LastTime_Source_LastTime_LastTimeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ALastTimeCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ALastTimeCharacter, FollowCamera); }


#define LastTime_Source_LastTime_LastTimeCharacter_h_9_PROLOG
#define LastTime_Source_LastTime_LastTimeCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastTime_Source_LastTime_LastTimeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	LastTime_Source_LastTime_LastTimeCharacter_h_12_RPC_WRAPPERS \
	LastTime_Source_LastTime_LastTimeCharacter_h_12_INCLASS \
	LastTime_Source_LastTime_LastTimeCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LastTime_Source_LastTime_LastTimeCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastTime_Source_LastTime_LastTimeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	LastTime_Source_LastTime_LastTimeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LastTime_Source_LastTime_LastTimeCharacter_h_12_INCLASS_NO_PURE_DECLS \
	LastTime_Source_LastTime_LastTimeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LASTTIME_API UClass* StaticClass<class ALastTimeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LastTime_Source_LastTime_LastTimeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
