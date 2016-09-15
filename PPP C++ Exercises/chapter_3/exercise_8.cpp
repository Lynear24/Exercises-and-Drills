#include "std_lib_facilities.h"

int main()
{
  // Chapter 3 Exercise 8
  // Tests if an integer value is odd or even
  int input = 0;
  cin >> input;

  if (input % 2 == 1)
    cout << "The number is odd.\n";

  if (input % 2 == 0)
    cout << "The number is even.\n";
    
  return 0;
}
