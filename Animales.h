// =========================================================
// File: Animales.h
// Author: Daniel Emilio Fuentes Portaluppi
// Date: 03/12/21
// Description: Animal class
// =========================================================

/*
 * Animal class contains the generic methods for handling animals
 * and has 3 child classes that are types of animals:
 * Mammals, Amphibians and Reptiles.
 */

#ifndef ANIMALES_H
#define ANIMALES_H

#include <sstream>
#include <string>

using namespace std;

// Animal class declaration
class Animal
{

protected:
    // Declaration of the instance variables
    string especie;
    int poblacion;

public:
    // Declaration of the class methods

    Animal() {} // El constructor default
    Animal(string esp, int pob)
    { // Constructor that receives the species and the population
        especie = esp;
        poblacion = pob;
    }

    // Getter of species and population

    /**
     * @brief Get the Especie object
     *
     * @return string
     */
    string getEspecie()
    {
        return especie;
    }

    /**
     * @brief Get the Poblacion object
     *
     * @return int
     */
    int getPoblacion()
    {
        return poblacion;
    }

    /**
     * @brief Method to convert the data of the object to string
     *
     * @return string
     */
    string toString() const
    {

        stringstream aux;
        aux << "La especie es " << especie << " su poblacion es de " << poblacion << " individuos."
            << "\n";
        return aux.str();
    }
};

#endif
