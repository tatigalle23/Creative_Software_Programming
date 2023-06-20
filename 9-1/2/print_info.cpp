#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
 
class A{
    public:
    virtual string getTypeInfo();
};
class B: public A{
    public:
    virtual string getTypeInfo();
};
class C: public B{
    public:
    virtual string getTypeInfo();
};
 
string A::getTypeInfo(){
  string a="This is an instance of class A";
  return a;  
}
string B::getTypeInfo(){
  string a="This is an instance of class B";
  return a;  
}
string C::getTypeInfo(){
  string a="This is an instance of class C";
  return a;  
}
 
void printObjectTypeInfo1(A* object){
    string a=object->getTypeInfo();
    cout<<a<<endl;
}
void printObjectTypeInfo2(A& object){
    string a=object.getTypeInfo();
    cout<<a<<endl;
}
 
int main(){
    vector<A*> a;
    string b;
    cin>>b;
    while(b!="quit"){
        if (b=="A"){
            a.push_back(new A);
            cin>>b;
        }else if (b=="B"){
            a.push_back(new B);
            cin>>b;
        }else if (b=="C"){
            a.push_back(new C);
            cin>>b;
        }
    }
 
    for(int i=0; i<a.size(); i++){
        printObjectTypeInfo1(a[i]);
        printObjectTypeInfo2(*a.at(i));        
    }
    for(int i=0; i<a.size(); i++){
        delete a[i];        
    }
}

