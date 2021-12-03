/*
 * Proyecto TC1033
 * Daniel Emilio Fuentes Portaluppi
 * A01708302
 * 03/12/21
 */

#define REPTILES_H_

#include<string>
#include "Animales.h"

using namespace std;

//Declaro clase Reptil que hereda de Animal
class Reptil: public Animal
{
    
    public:

        Reptil(){} //Constructor default
        Reptil(string esp, int pob): Animal(esp, pob){ //Constructor que recibe especie y poblacion
        }

};
