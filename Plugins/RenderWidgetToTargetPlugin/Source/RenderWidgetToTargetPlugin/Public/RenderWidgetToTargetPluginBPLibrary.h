// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine.h"

#include "UMG.h"
#include "SlateBasics.h"
#include "SlateCore.h"
#include "Widgets/SWidget.h"
#include "Slate/WidgetRenderer.h"

#include "RenderWidgetToTargetPluginBPLibrary.generated.h"

UCLASS()
class URenderWidgetToTargetPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(Category = "RenderWidgetToTargetPlugin", BlueprintCallable)
		static bool DrawWidgetToTarget(UTextureRenderTarget2D * Target, UUserWidget * WidgetToRender, FVector2D DrawSize, bool UseGamma, TextureFilter Filter, float DeltaTime);
};
