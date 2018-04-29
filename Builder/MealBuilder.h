#pragma once

#include "Meal.h"

class MealBuilder
{
public:
    MealBuilder();
    virtual ~MealBuilder();

    Meal PrepareVegMeal();
    Meal PrepareNonVegMeal();


};

