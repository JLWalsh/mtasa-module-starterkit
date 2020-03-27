# MTA:SA Module Boilerplate
This boilerplate allows you to use CMake to handle the compilation of your MTA:SA module, and already includes
the necessary files such as `ILuaModuleManager.h`.

## Requirements
- CMake
- Lua 5.1 **development libraries**

## Setup

Define the CMake environment variable `LUA_DIR`, which should point to the directory Lua is installed in.
In CLion, you may define this variable in `File > Settings > Build, Execution, Deployment > CMake`.

Note that in some cases, CMake might be able to automatically locate Lua for you, so the step above may be unnecessary.
