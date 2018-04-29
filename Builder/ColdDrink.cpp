#include "stdafx.h"
#include "ColdDrink.h"
#include "Bottle.h"

ColdDrink::ColdDrink()
{
}


ColdDrink::~ColdDrink()
{
}

IPacking * ColdDrink::Packing()
{
    return new Bottle;
}
