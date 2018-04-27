#include "stdafx.h"
#include "Factory.h" 
 
namespace FactoryMethod
{ 
    BenzFactory::BenzFactory()
    {
    }

    BenzFactory::~BenzFactory()
    {
    }

    ICar* BenzFactory::CreateCar()
    {
        return new BenzCar();
    }

    BmwFactory::BmwFactory()
    {
    }

    BmwFactory::~BmwFactory()
    {
    }

    ICar* BmwFactory::CreateCar()
    {
        return new BmwCar();
    }

    AudiFactory::AudiFactory()
    {
    }

    AudiFactory::~AudiFactory()
    {
    }
    ICar* AudiFactory::CreateCar()
    {
        return new AudiCar();
    }
}