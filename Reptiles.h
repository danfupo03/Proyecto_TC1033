// =========================================================
// File: Reptiles.h
// Author: Daniel Emilio Fuentes Portaluppi
// Date: 03/12/21
// Description: Reptil class
// =========================================================

#define REPTILES_H_

#include <string>
#include "Animales.h"

using namespace std;

// Declaration of the class Reptil
class Reptil : public Animal
{

public:
    Reptil() {} // Constructor default
    Reptil(string esp, int pob) : Animal(esp, pob)
    { // Constructor that receives the species and the population
    }
};
