#include "sorted.h"
#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<istream>
#include <sstream>

int main(){
   
    string num;
    int nums;
    SortedArray sort;    
    getline(cin,num);
    istringstream is(num);
   
    while(is>>nums){
        sort.AddNumber(nums);
    }
   
    num.clear();
    string a;      
    getline(cin,a);
    while(a!="quit"){  
        vector<int> temp;
        int tempn;
       
        if(a=="ascend"){            
           
            temp=sort.GetSortedAscending();
            for(int i=0; i<temp.size();i++){
                cout<<temp.at(i)<<" ";
            }cout<<endl;
            getline(cin,a);
 
        }else if(a=="descend"){
           
            temp=sort.GetSortedDescending();
            for(int i=0; i<temp.size();i++){
                cout<<temp.at(i)<<" ";
            }cout<<endl;
            getline(cin,a);
        }else if(a=="max"){
           
            tempn=sort.GetMax();
            cout<<tempn<<endl;
            getline(cin,a);
        }else if(a=="min"){
           
            tempn=sort.GetMin();
            cout<<tempn<<endl;
            getline(cin,a);
       
        }else{
           
            istringstream is(a);    
            while(is>>nums){
                sort.AddNumber(nums);
            }
            getline(cin,a);
        }
    }
 
 
}

