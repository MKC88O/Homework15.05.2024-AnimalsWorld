#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Herbivore {
protected:
    string name;
    double weight = 0;
    bool life = 0;
    string continent;
public:
    Herbivore();
    Herbivore(string name, double weight, bool life, string continent);

    virtual~Herbivore();

    void SetName(string name);
    void SetWeight(double weight);
    void SetLife(bool life);
    void SetContinent(string continent);

    string GetName();
    double GetWeight() const;
    bool GetLife() const;
    string GetContinent() const;

    void EatGrass();
    bool IsAlive() const;
    void Die();
};
