#include "shapes.h"
#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string a;
    string s;
    int b,c,d,e;
    int cw,ch;    
    cin>>cw>>ch;
    cin>>a;
    while(a!="quit"){
        if(a=="rect"){
            cin>>b>>c>>d>>e>>s;            
            Rectangle rectangle(b,c,d,e,s);
            rectangle.print();
            rectangle.Draw(cw,ch);
           
            cin>>a;
        }else if(a=="square"){
            cin>>b>>c>>d>>s;
            Square square(b,c,d,s);
            square.print();
            square.Draw(cw,ch);
            cin>>a;
        }
        else if(a=="diamond"){
            cin>>b>>c>>d>>s;
            Diamond diamond(b,c,d,s);
            diamond.print();
            diamond.Draw(cw,ch);        
            cin>>a;
        }
    }
}

