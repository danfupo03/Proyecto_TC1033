/*
 * Registration of populations and species in a reserve
 * Daniel Emilio Fuentes Portaluppi
 * 03/12/21
 */

#define ANFIBIOS_H_

#include<string>
#include "Animales.h"

using namespace std;

// I declare "Anfibio" class that inherits from "Animal"
class Anfibio: public Animal
{

    public:

        Anfibio(){} //Default constructor
        Anfibio(string esp, int pob): Animal(esp, pob){ // Constructor that receives species and population
        }
    
};
