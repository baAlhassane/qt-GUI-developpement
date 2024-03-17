cmake_minimum_required(VERSION 3.5)

project(3-lineEdithExample LANGUAGES C)

add_executable(3-lineEdithExample main.c)

include(GNUInstallDirs)
install(TARGETS 3-lineEdithExample
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
