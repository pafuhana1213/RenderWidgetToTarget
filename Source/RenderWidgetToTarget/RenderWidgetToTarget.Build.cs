// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class RenderWidgetToTarget : ModuleRules
{
    public RenderWidgetToTarget(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
    }
}
