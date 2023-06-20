#ifndef shapes_h
#define shapes_h
 
#include<iostream>
#include<cstdlib>
using namespace std;
class Circle{
    private:
        int x,y,r;
    public:
        Circle(int,int,int);
        ~Circle();
        void area();
        void perimeter();
 
};
class Rectangle{
    private:
        int x1,y1,x2,y2;
    public:
        Rectangle(int, int, int, int);
        ~Rectangle();
        void area();
        void perimeter();
};
#endif /* shapes_h */

