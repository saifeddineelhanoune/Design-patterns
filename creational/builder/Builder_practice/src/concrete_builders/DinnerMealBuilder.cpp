#include "DinnerMealBuilder.hpp"

void    DinnerMealBuilder::BuildMainDish() {
    meal->setMainDish("American Burger & Potatoe");
}

void    DinnerMealBuilder::BuildDrink() {
    meal->setDrink("Cola Soda");
}

void    DinnerMealBuilder::BuildDessert() {
    meal->setDessert("Cheese Cake");
}