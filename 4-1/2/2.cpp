#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int* numArr= new int[n];
    
    int count=0;
    int x;
    for(int i=0;i<n;i++){
        cin>>numArr[i];
    }

    cin>>x;

    for(int i=0;i<n;i++){
        if(numArr[i]==x){
            count++;
        }
    }

    cout<<"Target Value: "<<x<<endl;
    cout<<"Target count: "<<count<<endl;

    delete[] numArr;
}
