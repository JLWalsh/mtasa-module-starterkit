
add_library(MTAModuleSDK include/ILuaModuleManager.h)

set_target_properties(MTAModuleSDK PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(MTAModuleSDK PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)

