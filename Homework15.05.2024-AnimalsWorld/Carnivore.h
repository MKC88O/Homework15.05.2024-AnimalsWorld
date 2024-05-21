#pragma once
#include <iostream>
#include <vector>
#include "Herbivore.h"
using namespace std;

class Carnivore {
protected:
    string name;
    double power = 0;
    string continent;
public:
    Carnivore();
    Carnivore(string name, double power, string continent);

    virtual ~Carnivore();

    void SetName(string name);
    void SetPower(double power);
    void SetContinent(string continent);

    string GetName();
    double GetPower() const;
    string GetContinent() const;

    void Eat(Herbivore* herbivore);
};

