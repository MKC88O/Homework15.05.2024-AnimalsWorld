#include "Africa.h"

    Africa::Africa() : Continent("Africa") {}

    void Africa::CreateHerbivores(vector<Herbivore*>& herbivores) const {
        herbivores.push_back(new Wildebeest(nameContinent));
    }

    void Africa::CreateCarnivores(vector<Carnivore*>& carnivores) const {
        carnivores.push_back(new Lion(nameContinent));
    }

