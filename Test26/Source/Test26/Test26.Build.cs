// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test26 : ModuleRules
{
	public Test26(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
