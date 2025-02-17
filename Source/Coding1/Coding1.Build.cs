// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Coding1 : ModuleRules
{
	public Coding1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
