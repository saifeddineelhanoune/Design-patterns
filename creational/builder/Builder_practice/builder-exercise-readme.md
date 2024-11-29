# Restaurant Order System - Builder Pattern Exercise

## Objective
Implement a restaurant order system using the Builder design pattern to manage different types of meal orders.

## Core Requirements

### Product Class (Meal)
- Main dish
- Side dish
- Drink
- Dessert
- Price calculation method

### Abstract Builder (MealBuilder)
Required methods:
```cpp
buildMainDish()
buildSideDish()
buildDrink()
buildDessert()
```

### Concrete Builders
Implement:
- BreakfastMealBuilder
- DinnerMealBuilder

### Director Class (Chef)
- Controls the meal building process
- Works with builders to create meals

## Additional Challenges
- Dietary restrictions handling (vegetarian, vegan, gluten-free)
- Price calculation system
- Meal combination validation
- Optional meal components support

## Implementation Steps
1. Define Meal class
2. Create abstract MealBuilder
3. Implement Concrete Builders
4. Build Director class
5. Create test cases

## Expected Learning Outcomes
- Complex object construction separation
- Multiple representations using same process
- Construction process control
- Code encapsulation for construction

## Evaluation Criteria
- Code organization
- Pattern implementation correctness
- Extensibility
- Error handling
- Test coverage

## Project Structure
```
src/
  ├── meal.hpp
  ├── meal_builder.hpp
  ├── concrete_builders/
  │   ├── breakfast_builder.hpp
  │   └── dinner_builder.hpp
  └── chef.hpp
tests/
  └── meal_tests.cpp
```
