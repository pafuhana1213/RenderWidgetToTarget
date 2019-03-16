// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
class UUserWidget;
struct FVector2D;
#ifdef RENDERWIDGETTOTARGETPLUGIN_RenderWidgetToTargetPluginBPLibrary_generated_h
#error "RenderWidgetToTargetPluginBPLibrary.generated.h already included, missing '#pragma once' in RenderWidgetToTargetPluginBPLibrary.h"
#endif
#define RENDERWIDGETTOTARGETPLUGIN_RenderWidgetToTargetPluginBPLibrary_generated_h

#define RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawWidgetToTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Target); \
		P_GET_OBJECT(UUserWidget,Z_Param_WidgetToRender); \
		P_GET_STRUCT(FVector2D,Z_Param_DrawSize); \
		P_GET_UBOOL(Z_Param_UseGamma); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Filter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URenderWidgetToTargetPluginBPLibrary::DrawWidgetToTarget(Z_Param_Target,Z_Param_WidgetToRender,Z_Param_DrawSize,Z_Param_UseGamma,TextureFilter(Z_Param_Filter),Z_Param_DeltaTime); \
		P_NATIVE_END; \
	}


#define RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawWidgetToTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Target); \
		P_GET_OBJECT(UUserWidget,Z_Param_WidgetToRender); \
		P_GET_STRUCT(FVector2D,Z_Param_DrawSize); \
		P_GET_UBOOL(Z_Param_UseGamma); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Filter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URenderWidgetToTargetPluginBPLibrary::DrawWidgetToTarget(Z_Param_Target,Z_Param_WidgetToRender,Z_Param_DrawSize,Z_Param_UseGamma,TextureFilter(Z_Param_Filter),Z_Param_DeltaTime); \
		P_NATIVE_END; \
	}


#define RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderWidgetToTargetPluginBPLibrary(); \
	friend struct Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URenderWidgetToTargetPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderWidgetToTargetPlugin"), NO_API) \
	DECLARE_SERIALIZER(URenderWidgetToTargetPluginBPLibrary)


#define RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURenderWidgetToTargetPluginBPLibrary(); \
	friend struct Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URenderWidgetToTargetPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderWidgetToTargetPlugin"), NO_API) \
	DECLARE_SERIALIZER(URenderWidgetToTargetPluginBPLibrary)


#define RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderWidgetToTargetPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderWidgetToTargetPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderWidgetToTargetPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderWidgetToTargetPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderWidgetToTargetPluginBPLibrary(URenderWidgetToTargetPluginBPLibrary&&); \
	NO_API URenderWidgetToTargetPluginBPLibrary(const URenderWidgetToTargetPluginBPLibrary&); \
public:


#define RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderWidgetToTargetPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderWidgetToTargetPluginBPLibrary(URenderWidgetToTargetPluginBPLibrary&&); \
	NO_API URenderWidgetToTargetPluginBPLibrary(const URenderWidgetToTargetPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderWidgetToTargetPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderWidgetToTargetPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderWidgetToTargetPluginBPLibrary)


#define RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_15_PROLOG
#define RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_RPC_WRAPPERS \
	RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_INCLASS \
	RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
	RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RenderWidgetToTargetPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RenderWidgetToTarget_Plugins_RenderWidgetToTargetPlugin_Source_RenderWidgetToTargetPlugin_Public_RenderWidgetToTargetPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
