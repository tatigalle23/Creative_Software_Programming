#include <iostream>
using namespace std;
 
void magicSquare(int n, int **square){    
    
    int i=n/2;
    int j=n-1; 
    
    for (int x=1; x<= n*n;){
        if (i==-1 && j==n){
            j=n-2;
            i=0;
        }
        else{            
            if (j==n)
                j=0; 
            
            if (i<0)
                i=n-1;
        }
        if (square[i][j]){
            j-=2;
            i++;
            continue;
        }
        else
            square[i][j]=x++; 
 
        j++;
        i--;
    }
}
 
int main(){
    int n;
    cin>>n;
    if(n<3 && n%2==0)
            exit(-1);
    
    int **square = new int*[n];
 
    for (int i = 0; i < n; i++) {
        square[i] = new int[n];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            square[i][j]=0;
 
        }
    }
 
    magicSquare(n, square);
 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< square[i][j] << " ";
        }cout<< endl;
    }
    for (int i = 0; i < n; i++) {
        delete [] square[n];}
    delete [] square;    
}

