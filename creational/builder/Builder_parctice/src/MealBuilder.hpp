#pragma once

#include "Meal.hpp"
#include <string>
#include <iostream>

class MealBuilder {
    protected:
        Meal* meal;
    public:
        MealBuilder();
        Meal*   getResut();

        virtual void    buildMainDish() = 0;
        virtual void    buildSideDish() = 0;
        virtual void    buildDrink() = 0;
        virtual void    buildDessert() = 0;
        virtual ~MealBuilder();
};
