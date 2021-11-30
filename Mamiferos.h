//#ifndef MAMIFEROS_H_
#define MAMIFEROS_H_

#include<string>
#include<iostream>
#include "Animales.h"

using namespace std;

class Mamifero: public Animal
{

    public:
        //Constructor
        Mamifero(){}
        Mamifero(string esp, int pob): Animal(esp, pob, 0){
        }
    
};
