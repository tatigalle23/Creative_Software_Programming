#ifndef sorted_h
#define sorted_h
#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<istream>
#include <sstream>
using namespace std;
 
class SortedArray
{
public:
SortedArray();
SortedArray(vector<int> numbers);
~SortedArray();
void AddNumber(int a);
vector<int> GetSortedAscending();
vector<int> GetSortedDescending();
int GetMax();
int GetMin();
private:
vector<int> numbers_;
};
#endif 

