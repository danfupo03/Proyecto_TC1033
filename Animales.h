#ifndef ANIMALES_H
#define ANIMALES_H

#include<iostream>

using namespace std;

class Animal{

    protected:
        string especie;
        int poblacion;
        int años;
        
    public:
    
        int mortalidad = 0;
        int i = 0;
    
        //Constructor
        Animal(string esp, int pob, int y){
            especie = esp;
            poblacion = pob;
            años = y;
        }

        //Getters
        string getEspecie(){
            return especie;
        }
        
        int getPoblacion(){
            return poblacion;
        }
        
        int getAños(){
            return años;
        }

        //Setters
        void setAños(int y){
            años = y;
        }
        
};

#endif
