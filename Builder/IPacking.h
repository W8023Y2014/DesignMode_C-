#pragma once

#include <string>
using namespace std;

class IPacking
{
public:
    IPacking();
    virtual ~IPacking();
    virtual string Pack() = 0;
};

