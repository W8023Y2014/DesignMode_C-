#include "stdafx.h"
#include "CharacterB.h"
using namespace std;
#include <iostream> 

CharacterB::CharacterB()
{
    this->m_chSymbol = 'B';
    this->m_nWeight = 100;
    this->m_nHeight = 200;
}


CharacterB::~CharacterB()
{
}

void CharacterB::SetSize(int nWeight, int nHeight)
{
    this->m_nWeight = nWeight;
    this->m_nHeight = nHeight;
}

void CharacterB::Display()
{
    cout << "CharacterB£º" << m_chSymbol << "(" << m_nWeight << "," << m_nHeight << ")" << endl;
}
