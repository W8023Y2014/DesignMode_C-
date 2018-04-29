#pragma once
#include "IPacking.h"
class Bottle :
    public IPacking
{
public:
    Bottle();
    virtual ~Bottle();
    string Pack() override;
};

