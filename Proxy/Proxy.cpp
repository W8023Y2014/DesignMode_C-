// SimpleFactory.cpp : 定义控制台应用程序的入口点。
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

