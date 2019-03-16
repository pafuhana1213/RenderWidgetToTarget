// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "RenderWidgetToTargetPluginBPLibrary.h"
#include "RenderWidgetToTargetPlugin.h"

DEFINE_LOG_CATEGORY_STATIC(RenderWidgetToTargetPlugin, Warning, All);

URenderWidgetToTargetPluginBPLibrary::URenderWidgetToTargetPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool URenderWidgetToTargetPluginBPLibrary::DrawWidgetToTarget(UTextureRenderTarget2D * Target, UUserWidget * WidgetToRender, FVector2D DrawSize, bool UseGamma, TextureFilter Filter, float DeltaTime)
{
	if (!WidgetToRender)
	{
		UE_LOG(RenderWidgetToTargetPlugin, Warning, TEXT("DrawWidgetToTarget Fail : WidgetToRender is empty!"));
		return false;
	}
	if (DrawSize.X < 0 || DrawSize.Y < 0)
	{
		UE_LOG(RenderWidgetToTargetPlugin, Warning, TEXT("DrawWidgetToTarget Fail : DrawSize is 0 or less!"));
		return false;
	}
	if (!Target)
	{
		UE_LOG(RenderWidgetToTargetPlugin, Warning, TEXT("DrawWidgetToTarget Fail : Target is empty!"));
		return false;
	}

	FWidgetRenderer* WidgetRenderer = new FWidgetRenderer(true, false);
	check(WidgetRenderer);

	TSharedRef<SWidget> ref = WidgetToRender->TakeWidget();
	WidgetRenderer->DrawWidget(Target, ref, DrawSize, DeltaTime);
	FlushRenderingCommands();

	BeginCleanup(WidgetRenderer);

	return true;
}

