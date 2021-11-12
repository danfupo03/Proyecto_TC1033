#include<string>

using namespace std;

class Anfibios
{
    private:
        string especie;
        int poblacion;
        int mortandad = 0;
        int i = 0;
        int años;

    public:
        //Constructores
        Anfibios(): especie(""), poblacion(0), años(0){};
        Anfibios(string esp, int pob, int y): especie(esp), poblacion(pob), años(y){};

        string get_especie();
        int get_poblacion();
        int get_años();

        void set_especie(string );
        void set_poblacion(int );
        void set_años(int );
    
        void aumento_poblacion(int );

};

//Getters
string Anfibios::get_especie()
{
  return especie;
}

int Anfibios::get_poblacion()
{
  return poblacion;
}

int Anfibios::get_años()
{
  return años;
}

//Setters
void Anfibios::set_especie(std::string esp)
{
  especie = esp;
}

void Anfibios::set_poblacion(int pob)
{
  poblacion = pob;
}

void Anfibios::set_años(int y)
{
  años = y;
}

void Anfibios::aumento_poblacion(int tiempo) //Función que calcula aproximadamente el crecimiento de la población de la especie.
{
    while(i < tiempo)
    {
        mortandad = poblacion - (poblacion * 0.5);
        poblacion = mortandad + (poblacion * 2);
        i = i + 1;
    }
    años = años + tiempo;
}


