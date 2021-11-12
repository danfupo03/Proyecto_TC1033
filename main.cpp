#include <iostream>
#include <string>
#include "Mamiferos.h"
#include "Reptiles.h"
#include "Anfibios.h"


int main()
{
    //Objeto mamíferos
    Mamiferos especie_1("Odocoileus virginianus (Venado de cola blanca)", 50, 0);
    std::cout << "La especie " << especie_1.get_especie() << ","
              << " tiene una población de " << especie_1.get_poblacion() <<" individuos" << "." << " A los " << especie_1.get_años() << " años." << " "\
              << std::endl;
    
    especie_1.aumento_poblacion(3);
    
    std::cout << "La población de la especie "<< especie_1.get_especie() << ","
              << " despues de " << especie_1.get_años() << " años es igual a " << especie_1.get_poblacion() << " individuos." << "\n"
              << std::endl;
    
    //Objeto Reptiles
    Reptiles especie_2("Crotaus asquilus (Cascabel oscura)", 50, 0, 0);
    std::cout << "La especie " << especie_2.get_especie() << ","
              << " tiene una población de " << especie_2.get_poblacion() <<" individuos," << " a los " << especie_2.get_años() << " años y ha mudado de piel un total de " << especie_2.get_piel() << " veces." << " "\
              << std::endl;
    
    especie_2.aumento_poblacion(3);
    especie_2.muda_piel(3);
    
    std::cout << "La población de la especie "<< especie_2.get_especie() << ","
              << " despues de " << especie_2.get_años() << " años es igual a " << especie_2.get_poblacion() << " individuos y aproximadamente uno de sus individuos a mudado de piel un total de " << especie_2.get_piel() << " veces.\n" << std::endl;
    
    //Objeto Anfibio
    Anfibios especie_3("Rana linnaeus (Rana de estanque)", 50, 0);
    std::cout << "La especie " << especie_3.get_especie() << ","
              << " tiene una población de " << especie_3.get_poblacion() <<" individuos," << " a los " << especie_3.get_años() << " años."<< " "\
              << std::endl;
    
    especie_3.aumento_poblacion(3);
    
    std::cout << "La población de la especie "<< especie_3.get_especie() << ","
              << " despues de " << especie_3.get_años() << " años es igual a " << especie_3.get_poblacion() << " individuos." << std::endl;
    
}
