#pragma once
#include "ColdDrink.h"
class Pepsi :
    public ColdDrink
{
public:
    Pepsi();
    virtual ~Pepsi();
    string  Name() override;
    float Price() override;
};

