#include "rect.h"
#include<iostream>
#include<string>
using namespace std;
 
Shape::Shape(int width, int height){
    w=width;
    h=height;
}
Square::Square(int width):Shape(width,0){
 
}
NonSquare::NonSquare(int width, int height):Shape(width,height){}
int Shape::getArea(){
    if(h==0){
        return w*w;
    }else{
        return w*h;
    }
}
int Shape::getPerimeter(){
    if(h==0){
        return 2*w+2*w;
    }else{
        return 2*w+2*h;
    }
   
}
void Square::print(){
    cout<<w<<"x"<<w<<" Square"<<endl;
    cout<<"Area: "<<getArea()<<endl;
    cout<<"Perimeter: "<<getPerimeter()<<endl;
}
void NonSquare::print(){
    cout<<w<<"x"<<h<<" Nonsquare"<<endl;
    cout<<"Area: "<<getArea()<<endl;
    cout<<"Perimeter: "<<getPerimeter()<<endl;
}

