#pragma once

#include <iostream>
#include <string>


using namespace std;


class CBuffer {
 private:
     std::string str;

 public:
     void setter(const std::string&);
     std::string getter() const;
};
