
#pragma once

#include<iostream>
#include<list>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;
 
class CharList {
public:
    CharList (list<char> strings);
    ~ CharList ();
    bool CheckPalindrome();
    list<char> GetAll();
private:
    list<char> mystring_;
};



