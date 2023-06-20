#include "minesweeper.h"
#include <string>
#include <iostream>
using namespace std;
 
int main()
{
    string a;
    int w,h,x,y;
    vector<string> new_board;    
    string mine_line;
   
    cin>>a;
 
    while (a != ":quit"){
        if (a == ":set"){
            new_board.clear();
            cin >> w>> h;
            string mine_line;
 
            for (int i = 0; i<h; i++){
                cin >> mine_line;
                new_board.push_back(mine_line);
            }
 
            Minesweeper new_minesweeper {w, h, new_board};
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

