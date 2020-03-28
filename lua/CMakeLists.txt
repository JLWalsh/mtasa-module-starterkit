set (SRC_CORE src/lapi.c src/lcode.c src/ldebug.c src/ldo.c src/ldump.c src/lfunc.c src/lgc.c src/llex.c
        src/lmem.c src/lobject.c src/lopcodes.c src/lparser.c src/lstate.c src/lstring.c src/ltable.c
        src/ltm.c src/lundump.c src/lvm.c src/lzio.c)
set (SRC_LIB src/lauxlib.c src/lbaselib.c src/ldblib.c src/liolib.c
        src/lmathlib.c src/loslib.c src/lstrlib.c src/ltablib.c src/loadlib.c src/linit.c)

set(LUA_DIR "lua-5.1.5/")

list(TRANSFORM SRC_CORE PREPEND ${LUA_DIR})
list(TRANSFORM SRC_LIB PREPEND ${LUA_DIR})

add_library(liblua ${SRC_LIB} ${SRC_CORE})

target_include_directories(liblua PUBLIC "${LUA_DIR}/src")

