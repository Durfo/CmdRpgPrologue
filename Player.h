#ifndef PLAYER
#define PLAYER

class Player
{
  public:
    //data section
    int hp = 0;

    //constructors
    Players();


    //getters
    int returnHp;


    //mutators

    void addHp(int gain);

    void subHp(int loss);

};


#endif
