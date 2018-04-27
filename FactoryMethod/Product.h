#pragma once 

namespace FactoryMethod
{
    class Product
    {
    public:
        Product();
        ~Product();
    };

    // Æû³µ½Ó¿Ú
    class ICar
    {
    public:
        ICar();
        virtual ~ICar();

        virtual void Name() = 0;

    private:
    };

    class BenzCar : public ICar
    {
    public:
        BenzCar();
        ~BenzCar();

        void Name();

    private:
    };

    class BmwCar : public ICar
    {
    public:
        BmwCar();
        ~BmwCar();

        void Name();

    private:
    };

    class AudiCar : public ICar
    {
    public:
        AudiCar();
        ~AudiCar();

        void Name();

    private:
    }; 
}