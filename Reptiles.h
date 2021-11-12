#include<string>

using namespace std;

class Reptiles
{
    private:
        string especie;
        int poblacion;
        int mortalidad = 0;
        int i = 0;
        int años;
        int piel;

    public:
        //Constructores
        Reptiles(): especie(""), poblacion(0), años(0), piel(0){};
        Reptiles(string esp, int pob, int y, int sk): especie(esp), poblacion(pob), años(y), piel(sk){};

        string get_especie();
        int get_poblacion();
        int get_años();
        int get_piel();

        void set_especie(string );
        void set_poblacion(int );
        void set_años(int );
        void set_piel(int );
    
        void aumento_poblacion(int );
        void muda_piel(int );

};

//Getters
string Reptiles::get_especie()
{
  return especie;
}

int Reptiles::get_poblacion()
{
  return poblacion;
}

int Reptiles::get_años()
{
  return años;
}

int Reptiles::get_piel()
{
  return piel;
}

//Setters
void Reptiles::set_especie(std::string esp)
{
  especie = esp;
}

void Reptiles::set_poblacion(int pob)
{
  poblacion = pob;
}

void Reptiles::set_años(int y)
{
  años = y;
}

void Reptiles::set_piel(int sk)
{
  piel = sk;
}

void Reptiles::aumento_poblacion(int tiempo) //Función que calcula aproximadamente el crecimiento de la población de la especie.
{
    while(i < tiempo)
    {
        mortalidad = poblacion - (poblacion / 9);
        poblacion = mortalidad + (poblacion / 3);
        i = i + 1;
    }
    años = años + tiempo;
}

void Reptiles::muda_piel(int tiempo) //Función que calcula aproximadamente cuantas veces un miembro de la población mudó de piel.
{
    piel = 12 * tiempo;
}
