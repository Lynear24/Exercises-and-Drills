#include "std_lib_facilities.h"

int main()
{
  // Chapter 3 Exercise 2
  // Converts entered distance in miles to kilometers
  const double km_per_mile = 1.609;

  cout << "How long in miles did you travel? ";
  double miles_traveled;
  cin >> miles_traveled;

  cout << "You have traveled " << miles_traveled * km_per_mile << " km.\n";
  return 0;
}
