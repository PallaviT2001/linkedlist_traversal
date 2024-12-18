cmake_minimum_required(VERSION 3.16)

project(linkedlist_traversal LANGUAGES C)

add_executable(linkedlist_traversal main.c)

include(GNUInstallDirs)
install(TARGETS linkedlist_traversal
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
