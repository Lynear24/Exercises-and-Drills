#include "std_lib_facilities.h"

int main()
{
  // Chapter 4 Exercise 5
  // Mini calculator: Adds, subtracts, multiplies, divides on two operands

  double in1 = 0, in2 = 0;
  char operation = 0;

  cin >> in1 >> in2 >> operation;

  switch (operation)
  {
  case '+':
    cout << "The sum of " << in1 << " and " << in2 << " is " << in1 + in2 << '\n';
    break;

  case '-':
    cout << "The difference of " << in1 << " and " << in2 << " is " << in1 - in2 << '\n';
    break;

  case '*':
    cout << "The product of " << in1 << " and " << in2 << " is " << in1 * in2 << '\n';
    break;

  case '/':
    cout << "The ratio of " << in1 << " and " << in2 << " is " << in1 / in2 << '\n';
    break;

  default:
    cout << "I don't know an operation called " << operation << ".\n";
    break;
  }
  
  return 0;
}
