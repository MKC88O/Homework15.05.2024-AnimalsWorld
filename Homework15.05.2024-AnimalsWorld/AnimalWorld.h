#pragma once
#include <iostream>
#include <vector>
#include "Herbivore.h"
#include "Carnivore.h"
#include "Continent.h"

class AnimalWorld {
    Continent* continent;
    vector<Herbivore*> herbivores;
    vector<Carnivore*> carnivores;

public:
    AnimalWorld(Continent* continent);

    ~AnimalWorld();

    void SetContinent(Continent* continent);

    void MealsHerbivores();
    void NutritionCarnivores();
    void Print() const;
};

