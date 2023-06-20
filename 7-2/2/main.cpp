#include <iostream>
#include "setfunc.h"
#include <string>
#include <set>
 
using namespace std;
 
int main(){
    string a;
    getline(cin, a);
    string set0;
    string set1;
    string b;
    set<int> seta;
    set<int> setb;
   
    while (a != "0")
    {
        set0.clear();
        set1.clear();
        seta.clear();
        setb.clear();
 
        set0 = a.substr((a.find("{")+2), (a.find("}")-2));
        a = a.substr((a.find("}")+2), (a.find("{")-2));        
        b = a.substr(0, (a.find("{")-1));  
        set1 = a.substr((a.find("{")+2), (a.find("}")-2));
     
        seta = parseSet(set0);
        setb = parseSet(set1);  
 
        if (b == "+"){
            set<int> set;
            set = getUnion(seta, setb);
            printSet(set);
        }else if(b == "-"){        
            set<int> set;
            set = getDifference(seta,setb);
            printSet(set);
        }else if(b == "*"){
            set<int> set;
            set = getIntersection(seta,setb);
            printSet(set);
        }
 
        getline(cin, a);
    }
 
}

