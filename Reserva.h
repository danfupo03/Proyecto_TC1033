/*
 * Proyecto TC1033
 * Daniel Emilio Fuentes Portaluppi
 * A01708302
 * 03/12/21
 */

/*
 * Clase Reserva, maneja los animales, divididos en
 * Mamiferos, Reptiles e Insectos
 *
 */

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

const int MAX = 100; //constante de tama�o de arreglos

class Reserva {


    private:
        //Declara las variables de instancia
        Mamifero mami[MAX];
        Reptil rept[MAX];
        Anfibio anfi[MAX];
        int imami, irept, ianfi;

    public :
        //Constuctor
        Reserva();
        // Metodos miembros de la clase
        void creaMamiferos();
        void creaReptiles();
        void creaAnfibios();
    
        void muestraMamiferos();
        void muestraReptiles();
        void muestraAnfibios();

        void agregaMamifero(string especie, int poblacion);
        void agregaReptil(string especie, int poblacion, int piel);
        void agregaAnfibio(string especie, int poblacion);

};


Reserva::Reserva(){

    imami = 0;
    irept = 0;
    ianfi = 0;
}


void Reserva::creaMamiferos(){

    //Cada espacio de arreglo tiene diferente objeto y manda como
    //parametro sus variables instancia
    mami[0] = Mamifero("Odocoileus virginianus (Venado de cola blanca)", 50);
                
}

void Reserva::creaReptiles(){
    
    rept[0] = Reptil("Crotaus asquilus (Cascabel oscura)", 50, 0);
    
}

void Reserva::creaAnfibios(){

    anfi[0] = Anfibio("Rana linnaeus (Rana de estanque)", 50);

}

/**
 * Utiliza el arreglo Asalariado y su indice.
 * Recorra todo el arreglo, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
 *
 * @param
 * @return
*/
void Reserva::muestraMamiferos(){

  //recorre el arreglo e imprime cada objeto.
    for(int i = 0 ; i <= imami ; i++){
        cout << mami[i].toString();
    }

}

/**
 * Utiliza el arreglo PorHora y su indice.
 * Recorra todo el arreglo, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
 *
 * @param
 * @return
*/
void Reserva::muestraReptiles(){

    for(int i = 0 ; i <= irept ; i++){
        cout << rept[i].toString();
    }

}

/**
 * Utiliza el arreglo Practicante y su indice.
 * Recorra todo el arreglo, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
 *
 * @param
 * @return
 */
void Reserva::muestraAnfibios(){

    for(int i = 0 ; i <= ianfi ; i++){
        cout << anfi[i].toString();
    }

}

/**
 * Utiliza arreglo de Asalariado y su ultimo indice.
 * Recibe el nombre y salario.
 * El metodo genera el nuevo id, crea el objeto Asalariado y lo
 * agrega al arreglo
 *
 * @param
 * @return
 */
void Reserva::agregaMamifero(string especie, int poblacion){

    imami += 1;
    Mamifero aux(especie, poblacion);
    mami[imami] = aux;

}

/**
 * Utiliza arreglo de PorHora y su ultimo indice.
 * Recibe el nombre, horas trabajadas y su salario
 * El metodo genera el nuevo id, crea el objeto PorHora y lo agrega al arreglo
 *
 * @param
 * @return
 */
void Reserva::agregaReptil(string especie, int poblacion,int piel){

    irept += 1;
    Reptil aux(especie, poblacion, piel);
    rept[irept] = aux;

}

/**
 * Utiliza arreglo de Practicante y su ultimo indice.
 * Recibe el nombre, horas trabajadas y su salario
 * El metodo genera el nuevo id, crea el objeto PorHora y lo agrega al arreglo
 *
 * @param
 * @return
 */
void Reserva::agregaAnfibio(string especie, int poblacion){

    ianfi += 1;
    Anfibio aux(especie, poblacion);
    anfi[ianfi] = aux;

}

#endif // EMPRESA_H_
