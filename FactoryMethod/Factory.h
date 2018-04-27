#pragma once 
#include "Product.h"

namespace FactoryMethod
{  
    // 工厂接口
    class AFactory
    {
    public:
        virtual ICar* CreateCar() = 0;  // 生产汽车
    };

    // 奔驰工厂
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

