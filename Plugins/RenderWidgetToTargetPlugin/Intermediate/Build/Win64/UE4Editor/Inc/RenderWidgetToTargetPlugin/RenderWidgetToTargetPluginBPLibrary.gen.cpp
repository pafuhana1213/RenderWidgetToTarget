// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderWidgetToTargetPlugin/Public/RenderWidgetToTargetPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderWidgetToTargetPluginBPLibrary() {}
// Cross Module References
	RENDERWIDGETTOTARGETPLUGIN_API UClass* Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_NoRegister();
	RENDERWIDGETTOTARGETPLUGIN_API UClass* Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RenderWidgetToTargetPlugin();
	RENDERWIDGETTOTARGETPLUGIN_API UFunction* Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	void URenderWidgetToTargetPluginBPLibrary::StaticRegisterNativesURenderWidgetToTargetPluginBPLibrary()
	{
		UClass* Class = URenderWidgetToTargetPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawWidgetToTarget", &URenderWidgetToTargetPluginBPLibrary::execDrawWidgetToTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics
	{
		struct RenderWidgetToTargetPluginBPLibrary_eventDrawWidgetToTarget_Parms
		{
			UTextureRenderTarget2D* Target;
			UUserWidget* WidgetToRender;
			FVector2D DrawSize;
			bool UseGamma;
			TEnumAsByte<TextureFilter> Filter;
			float DeltaTime;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Filter;
		static void NewProp_UseGamma_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseGamma;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetToRender_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetToRender;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderWidgetToTargetPluginBPLibrary_eventDrawWidgetToTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RenderWidgetToTargetPluginBPLibrary_eventDrawWidgetToTarget_Parms), &Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RenderWidgetToTargetPluginBPLibrary_eventDrawWidgetToTarget_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_Filter = { UE4CodeGen_Private::EPropertyClass::Byte, "Filter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RenderWidgetToTargetPluginBPLibrary_eventDrawWidgetToTarget_Parms, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_UseGamma_SetBit(void* Obj)
	{
		((RenderWidgetToTargetPluginBPLibrary_eventDrawWidgetToTarget_Parms*)Obj)->UseGamma = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_UseGamma = { UE4CodeGen_Private::EPropertyClass::Bool, "UseGamma", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RenderWidgetToTargetPluginBPLibrary_eventDrawWidgetToTarget_Parms), &Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_UseGamma_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_DrawSize = { UE4CodeGen_Private::EPropertyClass::Struct, "DrawSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RenderWidgetToTargetPluginBPLibrary_eventDrawWidgetToTarget_Parms, DrawSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_WidgetToRender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_WidgetToRender = { UE4CodeGen_Private::EPropertyClass::Object, "WidgetToRender", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(RenderWidgetToTargetPluginBPLibrary_eventDrawWidgetToTarget_Parms, WidgetToRender), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_WidgetToRender_MetaData, ARRAY_COUNT(Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_WidgetToRender_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RenderWidgetToTargetPluginBPLibrary_eventDrawWidgetToTarget_Parms, Target), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_UseGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_DrawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_WidgetToRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "RenderWidgetToTargetPlugin" },
		{ "ModuleRelativePath", "Public/RenderWidgetToTargetPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary, "DrawWidgetToTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(RenderWidgetToTargetPluginBPLibrary_eventDrawWidgetToTarget_Parms), Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_NoRegister()
	{
		return URenderWidgetToTargetPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderWidgetToTargetPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URenderWidgetToTargetPluginBPLibrary_DrawWidgetToTarget, "DrawWidgetToTarget" }, // 600160962
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RenderWidgetToTargetPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/RenderWidgetToTargetPluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderWidgetToTargetPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_Statics::ClassParams = {
		&URenderWidgetToTargetPluginBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URenderWidgetToTargetPluginBPLibrary, 1994991052);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URenderWidgetToTargetPluginBPLibrary(Z_Construct_UClass_URenderWidgetToTargetPluginBPLibrary, &URenderWidgetToTargetPluginBPLibrary::StaticClass, TEXT("/Script/RenderWidgetToTargetPlugin"), TEXT("URenderWidgetToTargetPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderWidgetToTargetPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
