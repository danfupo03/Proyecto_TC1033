#include<string>
#include "Animales.h"

using namespace std;

class Mamifero: public Animal
{

    public:
        //Constructor
        Mamifero(string esp, int pob): Animal(esp, pob, 0){
        }


    void aumentaPoblacionMamiferos(int tiempo) //Función que calcula aproximadamente el crecimiento de la población de la especie.
    {
        while(i < tiempo)
        {
            mortalidad = poblacion - (poblacion / 8);
            poblacion = mortalidad + (poblacion / 4);
            i = i + 1;
        }
        años = años + tiempo;
    }
    
};

