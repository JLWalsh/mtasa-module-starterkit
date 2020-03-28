set(MODULE_SOURCES
        ml_base.cpp
        MTAModule.cpp
        # Add new .cpp files here, .h files are automatically included by target_include_directories
)

list(TRANSFORM MODULE_SOURCES PREPEND "src/")

add_library(module SHARED ${MODULE_SOURCES})

target_include_directories(module PUBLIC src)

target_link_libraries(module liblua mtasdk)