#include <iostream>
#include <buf.h>


using namespace std;


int main() {
    Buf buf;

    buf.setter("Variable");

    cout << buf.getter();
    cout << '\n';

    return 0;
}
