#include "std_lib_facilities.h"

int main()
{
  // Chapter 3 Exercise 6 and 7

  string in1 = "";
  string in2 = "";
  string in3 = "";

  cin >> in1 >> in2 >> in3;

  string ord_val1 = "";
  string ord_val2 = "";
  string ord_val3 = "";

  if (in1 <= in2 && in2 <= in3 && in1 <= in3)	// 1 2 3
  {
    ord_val1 = in1;
    ord_val2 = in2;
    ord_val3 = in3;
  }

  if (in1 <= in3 && in3 <= in2 && in1 <= in2)	// 1 3 2
  {
    ord_val1 = in1;
    ord_val2 = in3;
    ord_val3 = in2;
  }

  if (in2 <= in1 && in1 <= in3 && in2 <= in3)	// 2 1 3
  {
    ord_val1 = in2;
    ord_val2 = in1;
    ord_val3 = in3;
  }

  if (in2 <= in3 && in3 <= in1 && in2 <= in1)	// 2 3 1
  {
    ord_val1 = in2;
    ord_val2 = in3;
    ord_val3 = in1;
  }

  if (in3 <= in1 && in1 <= in2 && in3 <= in2)	// 3 1 2
  {
    ord_val1 = in3;
    ord_val2 = in1;
    ord_val3 = in2;
  }

  if (in3 <= in2 && in2 <= in1 && in3 <= in1)	// 3 2 1
  {
    ord_val1 = in3;
    ord_val2 = in2;
    ord_val3 = in1;
  }

  cout << ord_val1 << ", " << ord_val2 << ", " << ord_val3 << '\n';
  return 0;
}
