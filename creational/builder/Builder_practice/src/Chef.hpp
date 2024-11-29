#pragma once

#include "MealBuilder.hpp"

class  Chef {
    MealBuilder*    builder;
    public:
        void    setBuilder(MealBuilder *newBuilder);
        Meal    *constructMeal();
};