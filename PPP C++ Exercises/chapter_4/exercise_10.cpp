#include "std_lib_facilities.h"

int main()
{
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
  
  return 0;
}
