#include "stdafx.h"
#include "Burger.h"
#include "Wrapper.h"

Burger::Burger()
{

}
 
Burger::~Burger()
{
}

IPacking* Burger::Packing()
{
    return new Wrapper();
}
 
