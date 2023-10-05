//
//  History.cpp
//  Project 1
//
//  Created by Drew Wan on 4/6/23.
//

#include "History.h"
#include "globals.h"

//class Rabbit;

History::History(int nRows, int nCols) {
    h_rows = nRows;
    h_cols = nCols;
    for (int r = 1; r <= h_rows; r++) {
        for (int c = 1; c <= h_cols; c++) {
            //i_grid[r][c] = 0;
            c_grid[r-1][c-1] = '.';
        }
    }
            
}
bool History :: record(int r, int c) {
    
    
    if (r < 1 || c < 1 || r > h_rows || c > h_cols) {
        return false;
    }
    
    switch (c_grid[r-1][c-1]){
        case '.':
            c_grid[r-1][c-1] = 'A';
            break;
        case 'A':
            c_grid[r-1][c-1] = 'B';
            break;
        case 'B':
            c_grid[r-1][c-1] = 'C';
            break;
        case 'C':
            c_grid[r-1][c-1] = 'D';
            break;
        case 'D':
            c_grid[r-1][c-1] = 'E';
            break;
        case 'E':
            c_grid[r-1][c-1] = 'F';
            break;
        case 'F':
            c_grid[r-1][c-1] = 'G';
            break;
        case 'G':
            c_grid[r-1][c-1] = 'H';
            break;
        case 'H':
            c_grid[r-1][c-1] = 'I';
            break;
        case 'I':
            c_grid[r-1][c-1] = 'J';
            break;
        case 'J':
            c_grid[r-1][c-1] = 'K';
            break;
        case 'K':
            c_grid[r-1][c-1] = 'L';
            break;
        case 'L':
            c_grid[r-1][c-1] = 'M';
            break;
        case 'M':
            c_grid[r-1][c-1] = 'N';
            break;
        case 'N':
            c_grid[r-1][c-1] = 'O';
            break;
        case 'O':
            c_grid[r-1][c-1] = 'P';
            break;
        case 'P':
            c_grid[r-1][c-1] = 'Q';
            break;
        case 'Q':
            c_grid[r-1][c-1] = 'R';
            break;
        case 'R':
            c_grid[r-1][c-1] = 'S';
            break;
        case 'S':
            c_grid[r-1][c-1] = 'T';
            break;
        case 'T':
            c_grid[r-1][c-1] = 'U';
            break;
        case 'U':
            c_grid[r-1][c-1] = 'V';
            break;
        case 'V':
            c_grid[r-1][c-1] = 'W';
            break;
        case 'W':
            c_grid[r-1][c-1] = 'X';
            break;
        case 'X':
            c_grid[r-1][c-1] = 'Y';
            break;
        case 'Y':
            c_grid[r-1][c-1] = 'Z';
            break;
        case 'Z':
            c_grid[r-1][c-1] = 'Z';
            break;
        default: c_grid[r-1][c-1] = 'Z';
        
    }
    
    return true;
   
    
    
}
void History :: display() const {
    clearScreen();
   
    for (int r = 1; r <= h_rows; r++){
            for (int c = 1; c <= h_cols; c++){
                cout << c_grid[r-1][c-1];
            }
            cout << endl;
        }
        cout << endl;
  
    
    
}
