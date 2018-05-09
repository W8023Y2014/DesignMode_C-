#pragma once

#include "ICharacter.h"
#include "CharacterA.h"
#include "CharacterB.h"
#include <map>
using namespace std;


class CharacterFactory
{
public:
    CharacterFactory();
    virtual ~CharacterFactory();
    ICharacter* GetCharacter(char chIn);
private:
    map<char, ICharacter*> m_mChar;

};

