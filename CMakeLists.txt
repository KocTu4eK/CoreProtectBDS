cmake_minimum_required(VERSION 3.21)
project(CoreProtect)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release)

include_directories(
    ${CMAKE_SOURCE_DIR}/third-party/include
    ${CMAKE_SOURCE_DIR}/include
)

link_directories(${CMAKE_SOURCE_DIR}/third-party/lib)

add_definitions(
    -D "NDEBUG"
    -D "NOMINMAX"
    -D "TEMPLATE_EXPORTS"
    -D "UNICODE"
    -D "WIN32_LEAN_AND_MEAN"
    -D "_AMD64_"
    -D "_CRT_SECURE_NO_WARNINGS"
    -D "_UNICODE"
    -D "_USRDLL"
    -D "_WINDLL"
    -D "_WINDOWS"
)

add_compile_options(
    /diagnostics:column
    /EHsc
    /FC
    /GL
    /MD
    /nologo
    /permissive-
    /sdl
    /Zc:inline
    /Zi
)

add_link_options(
    /DEBUG
    /DELAYLOAD:"bedrock_server.dll"
    /DLL
    /IGNORE:4199
    /INCREMENTAL:NO
    /LTCG:INCREMENTAL
    /MANIFESTUAC:NO
    /MACHINE:X64
    /NOLOGO
    /OPT:ICF
    /OPT:REF
    /SUBSYSTEM:CONSOLE
)

add_library(CoreProtect SHARED
    ${PROJECT_SOURCE_DIR}/include/language/language.h
    ${PROJECT_SOURCE_DIR}/include/language/phrase.h
    ${PROJECT_SOURCE_DIR}/include/language/selector.h
    ${PROJECT_SOURCE_DIR}/include/utility/chat_message.h
    ${PROJECT_SOURCE_DIR}/include/utility/color.h
    ${PROJECT_SOURCE_DIR}/include/utility/util.h
    ${PROJECT_SOURCE_DIR}/include/pch.h

    ${PROJECT_SOURCE_DIR}/source/language/language.cpp
    ${PROJECT_SOURCE_DIR}/source/language/phrase.cpp
    ${PROJECT_SOURCE_DIR}/source/language/selector.cpp
    ${PROJECT_SOURCE_DIR}/source/utility/chat_message.cpp
    ${PROJECT_SOURCE_DIR}/source/utility/color.cpp
    ${PROJECT_SOURCE_DIR}/source/utility/util.cpp
    ${PROJECT_SOURCE_DIR}/source/dllmain.cpp
)

target_link_libraries(CoreProtect 
    "${CMAKE_SOURCE_DIR}/third-party/lib/LiteLoader.lib"
    "${CMAKE_SOURCE_DIR}/third-party/lib/bedrock_server_api.lib"
    "${CMAKE_SOURCE_DIR}/third-party/lib/bedrock_server_var.lib"
    "${CMAKE_SOURCE_DIR}/third-party/lib/SymDBHelper.lib"
    "${CMAKE_SOURCE_DIR}/third-party/lib/tbb12.lib"
)

target_precompile_headers(CoreProtect PRIVATE ${PROJECT_SOURCE_DIR}/include/pch.h)
