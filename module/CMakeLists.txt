add_library(Module SHARED ml_base.cpp ml_base.h)

target_link_libraries(Module MTAModuleSDK Lua ${LUA_LIBRARIES})