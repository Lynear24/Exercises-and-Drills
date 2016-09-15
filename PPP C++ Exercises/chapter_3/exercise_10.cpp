#include "std_lib_facilities.h"

int main()
{
  // Chapter 3 Exercise 10
  // Takes an operation and two operands then outputs the result

  string operation= 0;
  double val1 = 0.0;
  double val2 = 0.0;
  cin >> operation >> val1 >> val2;

  if (operation == "+" || operation == "plus")
    cout << val1 << " + " << val2 << " == " << val1 + val2 << '\n';

  if (operation == "-" || operation == "minus")
    cout << val1 << " - " << val2 << " == " << val1 - val2 << '\n';

  if (operation == "*" || operation == "mul")
    cout << val1 << " * " << val2 << " == " << val1 * val2 << '\n';

  if (operation == "/" || operation == "div")
    cout << val1 << " / " << val2 << " == " << val1 / val2 << '\n';
  return 0;
}
