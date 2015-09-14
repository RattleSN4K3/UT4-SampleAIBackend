namespace UnrealBuildTool.Rules
{
	public class SampleAIBackend : ModuleRules
	{
		public SampleAIBackend(TargetInfo Target)
		{
			PrivateIncludePaths.Add("Private");

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
					"UnrealTournament",
					"InputCore",
					"SlateCore",
					"AIModule",
				}
			);

			if (UEBuildConfiguration.bBuildEditor == true)
			{
				PrivateDependencyModuleNames.Add("UnrealEd");
			}
		}
	}
}