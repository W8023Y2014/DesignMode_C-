#pragma once
class IFactory
{
public:

    IFactory()
    {
    }

    virtual ~IFactory()
    {
    }

    virtual void makeProduct() = 0;
};
 