
#include <iostream>
#include <vector>
using namespace std;

//Iterative solution
// Pre: "v" is a vector of integers
//  "start" and "end" are positions in v
// Post: returns v[start] + v[start+1] + ... + v[end]
int Add_Between(const vector<int>& v, int start, int end)
{
  int sum = 0;
  for(int i = start; i <= end; i++)
  {
    sum += v[i];
  }
  return sum;
}

//Recursive solution
int Recur_Add_Between(const vector<int>& v, int start, int end)
{
  if(start == end) // base case: length is 1
  {
    return v[start];
  }
  else