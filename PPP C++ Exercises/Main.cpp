// Exercises and Drills
#include "std_lib_facilities.h"
const double
	cm_per_m = 100,
	cm_per_in = 2.54,
	in_per_ft = 12;

double convert_to_meters(double value, string unit)
{
	double in_m = 0;

	if (unit == "cm")
	{
		in_m = value / cm_per_m;
	}

	else if (unit == "in")
	{
		in_m = value * cm_per_in / cm_per_m;
	}

	else if (unit == "ft")
	{
		in_m = value * in_per_ft * cm_per_in / cm_per_m;
	}

	else if (unit == "m")
	{
		in_m = value;
	}

	else
		in_m = 0;

	return in_m;
}

bool is_name_unique(vector<string> names, string name)
{
	for (string x : names)
	{
		if (x == name)
			return false;
	}

	return true;
}

int find_name_index(vector<string> names, string name)
{
	for (int i = 0; i < names.size(); ++i)
	{
		if (names[i] == name)
			return i;
	}

	// Nothing match in names
	return -1;
}

vector<int> find_score_indices(vector<int> scores, int score)
{
	vector<int> indices;

	for (int i = 0; i < scores.size(); ++i)
	{
		if (scores[i] == score)
			indices.push_back(i);
	}

	return indices;
}

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

	/*
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
	*/

	/*
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
	*/

	/*
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
	*/

	/*
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
	*/
	
	/*
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

	*/

	/*
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
	*/

	/*
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
	*/

	/*
	// Chapter 4 Exercise 5
	// Mini calculator: Adds, subtracts, multiplies, divides on two operands

	double in1 = 0, in2 = 0;
	char operation = 0;

	cin >> in1 >> in2 >> operation;

	switch (operation)
	{
	case '+':
		cout << "The sum of " << in1 << " and " << in2 << " is " << in1 + in2 << '\n';
		break;

	case '-':
		cout << "The difference of " << in1 << " and " << in2 << " is " << in1 - in2 << '\n';
		break;

	case '*':
		cout << "The product of " << in1 << " and " << in2 << " is " << in1 * in2 << '\n';
		break;

	case '/':
		cout << "The ratio of " << in1 << " and " << in2 << " is " << in1 / in2 << '\n';
		break;

	default:
		cout << "I don't know an operation called " << operation << ".\n";
		break;
	}
	*/
		
	/*
	// Chapter 4 Exercise 10
	// Rock, Paper, Scissors

	char player_move = 0;
	int user_seed = 0;
	vector<char> ai_moves{ 'r', 'p', 's' };

	cout << "Please enter a random integer value to spice things up: ";
	cin >> user_seed;

	cout << "Welcome to Rock, Paper, Scissors! Choose your move (r for rock, p for paper, s for scissors): ";
	cin >> player_move;

	char ai_move = ai_moves[user_seed % 3];

	if (player_move == ai_move)
	{
		cout << "Draw!\n";
	}

	else if (player_move == 'r' && ai_move == 'p')
	{
		cout << "AI chose papers! Paper beats rock and you lose!\n";
	}

	else if (player_move == 'r' && ai_move == 's')
	{
		cout << "AI chose scissors! Your move trumps his move!\n";
	}

	else if (player_move == 'p' && ai_move == 'r')
	{
		cout << "AI chose rock! Paper beats rock. You win!\n";
	}

	else if (player_move == 'p' && ai_move == 's')
	{
		cout << "AI chose scissors! Scissors cut clean through paper and you lose!\n";
	}

	else if (player_move == 's' && ai_move == 'r')
	{
		cout << "AI chose rock! You lose.\n";
	}

	else if (player_move == 's' && ai_move == 'p')
	{
		cout << "AI chose paper! Your scissors cut him clean! You win!\n";
	}
	*/

	/*
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
	*/

	// Chapter 4 Exercise 19, 20, and 21
	// Stores a name-score pair and prints them

	vector<string> names;
	vector<int> scores;

	string name;
	int score;

	cin >> name >> score;

	while (name != "NoName" && score != 0)
	{
		if (!is_name_unique(names, name))
			simple_error("Name " + name + " is not unique.\n");

		names.push_back(name);
		scores.push_back(score);
		cin >> name >> score;
	}

	/*
	cout << "Type the name to check for scores\n";
	while (cin >> name)
	{
		int index = find_name_index(names, name);
		if (index != -1)
		{
			cout << "Name: " << names[index] << "\tScore: " << scores[index] << "\n";
		}

		else
			cout << "Name not found.\n";
	}
	*/

	cout << "Enter the score to see who has obtained them\n";

	while (cin >> score)
	{
		vector<int> indices = find_score_indices(scores, score);
		if (!indices.empty())
		{
			for (int i: indices)
				cout << "Name: " << names[i] << "\tScore: " << scores[i] << "\n";
		}

		else
			cout << "Score not found.\n";
	}

	return 0;
}