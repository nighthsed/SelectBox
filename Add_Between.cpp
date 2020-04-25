
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
  {
    return v[start] + Recur_Add_Between(v, start+1, end);
  }
}

int main()
{
  vector<int> v;
  int len = 0;
  cout << "What is the size of your vector?\n";
  cin >> len;
  for(int i = 0; i < len; i++)
  {
    int x;