#include "std_lib_facilities.h"

int main()
{
  // Chapter 3 Exercise 9
  // Converts a number from its worded form to digit form

  string number_word;
  cin >> number_word;

  if (number_word == "zero")
    cout << "0\n";

  else if (number_word == "one")
    cout << "1\n";

  else if (number_word == "two")
    cout << "2\n";

  else if (number_word == "three")
    cout << "3\n";

  else if (number_word == "four")
    cout << "4\n";

  else
    cout << "Not a number I know.\n";
  return 0;
}
