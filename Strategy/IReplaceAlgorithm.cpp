#include "stdafx.h"
#include "IReplaceAlgorithm.h"

IReplaceAlgorithm::IReplaceAlgorithm()
{
}

IReplaceAlgorithm::~IReplaceAlgorithm()
{
}

LRU_ReplaceAlgorithm::LRU_ReplaceAlgorithm()
{
}

LRU_ReplaceAlgorithm::~LRU_ReplaceAlgorithm()
{
}

void LRU_ReplaceAlgorithm::Replace()
{
    printf("LRU_ReplaceAlgorithm\n\n");
}

FIFO_ReplaceAlgorithm::FIFO_ReplaceAlgorithm()
{
}

FIFO_ReplaceAlgorithm::~FIFO_ReplaceAlgorithm()
{
}

void FIFO_ReplaceAlgorithm::Replace()
{
    printf("FIFO_ReplaceAlgorithm\n\n");
}

Random_ReplaceAlgorithm::Random_ReplaceAlgorithm()
{
}

Random_ReplaceAlgorithm::~Random_ReplaceAlgorithm()
{
}

void Random_ReplaceAlgorithm::Replace()
{
    printf("Random_ReplaceAlgorithm\n\n");
} 