#pragma once
#include <iostream>
#include <set>
 
using namespace std;
 
set<int> parseSet(const string& str);
void printSet (const set<int>&);
set<int> getIntersection(const set<int>& set0, const set<int>& set1);
set<int> getUnion(const set<int>& set0, const set<int>& set1);
set<int> getDifference(const set<int>& set0, const set<int>& set1);
