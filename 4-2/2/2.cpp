#include<iostream>
using namespace std;
 
 
void magicSquare(int n, int **square){
    int  i, j; 
    
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            square[i][j]=(n*i)+j+1;
        }
    }
     
 
    for (i=0;i<n/4;i++){
        for (j=0;j<n/4;j++){
            square[i][j]=(n*n + 1)-square[i][j];
        }
    }
     
    
    for ( i = 0; i < n/4; i++){
        for ( j = 3 * (n/4); j<n;j++){
            square[i][j]=(n*n + 1)-square[i][j];
        }
    }
 
    for (i=3*n/4;i<n;i++){
        for (j=0;j<n/4;j++){
            square[i][j]=(n*n+1)-square[i][j];
        }
    } 
   
    for (i=3*n/4;i<n;i++){
        for (j=3*n/4;j<n;j++){
            square[i][j]=(n*n + 1)-square[i][j];
        }
    }
  
    for (i=n/4; i<3*n/4;i++){
        for (j=n/4; j<3*n/4;j++){
            square[i][j]=(n*n + 1)-square[i][j];
        }
    }
   
}
 
 
int main()
{
    int n;
    cin>>n;
   
    if(n<4 || n%4>=1){
        exit(0);
    }
        
    
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
        delete [] square[i];}
    delete [] square;
}

