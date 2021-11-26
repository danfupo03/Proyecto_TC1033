#include <iostream>
#include <string>
#include "Mamiferos.h"
#include "Reptiles.h"
#include "Anfibios.h"


int main()
{
    //Objeto Mamíferos
    cout<<"----------Mamíferos----------"<<"\n"<<endl;
    
    Mamifero animal_1("Odocoileus virginianus (Venado de cola blanca)",50);
    cout<<"La especie "<<animal_1.getEspecie()<<","<<endl;
    cout<<"tiene una población de "<<animal_1.getPoblacion()<<" individuos,"<<endl;
    cout<<"a los "<<animal_1.getAños()<<" años."<<"\n"<<endl;
    
    animal_1.aumentaPoblacionMamiferos(3);
    
    cout<<animal_1.getAños()<<" años despues..."<<"\n"<<endl;
    
    cout<<"La especie "<<animal_1.getEspecie()<<","<<endl;
    cout<<"tiene aproximadamente "<<animal_1.getPoblacion()<<" individuos,"<<endl;
    cout<<"despues de "<<animal_1.getAños()<<" años."<<"\n"<<endl;
    
    //Objeto Reptiles
    cout<<"----------Reptiles----------"<<"\n"<<endl;
    
    Reptil animal_2("Crotaus asquilus (Cascabel oscura)", 50, 0);
    cout<<"La especie "<<animal_2.getEspecie()<<","<<endl;
    cout<<"tiene una población de "<<animal_2.getPoblacion()<<" individuos,"<<endl;
    cout<<"a los "<<animal_2.getAños()<<" años."<<endl;
    cout<<"Ha mudado de piel "<<animal_2.getPiel()<<" veces."<<"\n"<<endl;
    
    animal_2.aumentaPoblacionReptiles(3);
    animal_2.mudaPiel(3);
    
    cout<<animal_2.getAños()<<" años despues..."<<"\n"<<endl;
    
    cout<<"La especie "<<animal_2.getEspecie()<<","<<endl;
    cout<<"tiene aproximadamente "<<animal_2.getPoblacion()<<" individuos,"<<endl;
    cout<<"despues de "<<animal_2.getAños()<<" años."<<endl;
    cout<<"Uno de sus individuos ha mudado de piel aproximadamente "<<animal_2.getPiel()<<" veces."<<"\n"<<endl;
    
    //Objeto Anfibios
    cout<<"----------Anfibios----------"<<"\n"<<endl;
    
    Anfibio animal_3("Rana linnaeus (Rana de estanque)",50);
    cout<<"La especie "<<animal_3.getEspecie()<<","<<endl;
    cout<<"tiene una población de "<<animal_3.getPoblacion()<<" individuos,"<<endl;
    cout<<"a los "<<animal_3.getAños()<<" años."<<"\n"<<endl;
    
    animal_3.aumentaPoblacionAnfibios(3);
    
    cout<<animal_1.getAños()<<" años despues..."<<"\n"<<endl;
    
    cout<<"La especie "<<animal_3.getEspecie()<<","<<endl;
    cout<<"tiene aproximadamente "<<animal_3.getPoblacion()<<" individuos,"<<endl;
    cout<<"despues de "<<animal_3.getAños()<<" años."<<endl;
    
}
