#include "stdafx.h"
#include "Factory.h"
#include "iostream"


Factory::Factory()
{
    cout << "创建一个工厂" << endl;
}


Factory::~Factory()
{
    cout << "删除一个工厂" << endl;
}

ICar * Factory::CreateCar(CAR_TYPE TYPE)
{
    ICar* pCar = NULL;

    switch (TYPE)
    {
    case Factory::BEN_CAR:
        pCar = new BenCar();
        break;
    case Factory::BMW_CAR:
        pCar = new BmwCar();
        break;
    case Factory::AUDI_CAR:
        pCar = new AudiCar();
        break;
    default:
        break;
    }

    return pCar;
}
