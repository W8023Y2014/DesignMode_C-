#pragma once
#include "IFactory.h"
class FoxconnProxy :
    public IFactory
{
public:
    FoxconnProxy(IFactory* factory);
    virtual ~FoxconnProxy();
    void makeProduct() override;
private:
    IFactory* m_real;
};

