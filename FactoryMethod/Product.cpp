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
        printf("���� ICar\n");
    }

    ICar::~ICar()
    {
        printf("ɾ�� ICar\n");
    }

    void ICar::Name()
    {
        printf("ICar Name\n");
    }

    BenzCar::BenzCar()
    {
        printf("���� BenzCar\n");
    }

    BenzCar::~BenzCar()
    {
        printf("ɾ�� BenzCar\n");
    }

    void BenzCar::Name()
    {
        printf("BenzCar Name\n");
    }

    BmwCar::BmwCar()
    {
        printf("���� BmwCar\n");
    }

    BmwCar::~BmwCar()
    {
        printf("ɾ�� BmwCar\n");
    }

    void BmwCar::Name()
    {
        printf("BmwCar Name\n");
    }

    AudiCar::AudiCar()
    {
        printf("���� AudiCar\n");
    }

    AudiCar::~AudiCar()
    {
        printf("ɾ�� AudiCar\n");
    }

    void AudiCar::Name()
    {
        printf("AudiCar Name\n");
    }
}