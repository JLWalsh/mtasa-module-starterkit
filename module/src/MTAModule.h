#ifndef MTA_MODULE_MTAMODULE_H
#define MTA_MODULE_MTAMODULE_H


extern "C" {
    #include <lua.h>
};

#include <memory>
#include "MTAModuleContext.h"

class MTAModule {
public:
    static int helloWorld(lua_State* vm);

    static void shutdown();
private:
    static MTAModuleContext* moduleContext;

    static MTAModuleContext* getContext();
};


#endif
