// =========================================================
// File: Reserva.h
// Author: Daniel Emilio Fuentes Portaluppi
// Date: 03/12/21
// Description:  Reserve class, works with groups of animals,
//               divided in Mamiferos (Mammals), Reptiles(Reptiles)
//               and Anfibios (Amphibians)
// =========================================================

#ifndef RESERVA_H_
#define RESERVA_H_

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

#include "Animales.h"
#include "Mamiferos.h"
#include "Reptiles.h"
#include "Anfibios.h"

const int MAX = 100; // Constant for the size of the array

class Reserva
{
private:
    // Declaration of the arrays
    Mamifero mami[MAX];
    Reptil rept[MAX];
    Anfibio anfi[MAX];
    int imami, irept, ianfi;

public:
    // Consrtuctor
    Reserva();

    // Class methods
    void creaMamiferos();
    void creaReptiles();
    void creaAnfibios();

    void muestraMamiferos();
    void muestraReptiles();
    void muestraAnfibios();

    void agregaMamifero(string especie, int poblacion);
    void agregaReptil(string especie, int poblacion);
    void agregaAnfibio(string especie, int poblacion);
};

/**
 * @brief Construct a new Reserva:: Reserva object
 *
 */
Reserva::Reserva()
{
    imami = 0;
    irept = 0;
    ianfi = 0;
}

/**
 * @brief Create a new Mamiferos object
 *
 */
void Reserva::creaMamiferos()
{

    /*
    Each array space has a different object and sends as
    parameter its instance variables.
    */
    mami[0] = Mamifero("Venado", 50);
    imami += 1;
    mami[1] = Mamifero("Coyote", 75);
}

/**
 * @brief Create a new Reptiles object
 *
 */
void Reserva::creaReptiles()
{

    /*
    Each array space has a different object and sends as
    parameter its instance variables.
    */
    rept[0] = Reptil("Serpiente", 50);
    irept += 1;
    rept[1] = Reptil("Cocodrilo", 35);
}

/**
 * @brief Create a new Anfibios object
 *
 */
void Reserva::creaAnfibios()
{

    // Cada espacio de arreglo tiene diferente objeto y manda como
    // parametro sus variables instancia
    anfi[0] = Anfibio("Rana", 200);
    ianfi += 1;
    anfi[1] = Anfibio("Ajolote", 125);
}

/**
 * @brief Show the Mamiferos object
 *
 */
void Reserva::muestraMamiferos()
{

    // recorre el arreglo e imprime cada objeto.
    for (int i = 0; i <= imami; i++)
    {
        cout << mami[i].toString();
    }
}

/**
 * @brief Show the Reptiles object
 *
 */
void Reserva::muestraReptiles()
{

    for (int i = 0; i <= irept; i++)
    {
        cout << rept[i].toString();
    }
}

/**
 * @brief Show the Anfibios object
 *
 */
void Reserva::muestraAnfibios()
{

    for (int i = 0; i <= ianfi; i++)
    {
        cout << anfi[i].toString();
    }
}

/**
 * @brief Add a new Mamifero object
 *
 * @param especie
 * @param poblacion
 */
void Reserva::agregaMamifero(string especie, int poblacion)
{

    imami += 1;
    Mamifero aux(especie, poblacion);
    mami[imami] = aux;
}

/**
 * @brief Add a new Reptil object
 *
 * @param especie
 * @param poblacion
 */
void Reserva::agregaReptil(string especie, int poblacion)
{

    irept += 1;
    Reptil aux(especie, poblacion);
    rept[irept] = aux;
}

/**
 * @brief Add a new Anfibio object
 *
 * @param especie
 * @param poblacion
 */
void Reserva::agregaAnfibio(string especie, int poblacion)
{

    ianfi += 1;
    Anfibio aux(especie, poblacion);
    anfi[ianfi] = aux;
}

#endif
