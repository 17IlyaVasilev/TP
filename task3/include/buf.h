#pragma once
#include <iostream>
#include <string>


using namespace std;


class Buf {
 string str;

 public:
    void setter(const string&);
    string getter() const;
};
