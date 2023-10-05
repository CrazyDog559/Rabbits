//
//  Player.hpp
//  Project 1
//
//  Created by Drew Wan on 4/6/23.
//

#ifndef Player_h
#define Player_h

#include <stdio.h>
#include <iostream>
using namespace std;

class Arena;

class Player
{
  public:
      // Constructor
    Player(Arena* ap, int r, int c);

      // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;

      // Mutators
    string dropPoisonedCarrot();
    string move(int dir);
    void   setDead();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    bool   m_dead;
};
#endif /* Player_hpp */
