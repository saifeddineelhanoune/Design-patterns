#pragma once

#include <string>
#include <iostream>

class   Meal {
    private:
        std::string mainDish;
        std::string sideDish;
        std::string drink;
        std::string Dessert;
    public:
        void    calculatePrice();
        void    setMainDish();
        void    setSideDish();
        void    setDrink();
        void    setDessert();
}