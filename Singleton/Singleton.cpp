// Singleton.cpp : �������̨Ӧ�ó������ڵ㡣
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

