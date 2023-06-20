#include "drop.h"
#include<iostream>
#include<string>
#include <cmath>
using namespace std;
 
int main(){
    string a;
    int b;
    cin>>a;
   
    while(a!="quit"){
        cin>>b;
        if(a=="Earth"){
            Earth earth;
            earth.drop(b);
            earth.simulate(b);
            cin>>a;
        }else if(a=="Moon"){
            Moon moon;
            moon.drop(b);
            moon.simulate(b);
            cin>>a;
        }
    }
}

