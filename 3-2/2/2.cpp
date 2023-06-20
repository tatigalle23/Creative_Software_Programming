#include <iostream>
#include<string>
using namespace std;

string primeFactorization(unsigned int _number);

int main(void)
{
     unsigned int number;
    cin >> number;
    cout << primeFactorization(number) << endl;
    return 0;
}

string primeFactorization(unsigned int _number){
    string a,b,c;   
    string x,y;
   
    for(int i=2; _number>1;i++){
        int count=0;
        while(_number%i==0){
            count++;           
            _number/=i;
            if(_number%i!=0){
                x=to_string(i);
                y=to_string(count);
                if(count>1){                    
                    a=x+"^"+y+" x ";
                    b.append(a);}
                else{                    
                    c=x+"^"+y;}
            }
           
        }
    }
    return b+c;
}
