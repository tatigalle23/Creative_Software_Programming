#include<iostream>
#include<string>
using namespace std;

int add(int a, int b){
    return a+b;
}

string add(string a, string b){
    string c=a+"-"+b;
    return c;
}

float add(float a, float b=0.9){
    return (a+b);
}


int main(){
    int a, b, x;
    string c,d, y;
    float e,z;

    cin>>a>>b>>c>>d>>e;
    x=add(a,b);
    y=add(c,d);    
    z=add(e);

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;  
}
