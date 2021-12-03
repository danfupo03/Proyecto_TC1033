/*
 * Proyecto TC1033
 * Daniel Emilio Fuentes Portaluppi
 * A01708302
 * 03/12/21
 */

#define ANFIBIOS_H_

#include<string>
#include "Animales.h"

using namespace std;

//Declaro clase Anfibio que hereda de Animal
class Anfibio: public Animal
{

    public:

        Anfibio(){} //Constructor default
        Anfibio(string esp, int pob): Animal(esp, pob){ //Constructor que recibe especie y poblacion
        }
    
};
