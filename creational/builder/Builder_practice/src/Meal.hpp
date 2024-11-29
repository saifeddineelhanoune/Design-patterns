#pragma once

#include <string>
#include <iostream>

class   Meal {
    private:
        std::string _mainDish;
        std::string _sideDish;
        std::string _drink;
        std::string _dessert;
    public:
        void    setMainDish(const std::string& mainDish);
        void    setSideDish(const std::string& sideDish);
        void    setDrink(const std::string& drink);
        void    setDessert(const std::string& Dessert);
        void    showSpecs();
};