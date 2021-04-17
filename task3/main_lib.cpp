#include <iostream>

#include <buffer.h>


using namespace std;


int main() {
    CBuffer temp_buffer;

    temp_buffer.setter("Variable");

    cout << temp_buffer.getter();
    cout << '\n';

    return 0;
}
