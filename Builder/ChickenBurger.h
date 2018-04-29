#pragma once
#include "Burger.h"
class ChickenBurger :
    public Burger
{
public:
    ChickenBurger();
    virtual ~ChickenBurger();
    string  Name() override;
    float Price() override;
};

