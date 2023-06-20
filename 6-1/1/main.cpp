#include "shapes.h"
#include<iostream>
#include<cstdlib>
 
int main(){  
   
    while(1){
        char a;
        cout<<"Shape?"<<endl;
        cin>>a;
        if(a=='C'){
            int x,y,r;
            cin>>x>>y>>r;
            Circle circle=Circle(x,y,r);
            circle.area();
            circle.perimeter();            
        }else if(a=='R'){
            int x1,y1,x2,y2;
            cin>>x1>>x2>>y1>>y2;
            Rectangle rectangle=Rectangle(x1,y1,x2,y2);
            rectangle.area();
            rectangle.perimeter();
        }else if(a=='Q'){
            break;        
        }  
    }
 
}

