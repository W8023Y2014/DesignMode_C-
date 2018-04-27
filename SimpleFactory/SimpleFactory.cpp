// SimpleFactory.cpp : 定义控制台应用程序的入口点。
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
        //  工厂
        Factory* pFactory = new Factory();

        //  奔驰
        ICar* pCar = pFactory->CreateCar(Factory::BEN_CAR);
        pCar->Name();

        SAFE_DELETE(pCar);

        //  宝马
        pCar = pFactory->CreateCar(Factory::BMW_CAR);
        pCar->Name();

        SAFE_DELETE(pCar);

        //  奥迪
        pCar = pFactory->CreateCar(Factory::AUDI_CAR);
        pCar->Name();

        SAFE_DELETE(pCar);
    }
 

    getchar();
    return 0;
}

