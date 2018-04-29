#include "stdafx.h"
#include "MealBuilder.h"

#include "VegBurger.h"
#include "Coke.h"
#include "ChickenBurger.h"
#include "Pepsi.h"

MealBuilder::MealBuilder()
{
}


MealBuilder::~MealBuilder()
{
}

Meal MealBuilder::PrepareVegMeal()
{
    Meal meal;
    meal.Add(new VegBurger());
    meal.Add(new Coke());
    return meal;
}

Meal MealBuilder::PrepareNonVegMeal()
{
    Meal meal;
    meal.Add(new ChickenBurger());
    meal.Add(new Pepsi());
    return meal; 
}
