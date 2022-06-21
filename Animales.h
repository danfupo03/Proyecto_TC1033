/*
 * Registration of populations and species in a reserve
 * Daniel Emilio Fuentes Portaluppi
 * 03/12/21
 */

/*
 * Animal class contains the generic methods for handling animals
 * and has 3 child classes that are types of animals:
 * Mammals, Amphibians and Reptiles
 */

#ifndef ANIMALES_H
#define ANIMALES_H

#include<sstream>
#include<string>

using namespace std;

// Animal class declaration
class Animal{

    protected:
        //Declarar las variables de instancia
        string especie;
        int poblacion;
        
    public:
        //Declaramos los métodos de la clase

        Animal(){} //El constructor default
        Animal(string esp, int pob){ //Constructor donde recibe valores para llenar las variables de instancia
            especie = esp;
            poblacion = pob;
        }

        //Getter de "especie" y "poblacion"
    
        /*
         * getter especie
         *
         * @return string: especie del animal
        */
        string getEspecie(){
            return especie;
        }
        
        /*
         * getter poblacion
         *
         * @return int: poblacion del animal
        */
        int getPoblacion(){
            return poblacion;
        }
        
        /*
         * Almacena los valores de las variables de instancia en una cadena de
         * texto.
         *
         * @return string con los datos del animal
        */
        string toString()const{

            stringstream aux;
            aux << "La especie es " << especie << " su poblacion es de "<< poblacion << " individuos." << "\n";
            return aux.str();
        }
};

#endif
