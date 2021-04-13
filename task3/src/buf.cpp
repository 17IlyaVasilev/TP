#include <buf.h>


void Buf::setter(const string& temp_str) {
    str = temp_str;
}

string Buf::getter() const {
    return str;
}
