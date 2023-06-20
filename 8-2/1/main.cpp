#include "rect.h"
#include<iostream>
#include<string>
using namespace std;
 
 
int main(){
    string a;
    int b;
    int c;
    cin>>a;
    while(a!="quit"){
        if(a=="nonsquare"){
            cin>>b>>c;
            NonSquare nonsquare(b,c);
            nonsquare.print();
            cin>>a;
        }else if(a=="square"){
            cin>>b;
            Square square(b);
            square.print();
            cin>>a;
        }
    }
}
 

