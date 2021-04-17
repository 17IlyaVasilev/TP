#include <iostream>
#include "main.h"


int main() {
    ClassLib classlib;

    classlib.setter(1);

    std::cout << classlib.getter();
    std::cout << '\n';

    return 0;
}
