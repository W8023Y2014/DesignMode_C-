// FactoryMethod.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Product.h"
#include "Factory.h"

using namespace FactoryMethod;

#define  SAFE_DELETE(p) { if (p) { delete(p); (p) = NULL; } }

int main()
{ 
    {
        // 奔驰
        AFactory* pFactory = new BenzFactory();
        ICar* pCar = pFactory->CreateCar();
        pCar->Name();

        SAFE_DELETE(pCar);
        SAFE_DELETE(pFactory);

        // 宝马
        pFactory = new BmwFactory();
        pCar = pFactory->CreateCar();
        pCar->Name();

        SAFE_DELETE(pCar);
        SAFE_DELETE(pFactory);

        // 奥迪
        pFactory = new AudiFactory();
        pCar = pFactory->CreateCar();
        pCar->Name();

        SAFE_DELETE(pCar);
        SAFE_DELETE(pFactory); 
    }
  

    getchar();
    return 0;
}

