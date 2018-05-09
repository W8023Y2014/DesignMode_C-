// Flyweight.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "ICharacter.h"
#include "CharacterA.h"
#include "CharacterB.h"
#include "CharacterFactory.h"

int main()
{
    CharacterFactory* pFactory = new CharacterFactory;

    ICharacter* ch1 = pFactory->GetCharacter('A');
    ch1->Display();

    ICharacter* ch2 = pFactory->GetCharacter('B');
    ch2->SetSize(500, 800);
    ch2->Display();

    getchar();

    return 0;
}