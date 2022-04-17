// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_PlayerStartDemo : ModuleRules
{
	public UE5_PlayerStartDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
