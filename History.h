//
//  History.hpp
//  Project 1
//
//  Created by Drew Wan on 4/6/23.
//

#ifndef History_h
#define History_h
#include "globals.h"
#include <stdio.h>

class History {

public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
    
private:
    int h_rows;
    int h_cols;
    
    char c_grid[MAXROWS][MAXCOLS];
    //int i_grid[MAXROWS][MAXCOLS];
   
    
};
#endif 

