#include "animal.h"
#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
Animal::Animal(string _name, int _age){
    name=_name;
    age=_age;
}
void Animal::printInfo(){}
 
Zebra::Zebra(string _name, int _age, int _numStripes):Animal(_name,_age){
    numStripes=_numStripes;
   
}
void Zebra::printInfo(){
    cout<<"Zebra, Name: "<<Animal::name<<", Age: "<<age<<", Number of stripes: "<<numStripes<<endl;
}
 
Cat::Cat(string _name, int _age,string _favoriteToy):Animal(_name,_age){
    favoriteToy=_favoriteToy;
}
 
void Cat::printInfo(){
    cout<<"Cat, Name: "<<name<<", Age: "<<age<<", Favorite toy: "<<favoriteToy<<endl;
}

