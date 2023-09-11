// ======================================================================
// File: main.cpp
// Author: Daniel Emilio Fuentes Portaluppi
// Date: 03/12/21
// Description: This is a project for the class of Computational
//              Thinking Oriented to Objects. It is a program that
//              captures different species of animals with their
//              respective populations, and allows us to see them later.
// Compile: g++ main.cpp -o main
// Run: ./main
// ======================================================================

// =========================================================
// Notes:
// 1. When entering a new species, do not write space
//    everything must be together.
//
// 2. If you write a number different from the menu options
//    the code will close automatically.
// =========================================================

// Libraries
#include <iostream>  //to print.
#include "Reserva.h" //where are all the objects in my project

using namespace std;

/**
 * @brief Menu function
 *
 */
void menu()
{

  // Prints the menu
  cout << "Menu:\n";
  cout << "1. Mostrar mamiferos \n";
  cout << "2. Mostrar reptiles \n";
  cout << "3. Mostrar anfibios \n";
  cout << "4. Agregar mamifero \n";
  cout << "5. Agregar reptil \n";
  cout << "6. Agregar anfibio \n";
  cout << "7. Salir \n";
}

int main(int argc, char *argv[])
{

  Reserva reserva;
  reserva.creaMamiferos();
  reserva.creaReptiles();
  reserva.creaAnfibios();
  string temp_especie;
  int temp_poblacion;
  int opcion = 0;

  // Cycle that allows the user to choose the option he wants
  while (opcion < 7 && opcion > -1)
  {

    // Prints the menu
    menu();
    // Reads the option
    cin >> opcion;

    // Switch that allows the user to choose the option he wants
    switch (opcion)
    {

    // Case 1 that prints the animals of type Mammal
    case 1:
      reserva.muestraMamiferos();
      break;

    // Case 2 that prints the animals of type Reptile
    case 2:
      reserva.muestraReptiles();
      break;

    // Case 3 that prints the animals of type Amphibian
    case 3:
      reserva.muestraAnfibios();
      break;

      // Case 4 adds a mammal requesting the species and the population
    case 4:
      cout << "Dime la especie: ";
      cin >> temp_especie;
      cout << "Dime la poblacion: ";
      cin >> temp_poblacion;
      reserva.agregaMamifero(temp_especie, temp_poblacion);
      break;

    // Case 5 adds a reptile requesting the species and the population
    case 5:
      cout << "Dime la especie: ";
      cin >> temp_especie;
      ;
      cout << "Dime la poblacion: ";
      cin >> temp_poblacion;
      reserva.agregaReptil(temp_especie, temp_poblacion);
      break;

    // Case 6 adds an amphibian requesting the species and the population
    case 6:
      cout << "Dime la especie: ";
      cin >> temp_especie;
      cout << "Dime la poblacion: ";
      cin >> temp_poblacion;
      reserva.agregaAnfibio(temp_especie, temp_poblacion);
      break;
    }
  }
}
