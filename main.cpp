/*
 * Proyecto Reserva
 * Daniel Emilio Fuentes Portaluppi
 * A01708302
 * 03/12/2021
 */

/*
 * Descripcion este es un proyecto para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que captura
 * diferentes especies de animales con sus respectivas poblaciones, y nos
 * permite verlos después. 
*/

/*
 *Nota
 *A la hora de introducir una especie nueva
 *no escribir espacio
 *todo debe estar junto
 */

//Bibliotecas
#include <iostream>   //para imprimir.
#include "Reserva.h" //donde estan todos los objetos de mi proyecto

using namespace std;

//Procedimiento menu
void menu(){

    //Imprime las opciones que va a tener el sistema
    cout << "Menu:\n";
    cout << "1. Mostrar mamiferos \n";
    cout << "2. Mostrar reptiles \n";
    cout << "3. Mostrar anfibios \n";
    cout << "4. Agregar mamifero \n";
    cout << "5. Agregar reptil \n";
    cout << "6. Agregar anfibio \n";
    cout << "7. Salir \n";
}

int main(int argc, char* argv[]){

      Reserva reserva;
      reserva.creaMamiferos();
      reserva.creaReptiles();
      reserva.creaAnfibios();
      string temp_especie;
      int temp_poblacion;
      int opcion = 0;

    //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
    while(opcion < 7 && opcion > -1){

          //Impresion de menu
          menu();
          //Leer indice que selecciona la opcion del menu
          cin >> opcion;

          //Switch donde dependiendo la eleccion efectua un diferente procedimiento
          switch(opcion){

              //Caso 1 que imprime los animales de tipo Mamifero
              case 1:
                  reserva.muestraMamiferos();
                break;

              //Caso 2 que imprime los animales de tipo Reptil
              case 2:
                  reserva.muestraReptiles();
                break;

              //Caso 3 que imprime los animales de tipo Anfibio
              case 3:
                  reserva.muestraAnfibios();
                break;

             //Caso 4 agrega un mamifero solicitando la especie y la poblacion
              case 4:
                  cout<< "Dime la especie: " ;
                  cin >> temp_especie;
                  cout<< "Dime la poblacion: " ;
                  cin >> temp_poblacion;
                  reserva.agregaMamifero(temp_especie, temp_poblacion);
                break;

              //Caso 5 agrega un reptil solicitando la especie y la poblacion
              case 5:
                  cout<< "Dime la especie: " ;
                  cin >> temp_especie;;
                  cout<< "Dime la poblacion: " ;
                  cin >> temp_poblacion;
                  reserva.agregaReptil(temp_especie, temp_poblacion);
                break;

              //Caso 6 agrega un anfibio solicitando la especie y la poblacion
              case 6:
                  cout<< "Dime la especie: " ;
                  cin >> temp_especie;
                  cout<< "Dime la poblacion: " ;
                  cin >> temp_poblacion;
                  reserva.agregaAnfibio(temp_especie, temp_poblacion);
                break;
          }
    }
}
