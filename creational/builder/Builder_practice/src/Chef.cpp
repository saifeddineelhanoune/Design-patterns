#include "Chef.hpp"

void    Chef::setBuilder(MealBuilder *newBuilder) {
    builder = newBuilder;
}

Meal*   Chef::constructMeal() {
    builder->buildDessert();
    builder->buildDrink();
    builder->buildMainDish();
    builder->buildSideDish();
    return builder->getResut();
}