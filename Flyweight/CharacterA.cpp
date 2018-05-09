#include "stdafx.h"
#include "CharacterA.h"

using namespace std;
#include <iostream> 

CharacterA::CharacterA()
{
    this->m_chSymbol = 'A';
    this->m_nWeight = 100;
    this->m_nHeight = 200;
}


CharacterA::~CharacterA()
{
}

void CharacterA::SetSize(int nWeight, int nHeight)
{
    this->m_nWeight = nWeight;
    this->m_nHeight = nHeight;
}

void CharacterA::Display()
{
    cout << "CharacterA£º" << m_chSymbol << "(" << m_nWeight << "," << m_nHeight << ")" << endl;
}
