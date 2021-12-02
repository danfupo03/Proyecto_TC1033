 * Proyecto TC1033
 * Daniel Emilio Fuentes Portaluppi
 * A01708302
 * 03/12/21
 */

#define REPTILES_H_

#include<string>
#include "Animales.h"

using namespace std;

class Reptil: public Animal
{
    
    public:
        //Constructor
        Reptil(){}
        Reptil(string esp, int pob): Animal(esp, pob, 0){
        }

};
