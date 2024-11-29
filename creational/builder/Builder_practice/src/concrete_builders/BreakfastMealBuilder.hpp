#pragma once

#include "../MealBuilder.hpp"

class BreakfastMealBuilder : public MealBuilder {
    public:
        void   buildMainDish(); 
        void   buildSideDish();
        void   buildDrink(); 
        void   buildDessert();
};