#pragma once
#include <iostream>
#include <vector>
#include "Herbivore.h"
#include "Carnivore.h"
#include "Continent.h"
#include "Bison.h"
#include "Wolf.h"

using namespace std;
class NorthAmerica : public Continent {
public:
    NorthAmerica();

    void CreateHerbivores(vector<Herbivore*>& herbivores) const;
    void CreateCarnivores(vector<Carnivore*>& carnivores) const;
};
