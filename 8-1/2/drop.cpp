#include "drop.h"
#include<iostream>
#include<string>
#include <cmath>
using namespace std;
 
Planet::Planet(float gravity){
    _gravity=gravity;
}
float Planet::drop(float height){
    float time;
    time=sqrt(2*height/_gravity);
    return time;
}
Earth::Earth():Planet(9.81){}
void Earth::simulate(float height){
    cout<<"Earth gravity= "<<_gravity<<endl;
    cout<<"Drop from "<<height<<"m, "<<drop(height)<<" seconds"<<endl;
}
Moon::Moon():Planet(1.62){}
void Moon::simulate(float height){
    cout<<"Moon gravity= "<<_gravity<<endl;
    cout<<"Drop from "<<height<<"m, "<<drop(height)<<" seconds"<<endl;
}

