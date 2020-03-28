# MTA:SA Module Boilerplate
This boilerplate allows you to quickly get started writing your own MTA:SA module, using modern
tools such as [CMake](https://cmake.org). 

## Requirements
- CMake
- Lua 5.1.5 **development libraries**

## Setup

Download [Lua 5.1.5 **source files**](https://www.lua.org/ftp/lua-5.1.5.tar.gz) into the `lua/` directory of this project. 
   
   Once installed, the folder structure should look like this:
   - lua
        - lua-5.1.5
        - CMakeLists.txt *(this file is already included)*

And you're done!

## Compiling

Since CMake can generate builds for many types of build systems, no specific instructions can be given.

For more information on how to use CMake, [please refer to this guide](https://cmake.org/runningcmake).

#### Considerations
Verify that your compiler is compiling to the desired architecture (32 bit or 64 bit).
The 32 bit MTA:SA server will only allow 32 bit modules, and the same can be said for the 64 bit version.

## Project Structure
The project is divided into two subprojects, the `sdk` and the `module`. 

### Module
The module subproject is where your module will be built.

The `MTAModule` class is where all the functions to be registered are declared.

The `MTAModuleContext` class maintains the state of the module. This class is held by the
`MTAModule` class, so that any function you wish to expose to Lua can also have access
to the module's state.

### SDK
The sdk subproject includes all the headers required to create an MTA module that were
provided by the MTA team themselves. 
