// Strategy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "IReplaceAlgorithm.h"
#include "Cache.h"



int main()
{
    //  1
    Cache cache(new LRU_ReplaceAlgorithm()); //暴露了算法的定义 
    cache.Replace();

    //  2
    CacheA<LRU_ReplaceAlgorithm> cacheA;
    cacheA.Replace();





    getchar();
    return 0;
}


