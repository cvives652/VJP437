// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TNID_TNIDCharacter_generated_h
#error "TNIDCharacter.generated.h already included, missing '#pragma once' in TNIDCharacter.h"
#endif
#define TNID_TNIDCharacter_generated_h

#define TNID_Source_TNID_TNIDCharacter_h_12_RPC_WRAPPERS
#define TNID_Source_TNID_TNIDCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TNID_Source_TNID_TNIDCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATNIDCharacter(); \
	friend TNID_API class UClass* Z_Construct_UClass_ATNIDCharacter(); \
public: \
	DECLARE_CLASS(ATNIDCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TNID"), NO_API) \
	DECLARE_SERIALIZER(ATNIDCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TNID_Source_TNID_TNIDCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATNIDCharacter(); \
	friend TNID_API class UClass* Z_Construct_UClass_ATNIDCharacter(); \
public: \
	DECLARE_CLASS(ATNIDCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TNID"), NO_API) \
	DECLARE_SERIALIZER(ATNIDCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TNID_Source_TNID_TNIDCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATNIDCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATNIDCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATNIDCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATNIDCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATNIDCharacter(ATNIDCharacter&&); \
	NO_API ATNIDCharacter(const ATNIDCharacter&); \
public:


#define TNID_Source_TNID_TNIDCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATNIDCharacter(ATNIDCharacter&&); \
	NO_API ATNIDCharacter(const ATNIDCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATNIDCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATNIDCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATNIDCharacter)


#define TNID_Source_TNID_TNIDCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATNIDCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATNIDCharacter, FollowCamera); }


#define TNID_Source_TNID_TNIDCharacter_h_9_PROLOG
#define TNID_Source_TNID_TNIDCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TNID_Source_TNID_TNIDCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TNID_Source_TNID_TNIDCharacter_h_12_RPC_WRAPPERS \
	TNID_Source_TNID_TNIDCharacter_h_12_INCLASS \
	TNID_Source_TNID_TNIDCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TNID_Source_TNID_TNIDCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TNID_Source_TNID_TNIDCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TNID_Source_TNID_TNIDCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TNID_Source_TNID_TNIDCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TNID_Source_TNID_TNIDCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TNID_Source_TNID_TNIDCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
