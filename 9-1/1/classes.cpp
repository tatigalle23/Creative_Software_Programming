#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
class A{
    public:
    virtual void test(){    
    cout << "A::test()" << endl;
    }  
};
class B : public A{
    public:
    virtual void test(){
    cout << "B::test()" << endl;
    }
};
class C: public B{
    public:
    virtual void test(){
    cout << "C::test()" << endl;
    }
};
 
void print(A* a){
    a->test();
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
        print(a[i]);        
    }
    for(int i=0; i<a.size(); i++){
        delete a[i];        
    }
}

