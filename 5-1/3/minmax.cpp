#include<iostream>
using namespace std;

void getMinMax(int* arr, int len, int& min, int& max){
    min=0;
    max=0;
 
    for(int i=1;i<len;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
}

