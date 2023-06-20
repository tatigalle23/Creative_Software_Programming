#include "animal.h"
#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
int main(){
    vector<Animal*> animals;
    string input;
    cin>>input;
    while(input!="0"){
        if (input=="z"){
            string a;
            int b,c;
            cin>>a>>b>>c;
            animals.push_back(new Zebra(a,b,c));
            cin>>input;
        }else if (input=="c"){
            string a,c;
            int b;
            cin>>a>>b>>c;
            animals.push_back(new Cat(a,b,c));
            cin>>input;
        }
    }
    for(int i=0; i<animals.size(); i++){
        animals[i]->printInfo();      
    }
    for(int i=0; i<animals.size(); i++){
        delete animals[i];        
    }
}

