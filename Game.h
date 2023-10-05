//
//  Game.hpp
//  Project 1
//
//  Created by Drew Wan on 4/6/23.
//

#ifndef Game_h
#define Game_h

#include <stdio.h>
#include <iostream>

using namespace std;

class Arena;

class Game
{
  public:
      // Constructor/destructor
    Game(int rows, int cols, int nRabbits);
    ~Game();

      // Mutators
    void play();

   private:
    Arena* m_arena;

      // Helper functions
    string takePlayerTurn();
};

#endif /* Game_hpp */
