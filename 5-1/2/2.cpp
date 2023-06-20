#include<iostream>
#include<string>
using namespace std;
  
int main(int argc, char *argv[]){
    int a;
    int d=0;
    char* b;
    string c;
    for(int i=1;i<argc;i++){
        a=atoi(argv[i]);
        b=argv[i];
        if(*b<'0' || *b>'9'){
            //a+=a;
            c.append(argv[i]);
        }else{
        //c.append(argv[i]);
           d=d+a;
        }
	
 
    }
	cout<<c<<endl;
    cout<<d<<endl;
}

