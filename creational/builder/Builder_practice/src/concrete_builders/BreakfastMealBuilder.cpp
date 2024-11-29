#include "BreakfastMealBuilder.hpp"

void    BreakfastMealBuilder::buildDrink() {
    meal->setDrink("Milk");
}

void    BreakfastMealBuilder::buildDessert() {
    meal->setDessert("Cake");
}

void    BreakfastMealBuilder::buildMainDish() {
    meal->setMainDish("Mexican Omlette");
}

void    BreakfastMealBuilder::buildSideDish() {
    meal->setSideDish("Granola");
}