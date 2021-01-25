// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Network_Assignment : ModuleRules
{
	public Network_Assignment(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG" });
	}
}
