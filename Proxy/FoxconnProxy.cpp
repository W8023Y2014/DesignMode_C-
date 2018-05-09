#include "stdafx.h"
#include "FoxconnProxy.h"


FoxconnProxy::FoxconnProxy(IFactory* factory)
{
    m_real = factory;
}


FoxconnProxy::~FoxconnProxy()
{
}

void FoxconnProxy::makeProduct()
{
    m_real->makeProduct();
}
