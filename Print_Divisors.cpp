#include <iostream>
#include <vector>
using namespace std;

//Iterative Solution
// Pre: n is a positive integer
//  "max_factor" is a positive integer <= n
// Post: outputs to the screen all numbers <= max_factor that divide evenly into n.
void Print_Divisors(int n, int max_factor)
{
  for(int i = max_f