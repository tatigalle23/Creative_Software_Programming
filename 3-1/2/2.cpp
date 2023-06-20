#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b,c;
    cin>>a;
    cin>>b;
    c=a+b;
    int l=c.length();
    cout<<c<<endl;
    cout<<c[0]<<endl;
    cout<<c[l-1]<<endl;

    return 0;
}

