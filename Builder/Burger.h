#pragma once
#include "IItem.h"
class Burger :
    public IItem
{
public:
    Burger();
    virtual ~Burger(); 
    IPacking* Packing() override;
};

