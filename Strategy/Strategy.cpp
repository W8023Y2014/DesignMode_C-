// Strategy.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "IReplaceAlgorithm.h"
#include "Cache.h"



int main()
{
    //  1
    Cache cache(new LRU_ReplaceAlgorithm()); //��¶���㷨�Ķ��� 
    cache.Replace();

    //  2
    CacheA<LRU_ReplaceAlgorithm> cacheA;
    cacheA.Replace();





    getchar();
    return 0;
}


