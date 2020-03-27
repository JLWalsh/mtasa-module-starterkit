/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        publicsdk/include/ILuaModuleManager.h
 *  PURPOSE:     Lua dynamic module interface
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#pragma once

#define MAX_INFO_LENGTH 128

extern "C"
{
    #include <lua.h>
    #include <lualib.h>
    #include <lauxlib.h>
}
#include <string>

#ifndef __CChecksum_H
class CChecksum
{
public:
    unsigned long ulCRC;
    unsigned char mD5[16];
};
#endif

/* Interface for modules until DP2.3 */
class ILuaModuleManager
{
public:
    virtual void ErrorPrintf(const char* szFormat, ...) = 0;
    virtual void DebugPrintf(lua_State* luaVM, const char* szFormat, ...) = 0;
    virtual void Printf(const char* szFormat, ...) = 0;

    virtual bool RegisterFunction(lua_State* luaVM, const char* szFunctionName, lua_CFunction Func) = 0;
    virtual bool GetResourceName(
        lua_State* luaVM, std::string& strName) = 0;            // This function might not work if module and MTA were compiled with different compiler versions
    virtual CChecksum GetResourceMetaChecksum(lua_State* luaVM) = 0;
    virtual CChecksum GetResourceFileChecksum(lua_State* luaVM, const char* szFile) = 0;
};
