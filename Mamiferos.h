/*
 * Proyecto TC1033
 * Daniel Emilio Fuentes Portaluppi
 * A01708302
 * 03/12/21
 */

#define MAMIFEROS_H_

#include<string>
#include "Animales.h"

using namespace std;

//Declaro clase Mamifero que hereda de Animal
class Mamifero: public Animal
{

    public:
        
        Mamifero(){} //Constructor default
        Mamifero(string esp, int pob): Animal(esp, pob){ //Constructor que recibe especie y poblacion
        }
    
};
