#include<iostream>
#include <string>
#include<vector>
#include<map>
#include "message.h"
 
using namespace std;
 
int main(){
    MessageBook message;
    string a;
    cin>>a;
    int count=0;
    int countd=0;
    while(a!="quit"){
        if(a=="add"){
            int num;
            string msg;
            cin>>num;
            getline(cin,msg);
            message.AddMessage(num,msg);
            cin>>a;
            count++;
        }else if(a=="print"){
            int num;
            cin>>num;
            const string msg=message.GetMessage(num);
            cout<<msg<<endl;
            cin>>a;
        }else if(a=="list"){
            int x=count-countd;
            for(int i=0;i<x;i++){
                vector<int> num=message.GetNumbers();
                cout<<num[i]<<": "<<message.GetMessage(num[i])<<endl;
            }
            cin>>a;
        }else if(a=="delete"){
            int num;
            cin>>num;
            message.DeleteMessage(num);
            countd++;
            cin>>a;
        }
 
 
    }
 
}

