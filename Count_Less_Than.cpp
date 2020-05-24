
#include <iostream>
#include <vector>
using namespace std;

//Iterative solution
// Pre: "v" is a vector of integers
//  "key" is any integer
//  "start" is a position in v
// Post: Returns the number of elements from v[start]// to v[v.size()-1] that are < "key"
int Count_Less_Than(const vector<int>& v, int key, int start)
{
  int count = 0;
  for(int i = start; i<v.size(); i++)
  {
    if(v[i] < key)
      count++;
  }
  return count;