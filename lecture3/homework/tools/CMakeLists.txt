cmake_minimum_required(VERSION 3.16)

add_library(tools OBJECT
    img_tools.cpp
    logger.cpp
)

target_compile_definitions(tools PRIVATE SPDLOG_FMT_EXTERNAL)
target_link_libraries(tools PRIVATE fmt::fmt)