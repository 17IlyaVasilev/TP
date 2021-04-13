
add_library(buf SHARED buf.cpp)

install(TARGETS buf LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
