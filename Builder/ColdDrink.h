#pragma once
#include "IItem.h"
class ColdDrink :
    public IItem
{
public:
    ColdDrink();
    virtual ~ColdDrink();
    IPacking* Packing() override;
};

