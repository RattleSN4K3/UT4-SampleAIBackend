Back-end for SampleAI
---
The server-sided C++ back-end plugin for the test game mode [SampleAI](https://github.com/RattleSN4K3/UT4-SampleAI) for a specialized bot logic.

# Compiling

This plugin is created with the code-base of the latest release of the _Unreal Tournament_ source code. In order to fully support using this plugin with the [Launcher versions of Unreal Tournament](https://www.unrealtournament.com/download), a specific commit/version/tag needs to be checked out. The current build is [2848065](https://wiki.unrealengine.com/Version_Notes_2016_2_01) compiled from the commit [983f5ed](https://github.com/EpicGames/UnrealTournament/tree/983f5ed).

Before the code can be compiled, the engine must be aware of the installed source files and the source files must be placed into the correct folder.

## Setup

For easy referencing, `%basedir%` would be the root folder of your local [GitHub repository of Unreal Tournament](https://github.com/EpicGames/UnrealTournament).

- Download the [latest source files](/../../archive/master.zip)
- Unpack the file into the *Plugins* folder located at:  
  `%basedir%\UnrealTournament\Plugins\SampleAIBackend`
- Generate the project files with the specific batch file:  
  - Windows: `%basedir%\GenerateProjectFiles.bat`
  - Linux: `%basedir%\GenerateProjectFiles.command`
  - Mac: `%basedir%\GenerateProjectFiles.sh`

## Make

The source files should be compiled by the Unreal Build System. Each specific platform and version has to be compiled with the specific command line arguments.

Solution configuration list for each game version:
- Editor: Development Editor
- Client: Test
- Server: Test Server

Compile the solution with either configuration for the desired version and target platform.

# License
Available under [the MIT license](http://opensource.org/licenses/mit-license.php).

# Author
RattleSN4K3
