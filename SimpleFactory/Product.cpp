#include "stdafx.h"
#include "Product.h"
#include "iostream" 

ICar::ICar()
{
    cout << "���� ICar" << endl;
}

ICar::~ICar()
{
    cout << "ɾ�� ICar" << endl;
}

BenCar::BenCar()
{
    cout << "���� BenCar" << endl;
}

BenCar::~BenCar()
{ 
    cout << "ɾ�� BenCar" << endl;
}

string BenCar::Name()
{
    cout << "Name: BenCar" << endl;
    return "Ben Car";
}


BmwCar::BmwCar()
{
    cout << "���� BmwCar" << endl;
}

BmwCar::~BmwCar()
{
    cout << "ɾ�� BmwCar" << endl;
}

inline string BmwCar::Name()
{
    cout << "Name: BmwCar" << endl;
    return "Bmw Car";
}


AudiCar::AudiCar()
{
    cout << "���� AudiCar" << endl;
}

AudiCar::~AudiCar()
{
    cout << "ɾ�� AudiCar" << endl;
}

inline string AudiCar::Name()
{
    cout << "Name: AudiCar" << endl;
    return "Audi Car";
}
