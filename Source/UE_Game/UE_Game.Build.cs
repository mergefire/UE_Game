// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_Game : ModuleRules
{
	public UE_Game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
