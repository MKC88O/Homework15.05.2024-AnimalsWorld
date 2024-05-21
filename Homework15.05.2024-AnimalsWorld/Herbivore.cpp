#include "Herbivore.h"
    Herbivore::Herbivore() {}

    Herbivore::Herbivore(string name, double weight, bool life, string continent) {
        SetName(name);
        SetWeight(weight);
        SetLife(life);
        SetContinent(continent);
    }

    Herbivore::~Herbivore() {};

    void Herbivore::SetName(string name) {
        this->name = name;
    }

    void Herbivore::SetWeight(double weight) {
        this->weight = weight;
    }

    void Herbivore::SetLife(bool life) {
        this->life = life;
    }

    void Herbivore::SetContinent(string continent) {
        this->continent = continent;
    }

    string Herbivore::GetName() {
        return name;
    }

    double Herbivore::GetWeight() const {
        return weight;
    }

    bool Herbivore::GetLife() const {
        return life;
    }

    string Herbivore::GetContinent() const {
        return continent;
    }

    void Herbivore::EatGrass() {
        weight += 10;
        cout << GetName() << " Eats grass on the field...\n\n";
    }

    bool Herbivore::IsAlive() const {
        return life;
    }

    void Herbivore::Die() {
        life = false;
    }
