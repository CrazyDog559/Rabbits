//
//  Arena.hpp
//  Project 1
//
//  Created by Drew Wan on 4/6/23.
//

#ifndef Arena_h
#define Arena_h

#include <stdio.h>
#include <iostream>
#include "globals.h"
//#include "Player.h"
//#include "Rabbit.h"
#include "History.h"

class Rabbit;
class Player;
using namespace std;



class Arena
{
  public:
      // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();

      // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     rabbitCount() const;
    int     getCellStatus(int r, int c) const;
    int     numberOfRabbitsAt(int r, int c) const;
    void    display(string msg) const;

      // Mutators
    void setCellStatus(int r, int c, int status);
    bool addRabbit(int r, int c);
    bool addPlayer(int r, int c);
    void moveRabbits();
    
    History& history();

  private:
    int     m_grid[MAXROWS][MAXCOLS];
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Rabbit* m_rabbits[MAXRABBITS];
    int     m_nRabbits;
    int     m_turns;
    
    History m_history;

      // Helper functions
    void checkPos(int r, int c, string functionName) const;
    bool isPosInBounds(int r, int c) const;
};

#endif /* Arena_hpp */
