#include "std_lib_facilities.h"

int main()
{
  // Chapter 4 Drill and Chapter 4 Exercise 3

  double in1 = 0;
  double largest = 0;
  double smallest = 0;
  double sum = 0;
  int num_entered = 0;
  vector<double> dist_list;
  string unit;

  while (cin >> in1 >> unit)
  {

    if (in1 == in2)
      cout << "The numbers are equal.\n";

    else if (in1 > in2)
      cout << "The smaller value is " << in2 << ". The larger value is " << in1 << ".\n";

    else
      cout << "The smaller value is " << in1 << ". The larger value is " << in2 << ".\n";

    if (fabs(in1 - in2) < 0.01)
      cout << "The numbers are almost equal.\n";

    if (!(unit == "m" || unit == "cm" || unit == "in" || unit == "ft"))
    {
      cout << "I don't know a unit called " << unit << "Please enter a value and a unit one more time.\n";
      continue;
    }

    in1 = convert_to_meters(in1, unit);

    if (smallest == 0 && largest == 0)	// There will be no smallest or largest the first time around
    {
      largest = in1;
      smallest = in1;
      cout << "The smallest and largest so far.\n";
    }

    if (in1 > largest)
    {
      largest = in1;
      cout << "The largest so far.\n";
    }

    if (in1 < smallest)
    {
      smallest = in1;
      cout << "The smallest so far.\n";
    }

    dist_list.push_back(in1);
    sum += in1;	// in1 is already in meters here, no need for another conversion
    ++num_entered;
  }

  // order the entered distances
  sort(dist_list.begin(), dist_list.end());

  cout << "The smallest distance is " << smallest << "m.\n"
    << "The largest distance is " << largest << "m.\n"
    << "The sum of the distances is " << sum << "m.\n"
    << "The average distance between cities is " << sum / num_entered << '\n';

  for (double x : dist_list)
  {
    cout << x << "m\n";
  }
  return 0;
}
