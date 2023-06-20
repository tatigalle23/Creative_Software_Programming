#include "number.h"
#include <iostream>
#include<string>
 
using namespace std;
int main(){
   string a;
   int b;
   cin>>a;
   Cube cube;
   while(a!="quit"){
      cin>>b;
      if(a=="number"){
        cube.setNumber(b);
        cout<<"getNumber(): "<<cube.getNumber()<<endl;
        cin>>a;
 
      }else if(a=="square"){
        cube.setNumber(b);
        cout<<"getNumber(): "<<cube.getNumber()<<endl;
        cout<<"getSquare(): "<<cube.getSquare()<<endl;
        cin>>a;
      }else if(a=="cube"){
        cube.setNumber(b);
        cout<<"getNumber(): "<<cube.getNumber()<<endl;
        cout<<"getSquare(): "<<cube.getSquare()<<endl;
        cout<<"getCube(): "<<cube.getCube()<<endl;
        cin>>a;
      }
   }
}

