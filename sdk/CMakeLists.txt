set(MTA_SDK_INCLUDES include/mta/ILuaModuleManager.h include/mta/Common.h)

add_library(mtasdk ${MTA_SDK_INCLUDES})

set_target_properties(mtasdk PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(mtasdk
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        PRIVATE ${LUA_INCLUDE_DIR})

target_link_libraries(mtasdk liblua)

