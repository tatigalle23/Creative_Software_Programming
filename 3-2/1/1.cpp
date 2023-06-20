#include<iostream>
using namespace std;

namespace first_space{
    void print(){
        cout<<"Print from first space"<<endl;
    }
}

namespace second_space{
    void print(){
        cout<<"Print from second space"<<endl;
    }
}

int main(){
    int a;
    cin>>a;
    if (a==1){
        using namespace first_space;
        print();
    }
    else{
        using namespace second_space;
        print();
    }
}
