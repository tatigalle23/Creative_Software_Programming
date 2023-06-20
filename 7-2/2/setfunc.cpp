#include <iostream>
#include "setfunc.h"
#include <sstream>
#include <set>
#include <algorithm>
 
using namespace std;
set<int> parseSet(const string& str){
    set<int> set;
    int i;
    istringstream is(str);
    while ( is >> i){
        set.insert(i);  
    }return set;
}
 
 
void printSet (const set<int>& set){
    cout << "{";
    for(auto it = (set.begin()); it != set.end(); ++it) {
        cout << " " << *it;
    }cout << " }" << endl;
}
 
 
set<int> getIntersection(const set<int>& set0, const set<int>& set1){
    set<int> set;
    set_intersection(set0.begin(), set0.end(), set1.begin(), set1.end(), inserter(set, set.begin()));
    return set;
}
 
 
set<int> getUnion(const set<int>& set0, const set<int>& set1){
    set<int> set;
    set_union(set0.begin(), set0.end(), set1.begin(), set1.end(), inserter(set, set.begin()));
    return set;
}
 
set<int> getDifference(const set<int>& set0, const set<int>& set1){
    set<int> set;
    set_difference(set0.begin(), set0.end(), set1.begin(), set1.end(), inserter(set, set.begin()));
    return set;
}

