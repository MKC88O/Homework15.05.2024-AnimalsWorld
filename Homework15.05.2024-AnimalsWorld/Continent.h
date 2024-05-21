#pragma once
#include <iostream>
#include <vector>
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

class Continent {
protected:
    string nameContinent;
public:
    Continent();
    Continent(const string& nameContinent);
    
    virtual ~Continent();

    void SetContinent(string nameContinent);

    string GetName() const;

    virtual void CreateHerbivores(vector<Herbivore*>& herbivores) const;
    virtual void CreateCarnivores(vector<Carnivore*>& carnivores) const;
};

