#include "std_lib_facilities.h"

int main()
{
  // Chapter 4 Exercise 16
  // Gets the mode of the user's inputs

  vector<int> nums;
  int mode = 0;
  int max_occurence = 0;

  for (int x; cin >> x;)
    nums.push_back(x);

  sort(nums.begin(), nums.end());

  int previous_number = 0;

  for (int i = 0, occurence = 0; i < nums.size(); ++i)
  {
    if (previous_number == nums[i])
      ++occurence;

    else
    {
      if (occurence > max_occurence)
      {
        max_occurence = occurence;
        mode = previous_number;
      }

      occurence = 1;
    }

    previous_number = nums[i];
  }

  cout << "The mode of the set of values is " << mode << " appearing " << max_occurence << " times.\n";
  
  return 0;
}
