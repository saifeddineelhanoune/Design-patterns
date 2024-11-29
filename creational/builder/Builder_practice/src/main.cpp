#include "Meal.hpp"
#include "concrete_builders/BreakfastMealBuilder.hpp"
#include "concrete_builders/DinnerMealBuilder.hpp"
#include "MealBuilder.hpp"
#include "Chef.hpp"

int main() {
    Chef    chef;
    BreakfastMealBuilder meal1;
    DinnerMealBuilder meal2;

    chef.setBuilder(&meal1);
    Meal*   BreakFast = chef.constructMeal();
    BreakFast->showSpecs();
    std::cout << "--------------------------------" << std::endl;
    chef.setBuilder(&meal2);
    Meal *Dinner = chef.constructMeal();
    Dinner->showSpecs();
    return 0;
}