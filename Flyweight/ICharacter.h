#pragma once
class ICharacter
{
public:

   

    virtual ~ICharacter()
    {
    }

    virtual void SetSize(int, int) = 0;
    virtual void Display() = 0;

protected:
    ICharacter() {};

    char m_chSymbol;
    int m_nWeight;
    int m_nHeight;
};

