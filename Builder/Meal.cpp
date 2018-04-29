#include "stdafx.h"
#include "Meal.h"


Meal::Meal()
{
}


Meal::~Meal()
{
}

void Meal::Add(IItem * item)
{
    items.push_back(item);
}

float Meal::GetCost()
{
    float cost = 0;
    for each (auto var in items)
    {
        cost += var->Price();
    }
    return cost;
}

void Meal::ShowItems()
{
    for each (auto var in items)
    {
        printf("Item Name: %s", var->Name());
        printf(", Packing: %s", var->Packing()->Pack());
        printf(", Price: %d \n\n", var->Price());
    }
}
