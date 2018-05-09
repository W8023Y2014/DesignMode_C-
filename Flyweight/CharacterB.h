#pragma once
#include "ICharacter.h"
class CharacterB :
    public ICharacter
{
public:
    CharacterB();
    virtual ~CharacterB();

    void SetSize(int nWeight, int nHeight);
    void Display();
};

