#include "stdafx.h"
#include "Cache.h"


Cache::Cache(IReplaceAlgorithm* ra)
{
    this->m_ra = ra;
}


Cache::~Cache()
{
}


void Cache::Replace()
{
    this->m_ra->Replace();
}
