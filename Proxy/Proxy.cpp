// SimpleFactory.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h" 
#include "IFactory.h" 
#include "PhoneFactory.h" 
#include "FoxconnProxy.h" 
 
int main()
{
     
    IFactory* factory = new PhoneFactory();
    FoxconnProxy* proxy = new FoxconnProxy(factory);
    proxy->makeProduct();

    delete factory;

    getchar();
    return 0;
}

