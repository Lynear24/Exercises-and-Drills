#include "std_lib_facilities.h"

int main()
{
  // Chapter 3 Exercise 11
  // Prompts the user how much coins of different denominations he has and totals them

  const double
    pennies_to_dollars = 0.01,
    nickels_to_dollars = 0.05,
    dimes_to_dollars = 0.1,
    quarters_to_dollars = 0.25,
    half_to_dollars = 0.5;

  cout << "How many pennies do you have? ";
  int pennies;
  cin >> pennies;

  cout << "How many nickels do you have? ";
  int nickels;
  cin >> nickels;

  cout << "How many dimes do you have? ";
  int dimes;
  cin >> nickels;

  cout << "How many quarters do you have? ";
  int quarters;
  cin >> quarters;

  cout << "How many half-dollars do you have? ";
  int half_dollars;
  cin >> half_dollars;

  cout << "How many one-dollars do you have? ";
  int dollars;
  cin >> dollars;

  double total = pennies * pennies_to_dollars + nickels * nickels_to_dollars + dimes * dimes_to_dollars +
    quarters * quarters_to_dollars + half_dollars * half_to_dollars + dollars;

  cout << "You have " << pennies << " pennies\n"
    << "You have " << nickels << " nickels\n"
    << "You have " << dimes << " dimes\n"
    << "You have " << quarters << " quarters\n"
    << "You have " << half_dollars << " half-dollars\n"
    << "You have " << dollars << " one-dollar coins\n"
    << "The value of all your coins is $" << total << "\n";
  return 0;
}
