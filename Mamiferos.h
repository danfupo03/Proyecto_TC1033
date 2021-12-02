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

class Mamifero: public Animal
{

    public:
        //Constructor
        Mamifero(){}
        Mamifero(string esp, int pob): Animal(esp, pob, 0){
        }
    
};

