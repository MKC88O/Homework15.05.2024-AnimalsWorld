#pragma once
#include <iostream>
#include <vector>
#include "Herbivore.h"
using namespace std;

class Bison : public Herbivore {
public:
    Bison(const string& cont);
};
