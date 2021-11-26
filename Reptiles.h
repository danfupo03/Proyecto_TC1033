#include<string>
#include "Animales.h"

using namespace std;

class Reptil: public Animal
{
    private:
        int piel;

    public:
        //Constructor
        Reptil(string esp, int pob, int sk): Animal(esp, pob, 0){
            piel = sk;
        }

    //Getters
    int getPiel(){
        return piel;
    }

    void mudaPiel(int tiempo) //Función que calcula aproximadamente cuantas veces un miembro de la población mudó de piel.
    {
        piel = 12 * tiempo;
    }

    void aumentaPoblacionReptiles(int tiempo) //Función que calcula aproximadamente el crecimiento de la población de la especie.
    {
        while(i < tiempo)
        {
            mortalidad = poblacion - (poblacion / 9);
            poblacion = mortalidad + (poblacion / 3);
            i = i + 1;
        }
        años = años + tiempo;
    }
    
};
