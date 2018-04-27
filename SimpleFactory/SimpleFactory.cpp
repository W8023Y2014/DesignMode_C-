// SimpleFactory.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Factory.h"
#include "Product.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif // !SAFE_DELETE


int main()
{
    {
        //  ����
        Factory* pFactory = new Factory();

        //  ����
        ICar* pCar = pFactory->CreateCar(Factory::BEN_CAR);
        pCar->Name();

        SAFE_DELETE(pCar);

        //  ����
        pCar = pFactory->CreateCar(Factory::BMW_CAR);
        pCar->Name();

        SAFE_DELETE(pCar);

        //  �µ�
        pCar = pFactory->CreateCar(Factory::AUDI_CAR);
        pCar->Name();

        SAFE_DELETE(pCar);
    }
 

    getchar();
    return 0;
}

