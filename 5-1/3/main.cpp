#include<iostream>
#include "minmax.h"
using namespace std;

int main(int argc, char *argv[]){
    int* numArr= new int[argc];
    for(int i=1;i<argc;i++){
        numArr[i]=atoi(argv[i]);
    }
    int min=0;
    int max=0;
    getMinMax(numArr, argc, min, max);
    cout<<"min: "<<min<<endl;
    cout<<"max: "<<max<<endl;
 
    delete [] numArr;
}

