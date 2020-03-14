
#include <iostream>
#include <vector>
using namespace std;

//Iterative solution
// Pre: "v" is a vector of integers
//  "start" and "end" are positions in v
// Post: returns v[start] + v[start+1] + ... + v[end]
int Add_Between(const vector<int>& v, int start, int end)
{