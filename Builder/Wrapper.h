#pragma once
#include "IPacking.h"
class Wrapper :
    public IPacking
{
public:
    Wrapper();
    virtual ~Wrapper();
    string Pack() override;
};

