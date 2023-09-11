// =========================================================
// File: Mamiferos.h
// Author: Daniel Emilio Fuentes Portaluppi
// Date: 03/12/21
// Description: Mamiferos class
// =========================================================

#define MAMIFEROS_H_

#include <string>
#include "Animales.h"

using namespace std;

// Declaration of the class Mamifero (Mammal)
class Mamifero : public Animal
{

public:
    Mamifero() {} // Constructor default
    Mamifero(string esp, int pob) : Animal(esp, pob)
    { // Constructor that receives the species and the population
    }
};
