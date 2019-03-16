// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class RenderWidgetToTargetEditorTarget : TargetRules
{
    public RenderWidgetToTargetEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        ExtraModuleNames.Add("RenderWidgetToTarget");
    }
}
