#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<istream>
#include <sstream>
#include "sorted.h"
using namespace std;
SortedArray::SortedArray(){}
SortedArray::~SortedArray(){}
void SortedArray::AddNumber(int a){
    numbers_.push_back(a);
}
 
vector<int> SortedArray::GetSortedAscending(){
    sort(numbers_.begin(),numbers_.end());
    return numbers_;
}
vector<int> SortedArray::GetSortedDescending(){
    sort(numbers_.begin(),numbers_.end(), greater<int>());
    return numbers_;
}
int SortedArray::GetMax(){
    int i;
    i= *max_element(numbers_.begin(),numbers_.end());
    return i;
}
int SortedArray::GetMin(){
    int i;
    i= *min_element(numbers_.begin(),numbers_.end());
    return i;
}

