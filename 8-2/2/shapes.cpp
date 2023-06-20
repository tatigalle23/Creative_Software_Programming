#include "shapes.h"
#include<iostream>
#include <string>
using namespace std;
 
Shape::Shape(){}
Shape::Shape(int topx, int topy, int width,int height, string brush, int diamond){
    w=width;
    h=height;
    x=topx;
    y=topy;
    b=brush;
    di=diamond;
}
void Shape::Draw(int canvas_width, int canvas_height) {
    if(di==0){
        cout<<" ";
        int xcount=x+w-1;
        int ycount=y+w-1;
        if(xcount>canvas_width){
                xcount=canvas_width;
        }
        if(ycount>canvas_height){
            ycount=canvas_height;
        }
        for(int j=0; j<canvas_height; j++){
            cout<<j;
        }cout<<endl;
        for(int i=0; i<canvas_height;i++){
            cout<<i;
            for(int j=0; j<canvas_width; j++){    
                if(i>=y && j>=x && i<=ycount && j<=xcount){      
                    cout<<b;
                }else{
                    cout<<".";
                }                        
            }cout<<endl;
        }
    }else if(di==1){
        cout<<" ";
        int xcount=x+w-1;
        int ycount=y+h-1;
        if(xcount>canvas_width){
            xcount=canvas_width;
        }
        if(ycount>canvas_height){
            ycount=canvas_height;
        }
        for(int j=0; j<canvas_height; j++){
            cout<<j;
        }cout<<endl;
        for(int i=0; i<canvas_height;i++){
            cout<<i;
            for(int j=0; j<canvas_width; j++){    
                if(i>=y && j>=x && i<=ycount && j<=xcount){      
                    cout<<b;
                }else{
                    cout<<".";
                }                        
            }cout<<endl;
        }
    }else if(di==2){
        cout<< " ";
        int hd=(2 *w)+1;
        int wd=hd;
        int varx=x;
        int vary=y;
        for(int k = 0; k<canvas_width; k++){
            cout << k;
        }  
        cout << endl;
 
        int bcount=1;  
        int xcount=0;
 
        for(int i=0; i<canvas_height; i++){
            cout << i;
            xcount = 0;
 
            if(i != vary){
                for(int j = 0; j < canvas_width; j++){
                    cout << ".";
                }cout << endl;
            }else if (i == vary){
                for(int j = 0; j < canvas_width; j++){
                    if (xcount < canvas_width){
                        if (j == varx){
                            for (int k = 0; k < bcount; k++){  
                                cout << b;
                            }
                            varx --;
                            xcount += bcount;
                            bcount += 2;  
                        }else{
                            cout << ".";
                            xcount ++;
                        }
                    }  
                }
                cout << endl;
                if (bcount > hd){
                    break;
                }
                vary ++;
            }
        }
 
        vary=y+w+1;
        varx=x-(w -1);
        bcount=wd-2;
 
 
        for(int i = vary; i <canvas_height; i++){
            cout << i;
            xcount = 0;
 
            if(i != vary){
                for(int j = 0; j < canvas_width; j++){
                    cout << ".";
                }cout << endl;
            }else if (i == vary){
                for(int j = 0; j <= canvas_width; j++){
                    if (xcount < canvas_width){
                        if (j == varx){
                            for (int k = 0; k < bcount; k++){  
                                cout << b;
                            }
                            xcount += bcount;
 
                            if (bcount > 0){
                                bcount -= 2;
                                varx++;
                            }
                            if (j < x){
                                j+= bcount;
                            }
                        }else{
                            cout << ".";
                            xcount++;
                        }
                    }  
                }
                cout << endl;
                vary++;  
            }
        }
    }
}
double Shape::GetArea() {
    double temp;
    if(di==0){
        temp= w*w;
    }else if(di==1){
        temp= w*h;
    }else if(di==2){
	double y2=y*1.0;
        temp=y2*y2/2;
    }
    return temp;
}
int Shape::GetPerimeter(){
    int temp;
    if(di==0){
        temp=2*w+2*w;
    }else if(di==1){
        temp=2*w+2*h;
    }else if(di==2){
        temp=(w+1)*4;
    }
    return temp;
}
Square::Square (int topx, int topy, int width, string brush):Shape(topx,topy, width,0,brush,0){}
void Square::print(){
    cout<<"Area: "<<GetArea()<<endl;
    cout<<"Perimeter: "<<GetPerimeter()<<endl;
}
Rectangle::Rectangle(int topx, int topy, int width,int height, string brush):Shape(topx,topy, width,height,brush,1){}
void Rectangle::print(){
    cout<<"Area: "<<GetArea()<<endl;
    cout<<"Perimeter: "<<GetPerimeter()<<endl;
}
Diamond::Diamond(int topx, int topy, int width, string brush):Shape(topx,topy, width,0,brush,2){}
void Diamond::print(){
    cout<<"Area: "<<GetArea()<<endl;
    cout<<"Perimeter: "<<GetPerimeter()<<endl;
}

