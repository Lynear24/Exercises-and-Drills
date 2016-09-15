#include "std_lib_facilities.h"

int main()
{
  // Chapter 4 Exercise 4
  // Numbers guessing game

  int initial_guess = 50;
  int guess_number = initial_guess;
  string confirmation = "";
  string comparison = "";

  cout << "Is your number " << guess_number << "? ";
  cin >> confirmation;

  while (confirmation != "yes")
  {
    cout << "Is your number less than " << guess_number << "? ";
    cin >> comparison;

    initial_guess /= 2;

    if (initial_guess <= 0)
    {
      initial_guess = 1;
    }

    if (comparison == "yes")
    {
      guess_number -= initial_guess;
    }

    else
    {
      guess_number += initial_guess;
    }

    cout << "Is your number " << guess_number << "? ";
    cin >> confirmation;
  }


  cout << "The number you're thinking is " << guess_number << "!\n";
  return 0;
}
