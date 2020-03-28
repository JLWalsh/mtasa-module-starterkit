/*********************************************************
 *
 *  Multi Theft Auto: San Andreas
 *
 *  ml_base, External lua add-on module
 *
 *  Copyright © 2003-2018 MTA.  All Rights Reserved.
 *
 *  Grand Theft Auto is © 2002-2018 Rockstar North
 *
 *  THE FOLLOWING SOURCES ARE PART OF THE MULTI THEFT
 *  AUTO SOFTWARE DEVELOPMENT KIT AND ARE RELEASED AS
 *  OPEN SOURCE FILES. THESE FILES MAY BE USED AS LONG
 *  AS THE DEVELOPER AGREES TO THE LICENSE THAT IS
 *  PROVIDED WITH THIS PACKAGE.
 *
 *********************************************************/

#include <mta/ILuaModuleManager.h>
#include <cstring>
#include "init.h"
#include "MTAModule.h"

ILuaModuleManager10* pModuleManager = nullptr;

MTAEXPORT bool InitModule(ILuaModuleManager10* pManager, char* szModuleName, char* szAuthor, float* fVersion)
{
    pModuleManager = pManager;

    strncpy(szModuleName, MODULE_NAME, MAX_INFO_LENGTH);
    strncpy(szAuthor, MODULE_AUTHOR, MAX_INFO_LENGTH);
    (*fVersion) = MODULE_VERSION;

    return true;
}

MTAEXPORT void RegisterFunctions(lua_State* luaVM)
{
    if (!pModuleManager || !luaVM) {
        return;
    }

    pModuleManager->RegisterFunction(luaVM, "helloWorld", MTAModule::helloWorld);
}

MTAEXPORT bool DoPulse(void)
{
    return true;
}

MTAEXPORT bool ShutdownModule(void)
{
    MTAModule::shutdown();

    return true;
}

MTAEXPORT bool ResourceStopping(lua_State* luaVM)
{
    return true;
}

MTAEXPORT bool ResourceStopped(lua_State* luaVM)
{
    return true;
}
