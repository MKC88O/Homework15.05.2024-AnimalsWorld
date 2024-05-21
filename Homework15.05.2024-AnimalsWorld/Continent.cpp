#include "Continent.h"

    Continent::Continent() {}

    Continent::Continent(const string& nameContinent) {
        SetContinent(nameContinent);
    }
    Continent::~Continent() {};

    void Continent::SetContinent(string nameContinent) {
        this->nameContinent = nameContinent;
    }

    string Continent::GetName() const {
        return nameContinent;
    }

    void Continent::CreateHerbivores(vector<Herbivore*>& herbivores) const {};

    void Continent::CreateCarnivores(vector<Carnivore*>& carnivores) const {};
