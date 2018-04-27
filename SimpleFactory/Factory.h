#pragma once

#include "Product.h"

class Factory
{
public:
    Factory();
    ~Factory();

    enum CAR_TYPE
    {
        BEN_CAR,
        BMW_CAR,
        AUDI_CAR
    };

    ICar* CreateCar(CAR_TYPE TYPE);
};

