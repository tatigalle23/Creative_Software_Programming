#include "charlist.h"
#include<iostream>
#include<list>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;
 
CharList::~CharList(){}
CharList::CharList(list<char> strings){
    mystring_.clear();
    mystring_=strings;
}
bool CharList::CheckPalindrome(){
    list<char> string=mystring_;
    reverse(string.begin(),string.end());
 
    if(mystring_==string){
        return true;
    }else{
        return false;
    }
 
}
 

