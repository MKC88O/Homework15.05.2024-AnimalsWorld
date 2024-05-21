#include "NorthAmerica.h"

    NorthAmerica::NorthAmerica() : Continent("North America") {}

    void NorthAmerica::CreateHerbivores(vector<Herbivore*>& herbivores) const {
        herbivores.push_back(new Bison(nameContinent));
    }

    void NorthAmerica::CreateCarnivores(vector<Carnivore*>& carnivores) const {
        carnivores.push_back(new Wolf(nameContinent));
    }
