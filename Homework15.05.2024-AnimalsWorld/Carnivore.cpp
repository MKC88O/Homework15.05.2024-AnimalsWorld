#include "Carnivore.h"

    Carnivore::Carnivore() {}

    Carnivore::Carnivore(string name, double power, string continent) {
        SetName(name);
        SetPower(power);
        SetContinent(continent);
    }

    Carnivore::~Carnivore() {}

    void Carnivore::SetName(string name) {
        this->name = name;
    }

    void Carnivore::SetPower(double power) {
        this->power = power;
    }

    void Carnivore::SetContinent(string continent) {
        this->continent = continent;
    }

    string Carnivore::GetName() {
        return name;
    }

    double Carnivore::GetPower() const {
        return power;
    }

    string Carnivore::GetContinent() const {
        return continent;
    }

    void Carnivore::Eat(Herbivore* herbivore) {
        cout << GetName() << " hunts of " << herbivore->GetName() << "...\n\n";
        if (power > herbivore->GetWeight()) {
            power += 10;
            herbivore->Die();
            cout << herbivore->GetName() << " eaten :(\n\n";
        }
        else {
            power -= 10;
            cout << herbivore->GetName() << " escaped!\n\n";
        }
    }
