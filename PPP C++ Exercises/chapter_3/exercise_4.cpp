#include "std_lib_facilities.h"

int main()
{
  // Chapter 3 Exercise 4

	int val1 = 0;
	int val2 = 0;

	cin >> val1 >> val2;

	int smaller = 0;
	int larger = 0;

	if (val1 > val2)
	{
		smaller = val2;
		larger = val1;
	}

	else
	{
		smaller = val1;
		larger = val2;
	}

	cout << "The smaller between the two numbers is " << smaller << " while the larger is " << larger << "\n"
		<< "The sum of the numbers is " << val1 + val2 << "\n"
		<< "The difference of the numbers is " << val1 - val2 << "\n"
		<< "The product of the numbers is " << val1 * val2 << "\n"
		<< "The ratio of the values is " << double(val1) / val2 << "\n";
  return 0;
}
