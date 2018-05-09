#include "stdafx.h"
#include "CharacterFactory.h"


CharacterFactory::CharacterFactory()
{
    m_mChar.insert(make_pair<char, ICharacter*>('A', new CharacterA));
    m_mChar.insert(make_pair<char, ICharacter*>('B', new CharacterB));
}


CharacterFactory::~CharacterFactory()
{
}

ICharacter * CharacterFactory::GetCharacter(char chIn)
{
    map<char, ICharacter*>::iterator it = m_mChar.find(chIn);
    if (it != m_mChar.end())
    {
        return (ICharacter*)it->second;
    }

    return NULL;
}
