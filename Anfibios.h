#define ANFIBIOS_H_

#include<string>
#include "Animales.h"


using namespace std;

class Anfibio: public Animal
{    
    public:
        //Constructores
        Anfibio(){}
        Anfibio(string esp, int pob): Animal(esp, pob, 0){
        }


    void aumentaPoblacionAnfibios(int tiempo) //Función que calcula aproximadamente el crecimiento de la población de la especie.
    {
        while(i < tiempo)
        {
            mortalidad = poblacion - (poblacion * 0.5);
            poblacion = mortalidad + (poblacion * 2);
            i = i + 1;
        }
        years = years + tiempo;
    }
    
};
