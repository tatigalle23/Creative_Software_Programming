#include<iostream>
#include <string>
#include<vector>
#include<map>
#include "message.h"
 
using namespace std;
 
MessageBook::MessageBook(){}
MessageBook::~MessageBook(){}
void MessageBook::AddMessage(int number, const std::string& message){
    message_.insert(make_pair(number, message));
}
void MessageBook::DeleteMessage(int number){
    message_.erase(number);
 
}
vector<int> MessageBook::GetNumbers(){
    vector<int> temp;
    for(map<int, string>::iterator it=message_.begin(); it!=message_.end(); ++it){
        temp.push_back((*it).first);
    }
    return temp;
 
}
 
const string& MessageBook::GetMessage(int number){
    const string& temp=message_.find(number)->second;
    return temp;
}

