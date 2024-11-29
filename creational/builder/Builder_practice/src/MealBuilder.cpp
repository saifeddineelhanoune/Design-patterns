#pragma once

#include "MealBuilder.hpp"

MealBuilder::MealBuilder() : meal(new Meal) {}

Meal    *MealBuilder::getResut() {
    return meal;
}

MealBuilder::~MealBuilder() {}