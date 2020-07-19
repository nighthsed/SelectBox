
#include <iostream>
#include <vector>
using namespace std;

//Iterative solution
// Pre: "s" is any string whose characters are all // in the same case
//  "start" is a position in s
// Post: returns true if
//  s[start] <= s[start+1] <= ... <= s[s.size()-1]
//  returns false otherwise.
bool Is_Alphabetical(const string& s, int start)
{
  for(int i = start; i < s.length()-1; i++)
  {
    if(s[i] > s[i+1])
      return false;