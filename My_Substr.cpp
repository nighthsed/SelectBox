
#include <iostream>
#include <vector>
using namespace std;

//Iterative solution
// Pre: "s" is any string
//  "start" and "end" are positions in s
// Post: returns a string consisting of s[start]..s[end] (inclusive)
string My_Substr(const string& s, int start, int end)
{
  string substr = "";
  for(int i = start; i <= end; i++)
  {
    substr += s[i];
  }
  return substr;
}

//Recursive solution
string Recur_My_Substr(const string& s, int start, int end)
{
  if(start==end)
  {
    string a;
    a = s[end];
    return a;
  }