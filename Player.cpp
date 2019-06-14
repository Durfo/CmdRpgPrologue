#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
  this->hp = 10;
}
}
int Player::returnHp()
{
  return this->hp;

}
void Player::addHp(int gain)
{
  this->hp += gain;

}
void Player::subHp(int loss)
{
  this->hp -= loss;
}
