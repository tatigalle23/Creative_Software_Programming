#pragma once
#include <vector>
 
using namespace std;
 
class Canvas{
    public:
    Canvas(size_t row, size_t col);
    ~Canvas();
    void Resize(size_t w, size_t h);
    bool DrawPixel(int x,int y, char brush);
    void Print();
    void Clear();
    void DrawBlank(char brush);
    private:
    size_t cwidth;
    size_t cheight;
    vector<vector <char>> drawC;
    int newx;
    int newy;
};
class Shape{
    public:
    Shape(int tempx, int tempy, char tempb);
    virtual ~Shape();
    virtual void Draw(Canvas* canvas){};
    virtual void Dump(){};
    void Remove(Canvas* canvas);
    protected:
    int x,y;
    char brush;
 
};
class Rectangle: public Shape{
    public:
    Rectangle(int tempx, int tempy, int tempw, int temph, char tempb);
    virtual void Draw(Canvas* canvas);
    virtual void Dump();
    protected:
    int width;
    int height;
 
};
class UpTriangle: public Shape{
    public:
    UpTriangle(int tempx, int tempy, int temph, char tempb);
    virtual void Draw(Canvas* canvas);
    virtual void Dump();
    protected:
    int height;
 
};
class DownTriangle: public Shape{
    public:
    DownTriangle(int tempx, int tempy, int temph, char tempb);
    virtual void Draw(Canvas* canvas);
    virtual void Dump();
    protected:
    int height;
};
class Diamond: public Shape{
    public:
    Diamond(int tempx, int tempy, int userDistance, char tempb);
    virtual void Draw(Canvas* canvas);
    virtual void Dump();
    protected:
    int distance;  
 
};

