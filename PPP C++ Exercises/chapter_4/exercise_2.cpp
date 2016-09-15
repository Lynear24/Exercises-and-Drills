#include "std_lib_facilities.h"

int main()
{
  // Chapter 4 Exercise 2
  vector<double> temps;	// temperatures
  for (double temp; cin >> temp;)	// read into temp
    temps.push_back(temp);	// put temp into vector

  // compute median temperature:
  sort(temps);	// sort temperatures

  if (temps.size() % 2 == 1)
    cout << "Median temperature: " << temps[temps.size() / 2] << '\n';

  else
  {
    // Get the average of the half and half - 1'th elements
    double median = (temps[temps.size() / 2] + temps[(temps.size() / 2) - 1]) / 2;
    cout << "Median temperature: " << median << "\n";
  }
  return 0;
}
