#include "Meal.hpp"

void    Meal::setMainDish(const std::string& mainDish) {
    _mainDish = mainDish;
}

void    Meal::setSideDish(const std::string& sideDish) {
    _sideDish = sideDish;
}

void    Meal::setDrink(const std::string& drink) {
    _drink = drink;
}

void    Meal::setDessert(const std::string& dessert) {
    _dessert = dessert;
}

void    Meal::showSpecs() {
    std::cout << "Main " << _mainDish << std::endl;
    std::cout << "Side " << _sideDish << std::endl;
    std::cout << "Drink " << _drink << std::endl;
    std::cout << "Dessert " << _dessert << std::endl;
}