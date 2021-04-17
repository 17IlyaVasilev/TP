
add_library(buffer SHARED buf.cpp)

install(TARGETS buffer LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
