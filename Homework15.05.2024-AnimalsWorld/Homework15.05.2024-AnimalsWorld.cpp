// Homework15.05.2024-AnimalsWorld.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "Herbivore.h"
#include "Carnivore.h"
#include "Wildebeest.h"
#include "Bison.h"
#include "Lion.h"
#include "Wolf.h"
#include "Continent.h"
#include "Africa.h"
#include "NorthAmerica.h"
#include "AnimalWorld.h"
using namespace std;

int main() {
    Continent* africa = new Africa();
    AnimalWorld africanWorld(africa);

    africanWorld.MealsHerbivores();
    africanWorld.Print();
    cout << "\n\n";

    africanWorld.NutritionCarnivores();
    africanWorld.Print();
    cout << "\n\n";

    delete africa;

    Continent* northAmerica = new NorthAmerica();
    AnimalWorld northAmericanWorld(northAmerica);

    northAmericanWorld.MealsHerbivores();
    northAmericanWorld.Print();
    cout << "\n\n";

    northAmericanWorld.NutritionCarnivores();
    northAmericanWorld.Print();
    cout << "\n\n";

    delete northAmerica;
}
