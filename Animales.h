/*
 * Proyecto TC1033
 * Daniel Emilio Fuentes Portaluppi
 * A01708302
 * 03/12/21
 */

#ifndef ANIMALES_H
#define ANIMALES_H

#include<sstream>
#include<string>

using namespace std;

class Animal{

    protected:
        string especie;
        int poblacion;
        int years;
        int mortalidad = 0;
        int i = 0;
        
    public:
    
        //Constructor
        Animal(){}
        Animal(string esp, int pob, int y){
            especie = esp;
            poblacion = pob;
            years = y;
        }

        //Getters
        string getEspecie(){
            return especie;
        }
        
        int getPoblacion(){
            return poblacion;
        }
        
        int getAños(){
            return years;
        }

        //Setters
        void setYears(int y){
            years = y;
        }
        
        string toString()const{

            stringstream aux;
            aux << "La especie es " << especie << " su poblacion es de "<< poblacion << " individuos." << "\n";
            return aux.str();
        }
};

#endif
