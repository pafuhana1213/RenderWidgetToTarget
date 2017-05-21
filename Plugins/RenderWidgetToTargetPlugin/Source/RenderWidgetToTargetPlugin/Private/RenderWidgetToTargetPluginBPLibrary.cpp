// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "RenderWidgetToTargetPlugin.h"
#include "RenderWidgetToTargetPluginBPLibrary.h"

URenderWidgetToTargetPluginBPLibrary::URenderWidgetToTargetPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void URenderWidgetToTargetPluginBPLibrary::DrawWidgetToTarget(UTextureRenderTarget2D * Target, UUserWidget * WidgetToRender, FVector2D DrawSize, bool UseGamma, TextureFilter Filter, float DeltaTime)
{
	if (!WidgetToRender)
	{
		return;
	}
	if (DrawSize == FVector2D(0, 0))
	{
		return;
	}
	if (!Target)
	{
		return;
	}

	FWidgetRenderer * r = new FWidgetRenderer(UseGamma);
	TSharedRef<SWidget> ref = WidgetToRender->TakeWidget();
	r->DrawWidget(Target, ref, DrawSize, DeltaTime);

	delete r;
}

