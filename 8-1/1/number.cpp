#include "number.h"
#include <iostream>
 
int Square::getSquare(){
    int temp=_num*_num;
    return temp;
}
int Cube::getCube(){
    int temp=_num*_num*_num;
    return temp;
}

