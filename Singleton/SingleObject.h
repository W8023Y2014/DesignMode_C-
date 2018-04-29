#pragma once

#include <mutex>

class CSingleton
{
public: 
    ~CSingleton() {}
    static CSingleton & getInstance()
    {
        static CSingleton m_instance;
        return m_instance;
    }
    void print()
    {
        printf("ShowMessage");
    }
};
