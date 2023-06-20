#include<iostream>
#include<cstdlib>
#include"shapes.h"

using namespace std;

Circle::Circle(int _x,int _y, int _r){x=_x;y=_y;r=_r;}
Rectangle::Rectangle(int _x1,int _y1,int _x2,int _y2){x1=_x1;y1=_y1;x2=_x2;y2=_y2;}
Circle::~Circle(){}
Rectangle::~Rectangle(){}
void Circle::area( ){
    double a=3.14*r;
    cout<<"Area: "<<a<<", ";
   
}
void Circle::perimeter(){
    double p=6.28*r;
    cout<<"Perimeter: "<<p<<endl;
}
 
void Rectangle::area(){
    int result=(y1-x1)*(x2-y2);
    cout<<"Area: "<<result<<", ";
}
 
void Rectangle::perimeter(){
    int result=2*((y1-x1)+(x2-y2));
    cout<<"Perimeter: "<<result<<endl;
}

