// Singleton.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "SingleObject.h"

int main()
{
    CSingleton::getInstance().print();
    CSingleton::getInstance().print();
    CSingleton::getInstance().print();
    CSingleton::getInstance().print();
   
    getchar();
    return 0;
}

