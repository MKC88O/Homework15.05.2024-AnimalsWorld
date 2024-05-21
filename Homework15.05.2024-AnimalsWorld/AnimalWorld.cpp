#include "AnimalWorld.h"

    AnimalWorld::AnimalWorld(Continent* continent) {
        SetContinent(continent);
        continent->CreateHerbivores(herbivores);
        continent->CreateCarnivores(carnivores);
    }

    AnimalWorld::~AnimalWorld() {
        for (auto herbivore : herbivores) {
            delete herbivore;
        }
        for (auto carnivore : carnivores) {
            delete carnivore;
        }
    }

    void AnimalWorld::SetContinent(Continent* continent) {
        this->continent = continent;

    }

    void AnimalWorld::MealsHerbivores() {
        for (auto& herbivore : herbivores) {
            herbivore->EatGrass();
        }
    }

    void AnimalWorld::NutritionCarnivores() {
        for (auto& carnivore : carnivores) {
            for (auto& herbivore : herbivores) {
                if (herbivore->IsAlive()) {
                    carnivore->Eat(herbivore);
                }
            }
        }
    }
    void AnimalWorld::Print() const {
        cout << "\tHerbivores:\n\n";
        for (const auto& herbivore : herbivores) {
            string life;
            if (herbivore->IsAlive()) {
                life = "\t\tAlive!";
            }
            else {
                life = "\t\tDead(";
            }
            cout << "Name: \t\t" << herbivore->GetName() << "\n";
            cout << "Weight: \t" << herbivore->GetWeight() << "\n";
            cout << "From:\t\t" << herbivore->GetContinent() << "\n";
            cout << "Alive? " << life << "\n\n";

        }
        cout << "\tCarnivores:\n\n";
        for (const auto& carnivore : carnivores) {
            cout << "Name: \t\t" << carnivore->GetName() << "\n";
            cout << "Power: \t\t" << carnivore->GetPower() << "\n";
            cout << "From:\t\t" << carnivore->GetContinent() << "\n";
        }
    }
