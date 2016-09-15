#include "std_lib_facilities.h"

int main()
{
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
  
  return 0;
}
