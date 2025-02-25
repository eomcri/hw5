// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class hw5 : ModuleRules
{
	public hw5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
