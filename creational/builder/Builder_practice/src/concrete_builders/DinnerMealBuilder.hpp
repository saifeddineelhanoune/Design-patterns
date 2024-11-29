#pragma once

#include "../MealBuilder.hpp"

class DinnerMealBuilder : public MealBuilder {
    public:
        void    buildMainDish();
        void    buildSideDish();
        void    buildDrink();
        void    buildDessert();
};


/*
    //product

        class Meal {
            std::string mainMeal;
            public:
                void    setMeal();
        }

    //abstract handler

        class MealBuider {
            protected:
                Meal*   meal;
            public:
                Meal*   getResult();
                virtual void    buildMeal() = 0;
        }

    // Concrete class
        class Launch : MealBuilder {
            public:

                void    buildMeal() {
                    meal->setMeal("Burger");
                }
        }

    //Director
        class Chef {
            MealBuilder *builder;
            public:
                Meal*   constructMeal() {
                    build....();
                    build....();
                    build....();
                    build....();
                    return getResult();
                }

        }

*/