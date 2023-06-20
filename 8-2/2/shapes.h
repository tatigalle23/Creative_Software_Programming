#pragma once
#include<string>
#include<iostream>

class Shape {
    public:
        Shape();
        Shape(int varx, int vary, int width,int height, std::string brush, int diamond);
        double GetArea() ;
        int GetPerimeter() ;
        void Draw(int canvas_width, int canvas_height) ;
    protected:
        int w;
        int h;
        std::string b;
        int x,y;
        int di; //to identify what shape its
 
};
class Diamond: public Shape{
    public:
        Diamond(int varx, int vary, int width, std::string brush);
        void print();
 
};
class Square: public Shape{
    public:
        Square (int varx, int vary, int width, std::string brush); //Implement to call the parent class's constructor properly
        void print();
 
};
class Rectangle: public Shape{
    public:
        Rectangle(int varx, int vary, int width,int height, std::string brush);
        void print();
};

