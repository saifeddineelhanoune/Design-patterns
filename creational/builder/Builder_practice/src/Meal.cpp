#include "Meal.hpp"

void    Meal::calculatePrice() {}

void    Meal::setMainDish(const std::string& mainDish) {
    _mainDish = mainDish;
}

void    Meal::setMainDish(const std::string& sideDish) {
    _sideDish = sideDish;
}

void    Meal::setMainDish(const std::string& drink) {
    _drink = drink;
}

void    Meal::setMainDish(const std::string& dessert) {
    _dessert = dessert;
}