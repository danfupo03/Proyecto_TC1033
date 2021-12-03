/*
 * Proyecto TC1033
 * Daniel Emilio Fuentes Portaluppi
 * A01708302
 * 03/12/21
 */

/*
 * Clase Reserva, maneja grupos de animales, divididos en
 * Mamiferos, Reptiles y Anfibios
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

const int MAX = 100; //constante de tamaño de arreglos

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
        // Metodos de la clase
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


/*
 * Constructor por default
 *
 * @return Objeto Reserva
 */
Reserva::Reserva(){

    imami = 0;
    irept = 0;
    ianfi = 0;
}

/*
 * Utliza el arreglo de tipo Mamifero.
 * Llena el arreglo con 2 ejemplos.
*/
void Reserva::creaMamiferos(){

    //Cada espacio de arreglo tiene diferente objeto y manda como
    //parametro sus variables instancia
    mami[0] = Mamifero("Venado", 50);
    imami += 1;
    mami[1] = Mamifero("Coyote", 75);
}

/*
 * Utliza el arreglo de tipo Reptil.
 * Llena el arreglo con 2 ejemplos.
*/
void Reserva::creaReptiles(){
    
    //Cada espacio de arreglo tiene diferente objeto y manda como
    //parametro sus variables instancia
    rept[0] = Reptil("Serpiente", 50);
    irept += 1;
    rept[1] = Reptil("Cocodrilo", 35);
    
}

/*
 * Utliza el arreglo de tipo Anfibio.
 * Llena el arreglo con 2 ejemplos.
*/
void Reserva::creaAnfibios(){

    //Cada espacio de arreglo tiene diferente objeto y manda como
    //parametro sus variables instancia
    anfi[0] = Anfibio("Rana", 200);
    ianfi += 1;
    anfi[1] = Anfibio("Ajolote", 125);

}

/*
 * Utiliza el arreglo Mamifero y su indice.
 * Recorra todo el arreglo, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
*/

void Reserva::muestraMamiferos(){

  //recorre el arreglo e imprime cada objeto.
    for(int i = 0 ; i <= imami ; i++){
        cout << mami[i].toString();
    }

}

/*
 * Utiliza el arreglo Reptil y su indice.
 * Recorra todo el arreglo, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
*/
void Reserva::muestraReptiles(){

    for(int i = 0 ; i <= irept ; i++){
        cout << rept[i].toString();
    }

}

/*
 * Utiliza el arreglo Anfibio y su indice.
 * Recorra todo el arreglo, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
*/
void Reserva::muestraAnfibios(){

    for(int i = 0 ; i <= ianfi ; i++){
        cout << anfi[i].toString();
    }

}

/*
 * Utiliza arreglo de Mamifero y su ultimo indice.
 * Recibe la especie y poblacion.
 * El metodo crea el objeto Mamifero y lo
 * agrega al arreglo
 */
void Reserva::agregaMamifero(string especie, int poblacion){

    imami += 1;
    Mamifero aux(especie, poblacion);
    mami[imami] = aux;

}

/*
 * Utiliza arreglo de Reptil y su ultimo indice.
 * Recibe la especie y poblacion.
 * El metodo crea el objeto Reptil y lo
 * agrega al arreglo
 */
void Reserva::agregaReptil(string especie, int poblacion){

    irept += 1;
    Reptil aux(especie, poblacion);
    rept[irept] = aux;

}

/*
 * Utiliza arreglo de Anfibio y su ultimo indice.
 * Recibe la especie y poblacion.
 * El metodo crea el objeto Anfibio y lo
 * agrega al arreglo
 */
void Reserva::agregaAnfibio(string especie, int poblacion){

    ianfi += 1;
    Anfibio aux(especie, poblacion);
    anfi[ianfi] = aux;

}

#endif 
