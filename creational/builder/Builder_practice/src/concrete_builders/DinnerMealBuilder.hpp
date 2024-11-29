#pragma once

#include "../MealBuilder.hpp"

class DinnerMealBuilder : MealBuilder {
    public:
        void    BuildMainDish();
        void    BuildDrink();
        void    BuildDessert();
};