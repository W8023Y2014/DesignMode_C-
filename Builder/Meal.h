#pragma once

#include "IItem.h"
#include <vector>


class Meal
{
public:
    Meal();
    virtual ~Meal();

    void Add(IItem* item);
    float GetCost();
    void ShowItems();

private:
    vector<IItem*> items;

};

