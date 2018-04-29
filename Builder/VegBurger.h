#pragma once
#include "Burger.h"
class VegBurger :
    public Burger
{
public:
    VegBurger();
    virtual ~VegBurger();
    string  Name() override; 
    float Price() override;
};

