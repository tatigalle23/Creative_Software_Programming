#include "canvas.h"
#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int cw,ch;
    string input;
    vector<Shape*> object;
    int a,b,c,d;
    char e;    
 
    cin >> cw >> ch;
    Canvas*  canvas = new Canvas(cw, ch);
    canvas -> Clear();
    canvas -> Print();
    cin >> input;
 
    while(input!= "quit"){
        if(input == "add"){
            cin>> input;
            if(input == "rect"){
                cin>>a>>b>>c>>d>>e;            
                Shape* rect=new Rectangle(a,b,c,d,e);
                object.push_back(rect);
                rect->Draw(canvas);
                cin>>input;
            }else if(input == "tri_up"){
                cin>>a>>b>>d>>e;                
                Shape* triUp = new UpTriangle(a,b,d,e);
                object.push_back(triUp);
                triUp->Draw(canvas);
                cin>>input;
            }else if(input == "tri_down"){
                cin>>a>>b>>d>>e;    
                Shape* triDown = new DownTriangle(a,b,d,e);
                object.push_back(triDown);
                triDown->Draw(canvas);
                cin >> input;
            }else if(input == "diamond"){
                cin>>a>>b>>d>>e;                
                Shape* diamond = new Diamond(a,b,d,e);
                object.push_back(diamond);
                diamond-> Draw (canvas);
                cin >> input;
            }
        }else if(input == "draw"){
          canvas -> Print();
            cin >> input;
 
        }else if(input == "dump"){
            for(int i=0;i<object.size();i++){
                cout << i << " ";
                (object.at(i)) -> Dump();
            }
            cin >> input;
        }else if(input == "delete"){
            int index;
            cin >> index;
            if(index < object.size()){
                object.at(index) -> Remove(canvas);
                object.erase(object.begin() + index);
            }cin >> input;
        }else if(input == "resize"){
            int x = 0;
            int y = 0;
            cin>>x>>y;
 
          canvas->Resize(x, y);
          canvas->Clear();
            for(int i=0;i<object.size();i++){
                object.at(i) -> Draw (canvas);
            }
            cin >> input;
        }
    }
    delete  canvas;
 
    for(int i=0; i<object.size(); i++){
        delete object[i];        
    }
}

