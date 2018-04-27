#include "stdafx.h"
#include "Product.h"

namespace FactoryMethod
{
    Product::Product()
    {
    }

    Product::~Product()
    {
    }

    ICar::ICar()
    {
        printf("创建 ICar\n");
    }

    ICar::~ICar()
    {
        printf("删除 ICar\n");
    }

    void ICar::Name()
    {
        printf("ICar Name\n");
    }

    BenzCar::BenzCar()
    {
        printf("创建 BenzCar\n");
    }

    BenzCar::~BenzCar()
    {
        printf("删除 BenzCar\n");
    }

    void BenzCar::Name()
    {
        printf("BenzCar Name\n");
    }

    BmwCar::BmwCar()
    {
        printf("创建 BmwCar\n");
    }

    BmwCar::~BmwCar()
    {
        printf("删除 BmwCar\n");
    }

    void BmwCar::Name()
    {
        printf("BmwCar Name\n");
    }

    AudiCar::AudiCar()
    {
        printf("创建 AudiCar\n");
    }

    AudiCar::~AudiCar()
    {
        printf("删除 AudiCar\n");
    }

    void AudiCar::Name()
    {
        printf("AudiCar Name\n");
    }
}