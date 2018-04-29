// Builder.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MealBuilder.h"
#include "Meal.h"

int main()
{
    MealBuilder mealBuilder;

    Meal  VegMeal = mealBuilder.PrepareVegMeal();
    VegMeal.ShowItems();
    printf("Total Cost: %f", VegMeal.GetCost());

    VegMeal = mealBuilder.PrepareNonVegMeal();
    VegMeal.ShowItems();
    printf("Total Cost: %f", VegMeal.GetCost());

    getchar();
    return 0;
}