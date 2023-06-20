#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
 
class A{
    private:
        int* memberA;
    public:
    A(int argument);
    virtual ~A();
    virtual void print();
   
};
class B: public A{
    public:
    B(double argument);
    virtual ~B();
    virtual void print();
    private:
    double* memberB;
};
class C: public B{
    public:
    C(const std::string& argument);
    virtual ~C();
    virtual void print();
    private:
    std::string* memberC;
};
 
A::A(int argument){
    memberA= new int;
    *(memberA) = argument;  
    cout<<"New memberA "<<endl;
}
A::~A(){
    delete memberA;
    cout<<"Delete memberA"<<endl;
   
}
 
void A::print(){
    cout<<"*memberA: "<<*(memberA)<<endl;
}
 
B::B(double argument):A(1){
    memberB= new double;
    *(memberB) = argument;
    cout<<"New memberB"<<endl;
}
B::~B(){
    delete memberB;
    cout<<"Delete memberB"<<endl;
   
}
void B::print(){
    A::print();
    cout<<"*memberB: "<<*(memberB)<<endl;
}
C::C(const std::string& argument):B(1.1){
   
    memberC=new string;
    *(memberC) = argument;
    cout<<"New memberC "<<endl;
}
C::~C(){
    delete memberC;
    cout<<"Delete memberC"<<endl;
}
void C::print(){
    B::print();
    cout<<"*memberC: "<<*(memberC)<<endl;
}
 
void print1(A* object){
    object->print();    
}
 
 
int main(){
    vector<A*> arr;
    string b;
    cin>>b;
    while(b!="quit"){
        if (b=="A"){
            int a;
            cin>>a;
            arr.push_back(new A(a));
            cin>>b;
        }else if (b=="B"){
            double a;
            cin>>a;
            arr.push_back(new B(a));
            cin>>b;
        }else if (b=="C"){
            string a;
            cin>>a;
            arr.push_back(new C(a));
            cin>>b;
        }
    }
    for(int i=0; i<arr.size(); i++){
        print1(arr[i]);
    }
     
    for(int i=0; i<arr.size(); i++){
        delete arr[i];        
    }    
   
}

