#include "charlist.h"
#include<iostream>
#include<list>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;
 
int main(){
    list<char> str;
    string a;
    char b;
    cin>>a;    
    istringstream is(a);
 
    while(is>>b){
        str.push_back(b);
    }
   
 
    while(a!="quit"){
        CharList palin=CharList(str);
        cout<<boolalpha<<palin.CheckPalindrome()<<endl;
        a.clear();
        cin>>a;
        istringstream is(a);
        str.clear();
        while(is>>b){            
            str.push_back(b);
        }
    }
}

