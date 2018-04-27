// FactoryMethod.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Product.h"
#include "Factory.h"

using namespace FactoryMethod;

#define  SAFE_DELETE(p) { if (p) { delete(p); (p) = NULL; } }

int main()
{ 
    {
        // ����
        AFactory* pFactory = new BenzFactory();
        ICar* pCar = pFactory->CreateCar();
        pCar->Name();

        SAFE_DELETE(pCar);
        SAFE_DELETE(pFactory);

        // ����
        pFactory = new BmwFactory();
        pCar = pFactory->CreateCar();
        pCar->Name();

        SAFE_DELETE(pCar);
        SAFE_DELETE(pFactory);

        // �µ�
        pFactory = new AudiFactory();
        pCar = pFactory->CreateCar();
        pCar->Name();

        SAFE_DELETE(pCar);
        SAFE_DELETE(pFactory); 
    }
  

    getchar();
    return 0;
}

