#include "minesweeper.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string a;
    int w,h,x,y;
    vector<string> map;    
    string mapstring;
   
    cin>>a;
 
    while (a != ":quit"){
        if (a == ":set"){
            map.clear();
            cin >> w>> h;
            string mapstring;
 
            for (int i = 0; i<h; i++){
                cin >> mapstring;
                map.push_back(mapstring);
            }
 
            Minesweeper new_minesweeper {w, h, map};
            vector<string> setMap;
            string mineString;
 
            for (int i=0; i<h; ++i){
                mineString = "";
                for (int j = 0; j<w; ++j){
                    int count = 0;
                    if (new_minesweeper.mineExist(i,j) == true){
                        mineString += "*";
                    }else{
                        count = new_minesweeper.mines(i,j);
                        mineString += to_string(count);
                    }
                     
                }setMap.push_back(mineString);
            }
            for (int i= 0; i<h; i++){
                cout << setMap.at(i) << endl;  
            }setMap.clear();
 
            cin >> a;
            vector<string> mapPlay;
            if(a == ":play"){
                string letter="";                
                for (int i = 0; i<h; i++){
                    for(int j=0;j<w;j++){
                        letter+='_';                        
                    }
                    mapPlay.push_back(letter);
                    letter="";  
                }                
                for (int i = 0; i<h; i++){
                    cout<<mapPlay[i]<<endl;                  
                   
                }
               
                int count=0;
                while(1){
                    cin>>a;
                    if(a==":touch"){
                        count++;
                        cin>>x>>y;                
                        if(new_minesweeper.touchMap(y,x)==false){
                            new_minesweeper.touchMapShow(y,x,setMap,mapPlay);
                   
                        }else if (new_minesweeper.touchMap(y,x)==true){
                            cout<<"DEAD"<<"("<<count<<")"<<endl;
                            break;
                        }                  
 
                    }
                   
                }
                             
 
            }
            cin>>a;
            while (a == ":toggle"){
                cin >> x >> y;
 
                new_minesweeper.toggleMine(y,x);
 
                for (int i=0; i<h; ++i){
                    mineString = "";
                    for (int j = 0; j<w; ++j){
                        int count = 0;
                        if (new_minesweeper.mineExist(i,j) == true){
                            mineString += "*";
                        }else{
                            count = new_minesweeper.mines(i,j);
                            mineString += to_string(count);
                        }
                    }setMap.push_back(mineString);
                }
 
                for (int i= 0; i<h; i++){
                    cout << setMap.at(i) << endl;  
                }setMap.clear();          
 
                cin >> a;
            }
           
        }
                       
    }
   
}

