#pragma once

#include "IFactory.h"

class PhoneFactory : public IFactory
{
public:
    PhoneFactory();
    virtual ~PhoneFactory();

    void makeProduct() override;

private:

};

