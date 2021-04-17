#include "lib.h"


void ClassLib::setter(const int& value) {
    x_ = value;    
}

int ClassLib::getter() const {
    return x_;
}
