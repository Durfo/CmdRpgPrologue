#include <iostream>
#include <string>

#include "Player.h"


using namespace std;

string questions(string question, string answerA,
              string answerB, string answerC,
              string answerD, string replyA,
              string replyB, string replyC,
              string replyD)
{

  bool loop = true;
  string invalid = "Please enter a valid answer";
  string input;

  cout << question << endl;

  while(loop)
  {
    cin >> input;
    if(input == answerA)
    {
      cout << replyA << endl;
      return answerA;

    }
    else if(input == answerB)
    {
      cout << replyB << endl;
      return answerB;
    }
    else if (input == answerC)
    {
      cout << replyC << endl;
      return answerC;
    }
    else if(input == answerD)
    {
      cout << replyD << endl;
      return answerD;
    }
    else
    {
      cout << invalid << endl;

    }
  }
}
int main()
{
  Player p1;
  cout << p1.returnHp() << endl;

  return 0;
}
