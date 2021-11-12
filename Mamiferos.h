#include<string>

using namespace std;

class Mamiferos
{
    private:
        string especie;
        int poblacion;
        int mortalidad = 0;
        int i = 0;
        int años;

    public:
        //Constructores
        Mamiferos(): especie(""), poblacion(0), años(0){};
        Mamiferos(string esp, int pob, int y): especie(esp), poblacion(pob), años(y){};

        string get_especie();
        int get_poblacion();
        int get_años();

        void set_especie(string );
        void set_poblacion(int );
        void set_años(int );
    
        void aumento_poblacion(int );

};

//Getters
string Mamiferos::get_especie()
{
  return especie;
}

int Mamiferos::get_poblacion()
{
  return poblacion;
}

int Mamiferos::get_años()
{
  return años;
}

//Setters
void Mamiferos::set_especie(std::string esp)
{
  especie = esp;
}

void Mamiferos::set_poblacion(int pob)
{
  poblacion = pob;
}

void Mamiferos::set_años(int y)
{
  años = y;
}

void Mamiferos::aumento_poblacion(int tiempo) //Función que calcula aproximadamente el crecimiento de la población de la especie.
{
    while(i < tiempo)
    {
        mortalidad = poblacion - (poblacion / 8);
        poblacion = mortalidad + (poblacion / 4);
        i = i + 1;
    }
    años = años + tiempo;
}
