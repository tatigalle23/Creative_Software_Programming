#include <string>
#include <iostream>
#include "minesweeper.h"
using namespace std;

Minesweeper::Minesweeper(int _width, int _height, vector<string> _mMap){
        mWidth = _width;
        mHeight = _height;
        mMap = _mMap;
}
Minesweeper:: ~Minesweeper(){};
 
   
bool Minesweeper::setMap(size_t _width, size_t _height, vector<string>& _map){
    return false;
}
bool Minesweeper::toggleMine(int _x, int _y){
    string string {""};  
 
    if (mineExist(_x, _y) == true){
        string = mMap.at(_x);
        string[_y] = '.';
        mMap.at(_x) = string;
    }else if (mineExist(_x, _y) == false){
        string = mMap.at(_x);
        string[_y] = '*';
        mMap.at(_x) = string;
 
    }        
    return true;
 
}
bool Minesweeper::mineExist(int x, int y){
    string cheking;
    cheking=mMap.at(x);
    char comp=cheking[y];
 
    if (comp=='*'){
        return true;
    }else{
        return false;
    }
}
int Minesweeper::mines(int x, int y){
    int count = 0;
 
    if (get(x-1, y) == 'x'){
        if (mineExist (x-1, y) == true){
                count ++;
        }
    }
    if (get(x+1, y) == 'x'){
        if (mineExist (x+1, y) == true){
            count ++;
        }
    }
    if (get(x, y+1) == 'x'){
        if (mineExist (x, y+1) == true){
            count ++;
        }
    }
    if (get(x, y-1) == 'x'){
        if (mineExist (x, y-1) == true){
                count ++;
        }
    }
    if (get(x-1, y+1) == 'x'){
        if (mineExist (x-1, y+1) == true){
            count ++;
        }
    }
    if (get(x-1, y-1) == 'x'){
        if (mineExist (x-1, y-1) == true){
            count ++;
        }
    }
    if (get(x+1, y+1) == 'x'){
        if (mineExist (x+1, y+1) == true){
            count ++;
        }
    }
    if (get(x+1, y-1) == 'x'){
        if (mineExist (x+1, y-1) == true){
            count ++;
        }
    }
    return count;
}
 
size_t Minesweeper::width() const{
        return mWidth;
}
size_t Minesweeper::height() const{
        return mHeight;
}
char Minesweeper::get(int _x, int _y) const{  
    if ((_x >= 0) && (_x < mHeight) && (_y >= 0) && (_y < mWidth)){
        return ('x');  
    }
    return (' ');  
}
int Minesweeper::touchCount() const{
        return mTouchCount;
}
 
bool Minesweeper::touchMap(int _x, int _y){
    string a;
   
    a=mMap[_x][_y];
    if (a=="*"){
        return true;
    }else return false;
 
}
void Minesweeper::touchMapShow(int _x, int _y, vector<string>& _map, vector<string>& _numMap){
    int x=mWidth;
    int y=mHeight;
    _numMap[_x][_y]=_map[_x][_y];  
   
    for (int i = 0; i<y; i++){
        cout<<_numMap[i]<<endl;                  
                   
    }  
 
}

