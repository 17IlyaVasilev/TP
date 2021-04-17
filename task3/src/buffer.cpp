#include <buffer.h>


void CBuffer::setter(const std::string& temp_str) {
    str = temp_str;
}

std::string CBuffer::getter() const {
    return str;
}
