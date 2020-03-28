#include <sstream>
#include "MTAModule.h"

MTAModuleContext* MTAModule::moduleContext = nullptr;

int MTAModule::helloWorld(lua_State *vm) {
    if (!vm) {
        return 1;
    }

    // The context class contains the state of the module, which can be used here
    // The getContext() function instantiates the class if needed
    MTAModuleContext* context = getContext();

    std::stringstream message;
    message << "Hello world! This function has been called " << ++context->numberOfCalls << " time (s)";

    // You may use any function declared by lua
    lua_pushstring(vm, message.str().c_str());

    return 1;
}

MTAModuleContext *MTAModule::getContext() {
    if (!moduleContext) {
        moduleContext = new MTAModuleContext();
    }

    return moduleContext;
}

void MTAModule::shutdown() {
    delete moduleContext;
}
