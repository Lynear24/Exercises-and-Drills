// Exercises and Drills
#include "std_lib_facilities.h"

int main()
{
	/*
	// Chapter 2 Drill
	// Prints out "Hello World"
	cout << "Hello World!\n";
	*/

	/*
	// Chapter 3 Drill

	cout << "Enter the name of the person you want to write to: ";
	string first_name = "";
	cin >> first_name;
	cout << "Dear " << first_name << ", \n";

	cout << "\tHow are you? I am fine. I miss you.\n";

	cout << "What is the name of your other friend? ";
	string friend_name = "";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";

	char friend_sex = 0;
	cout << "What's " << friend_name << "'s gender? (m for male, f for female) ";
	cin >> friend_sex;

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";

	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";

	cout << "What is your age? ";
	int age = 0;
	cin >> age;
	
	if (age <= 0 || age >= 110)
		simple_error("You're kidding!\n");

	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if (age < 12)
		cout << "Next year you will be " << age + 1 << ".\n";

	if (age == 17)
		cout << "Next year you will be able to vote.\n";

	if (age > 70)
		cout << "I hope you are enjoying retirement.\n";
	

	cout << "Yours sincerely, \n\nNyle\n";
	*/

	/*
	// Chapter 3 Exercise 2
	// Converts entered distance in miles to kilometers
	const double km_per_mile = 1.609;

	cout << "How long in miles did you travel? ";
	double miles_traveled;
	cin >> miles_traveled;

	cout << "You have traveled " << miles_traveled * km_per_mile << " km.\n";
	*/

	/*
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
	*/

	
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
	
	// Chapter 3 Exercise 8
	// Tests if an integer value is odd or even
	int input = 0;
	cin >> input;

	if (input % 2 == 1)
		cout << "The number is odd.\n";

	if (input % 2 == 0)
		cout << "The number is even.\n";

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

	/*
	// Chapter 4 Drill
	// 
	int in1 = 0;
	int in2 = 0;

	while (cin >> in1 >> in2)
	{
		if (in1 == in2)
			cout << "The numbers are equal.\n";

		else if (in1 > in2)
			cout << "The smaller value is " << in2 << ". The larger value is " << in1 << ".\n";

		else
			cout << "The smaller value is " << in1 << ". The larger value is " << in2 << ".\n";
	}
	*/

	return 0;
}