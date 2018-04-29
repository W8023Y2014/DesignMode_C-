#pragma once
#include "IReplaceAlgorithm.h"

class Cache
{
public:
    Cache(IReplaceAlgorithm* ra);
    virtual ~Cache();
    void Replace();

private:
    IReplaceAlgorithm* m_ra;
};

template<class RA>
class CacheA
{
public:
    CacheA() {}
    virtual ~CacheA() {}
    void Replace() { m_ra.Replace(); }

private:
    RA m_ra;
};