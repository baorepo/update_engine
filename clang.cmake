set(CLANG_ROOT "/home/debian/clang+llvm-7.0.0-armv7a-linux-gnueabihf")
set(COMPILER clang)

set(triple arm-linux-gnueabihf)

set(CMAKE_C_COMPILER          ${CLANG_ROOT}/bin/clang)
set(CMAKE_C_COMPILER_TARGET   ${triple})
set(CMAKE_ASM_COMPILER_TARGET ${triple})
set(CMAKE_CXX_COMPILER        ${CLANG_ROOT}/bin/clang++)
set(CMAKE_CXX_COMPILER_TARGET ${triple})
set(CMAKE_AR                  "${CLANG_ROOT}/bin/llvm-ar"  CACHE INTERNAL " " FORCE)
set(CMAKE_LINKER              "${CLANG_ROOT}/bin/llvm-link" CACHE INTERNAL " " FORCE)
SET(CMAKE_NM                  "${CLANG_ROOT}/bin/llvm-nm"       CACHE INTERNAL " " FORCE)
SET(CMAKE_OBJDUMP             "${CLANG_ROOT}/bin/llvm-objdump" CACHE INTERNAL " " FORCE)
SET(CMAKE_RANLIB              "${CLANG_ROOT}/bin/llvm-ranlib" CACHE INTERNAL " " FORCE)
set(CMAKE_OBJCOPY             "${CLANG_ROOT}/bin/llvm-objcopy" CACHE INTERNAL " " FORCE)
set(CMAKE_READELF             readelf CACHE INTERNAL " " FORCE)

