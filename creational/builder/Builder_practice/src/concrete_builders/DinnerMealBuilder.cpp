#include "DinnerMealBuilder.hpp"

void    DinnerMealBuilder::buildMainDish() {
    meal->setMainDish("American Burger");
}

void    DinnerMealBuilder::buildDrink() {
    meal->setDrink("Cola Soda");
}

void    DinnerMealBuilder::buildDessert() {
    meal->setDessert("Cheese Cake");
}

void    DinnerMealBuilder::buildSideDish() {
    meal->setDessert("Potatoe");
}