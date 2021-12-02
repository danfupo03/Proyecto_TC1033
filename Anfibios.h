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

class Anfibio: public Animal
{

    public:
        //Constructor
        Anfibio(){}
        Anfibio(string esp, int pob): Animal(esp, pob, 0){
        }
    
};
