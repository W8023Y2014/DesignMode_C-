#pragma once
#include "ICharacter.h"
class CharacterA :
    public ICharacter
{
public:
    CharacterA();
    virtual ~CharacterA();

    void SetSize(int nWeight, int nHeight);
    void Display();
};

