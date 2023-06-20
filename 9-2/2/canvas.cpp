#include "canvas.h"
#include <iostream>
#include <vector>
using namespace std;
Canvas::Canvas(size_t row, size_t col){
    cwidth = row;
    cheight = col;
    newx = 0;
    newy = 0;
}
 
Canvas::~Canvas(){};
 
void Canvas::Resize(size_t w, size_t h){
    newx=w-cwidth;
    newy=h-cheight;
    cwidth=w;
    cheight=h;
 
    if(newx > 0){
        for(int y = 0; y < cheight; y++){
            for(int x= 0; x< newx; x++){
                drawC.at(y).push_back('.');
            }
        }
    }
 
    if (newy > 0){
        for(int y = 0; y < newy; y++){
            vector<char> temp;
            for(int x= 0; x< cwidth; x++){
                temp.push_back('.');
            }
            drawC.push_back(temp);  
        }
    }
}
 
bool Canvas::DrawPixel(int x, int y, char brush){
    if(x <cwidth && y < cheight){
        (drawC.at(y)).at(x) = brush;
        return true;
    }else{
        return false;
    }
}
 
void Canvas::Print(){
    int space = 0;
    if (cwidth > 10)
    {
        space = cwidth - 10;
    }
    cout << " ";
   
    if(space > 0){
        for(int a = 0; a < 10 ; a++){
            cout << a;
        }for(int a = 0; a<space; a++){
            cout << a;
        }
    }else{
        for(int a = 0; a < cwidth ; a++){
            cout << a;
        }
    }
    cout << endl;
 
    for(int i = 0; i< drawC.size(); i++){
        cout << i;
        for(int x = 0; x <(drawC.at(i)).size(); x++){
            cout << (drawC.at(i)).at(x);
        }
        cout << endl;
    }
 
}
 
void Canvas::Clear(){
    drawC.clear();
    for(int y = 0; y < cheight; y++){
        vector<char> temp;
        for(int x= 0; x< cwidth; x++){
            temp.push_back('.');
        }
        drawC.push_back(temp);  
    }
}
 
void Canvas::DrawBlank(char brush){
    for(int y = 0; y< drawC.size(); y++){
        for(int x = 0; x <(drawC.at(y)).size(); x++){
            if((drawC.at(y)).at(x) == brush){
                (drawC.at(y)).at(x) = '.';
            }
        }
    }
}
 
Shape::Shape(int tempx, int tempy, char tempb){
    x = tempx;
    y = tempy;
    brush = tempb;
}
 
Shape::~Shape(){}
 
void Shape::Remove(Canvas* canvas){
    canvas -> DrawBlank(brush);
}
 
Rectangle::Rectangle(int tempx, int tempy, int userWidth, int userHeight, char tempb): Shape(tempx, tempy, tempb), width(userWidth), height(userHeight){}
 
void Rectangle::Draw(Canvas* canvas){
    int Xcount = x;
    int Ycount = y;
    for(int a = 0; a <height; a++){
        Xcount = x;
        for(int b=0; b < width; b++){
            canvas -> DrawPixel(Xcount,Ycount,brush);
            Xcount += 1;
        }
        Ycount += 1;
    }
}
 
void Rectangle::Dump(){
    cout << "rect " << x << " " << y << " " << width << " " << height << " " << brush << endl;
}
UpTriangle::UpTriangle(int tempx, int tempy, int userHeight, char tempb): Shape(tempx, tempy, tempb), height(userHeight){}
 
void UpTriangle::Draw(Canvas* canvas){
    int Xcount = x;
    int Ycount = y;
    int triangleW = 1;
    for(int a = 0; a <height; a++){
        for(int b=0; b < triangleW; b++){
            canvas -> DrawPixel((Xcount+b),Ycount,brush);
        }
        Xcount -= 1;
        triangleW += 2;
        Ycount += 1;
    }
}
 
void UpTriangle::Dump(){
    cout << "tri_up " << x << " " << y << " " << height << " " << brush << endl;
}
DownTriangle::DownTriangle(int tempx, int tempy, int userHeight, char tempb): Shape(tempx, tempy, tempb), height(userHeight){}
 
void DownTriangle::Draw(Canvas* canvas){
    int Xcount = x;
    int Ycount = y;
    int triangleW = 1;
    for(int a = 0; a <height; a++){
        for(int b=0; b < triangleW; b++){
            canvas -> DrawPixel((Xcount+b),Ycount,brush);
        }
        Xcount -= 1;
        triangleW += 2;
        Ycount -= 1;
    }
}
 
void DownTriangle::Dump(){
    cout << "tri_down " << x << " " << y << " " << height << " " << brush << endl;
}
Diamond::Diamond(int tempx, int tempy, int userDistance, char tempb): Shape(tempx, tempy, tempb), distance(userDistance){}
 
void Diamond::Draw(Canvas* canvas){
    int Xcount = x;
    int Ycount = y;
    int triangleW = 1;
    for(int a = 0; a <= distance; a++){
        for(int b=0; b < triangleW; b++){
            canvas -> DrawPixel((Xcount+b),Ycount,brush);
        }
        Xcount -= 1;
        triangleW += 2;
        Ycount += 1;
    }  
    triangleW -= 2;
    Xcount += 1;    
    for(int a = 0; a <distance; a++){
        triangleW -= 2;
        Xcount += 1;
        for(int b=0; b < triangleW; b++){
            canvas -> DrawPixel((Xcount+b),Ycount,brush);
        }
        Ycount += 1;
    }
}
 
void Diamond::Dump(){
    cout << "diamond " << x << " " << y << " " << distance << " " << brush << endl;
}

