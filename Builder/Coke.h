#pragma once
#include "ColdDrink.h"
class Coke :
    public ColdDrink
{
public:
    Coke();
    virtual ~Coke();
    string  Name() override;
    float Price() override;
};

