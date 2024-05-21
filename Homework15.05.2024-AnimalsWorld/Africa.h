#pragma once
#include <iostream>
#include <vector>
#include "Herbivore.h"
#include "Carnivore.h"
#include "Continent.h"
#include "Wildebeest.h"
#include "Lion.h"

using namespace std;

class Africa : public Continent {
public:
    Africa();

    void CreateHerbivores(vector<Herbivore*>& herbivores) const;
    void CreateCarnivores(vector<Carnivore*>& carnivores) const;
};

