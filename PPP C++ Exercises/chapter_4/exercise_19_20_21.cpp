#include "std_lib_facilities.h"

int main()
{
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
