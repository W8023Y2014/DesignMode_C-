#pragma once

#include <string>
#include "IPacking.h"

using namespace std;

class IItem
{
public:
    IItem();
    virtual ~IItem();
    virtual string  Name() = 0;
    virtual IPacking* Packing() = 0;
    virtual float Price() = 0;
};

