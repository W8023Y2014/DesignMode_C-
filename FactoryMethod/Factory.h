#pragma once 
#include "Product.h"

namespace FactoryMethod
{  
    // �����ӿ�
    class AFactory
    {
    public:
        virtual ICar* CreateCar() = 0;  // ��������
    };

    // ���۹���
    class BenzFactory : public AFactory
    {
    public:
        BenzFactory();
        ~BenzFactory();
        ICar* CreateCar();
    private:

    };

    class BmwFactory : public AFactory
    {
    public:
        BmwFactory();
        ~BmwFactory();
        ICar* CreateCar();
    private:

    };

    class AudiFactory : public AFactory
    {
    public:
        AudiFactory();
        ~AudiFactory();
        ICar* CreateCar();
    private:

    };

}

