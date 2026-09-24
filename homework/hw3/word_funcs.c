#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>

#include "word_funcs.h"

/* Find best word in grid based on current position [r,c],
   updating the searched grid to capitalize and the word itself.
   Parameter list holds the valid words and size is how many are in it.
   Return the total point value of the word, or 0 if none found.
*/
int find_best(char crnt_grid[][MAX_GRID], int cols, char word[], int r, int c,
              char list[][MAX_LENGTH], int size) {


  // try adding current letter to word

  // if the resulting word is valid, calculate points & print

  // if c is not the last column (implicit base case), try to extend
     // recurse using cell to the right
     // if result is better
        // capitalize the current letter
        // return these better points
     // otherwise (extend fails) reset extend attempt
       // remove next character from word
       // uncapitalize next character from grid

  // if valid new word ends at r, c
    // capitalize current character in grid
    // return points
  // otherwise undo word inclusion of current character & return 0

  return 0;  // replace with appropriate value
}


// This function is complete!
int read_grid(int rows, int cols, FILE* infile, char grid[][MAX_GRID]) {
  int code;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      code = fscanf(infile, " %c", &grid[i][j]);
      if (code != 1) {
        return GRID_ERROR;
      }
    }
  }
  return 0;  // success
}

// 2D array copy rectangular area between 0,0 and rows,cols
void copy(char dest[][MAX_GRID], char orig[][MAX_GRID], int rows, int cols) {
  // TODO: write this function
}

// calculate and return total points for a word
int points(char word[]) {
  // based on original English scrabble point values
  static const int values[26] = {1, 3, 3, 2, 1, 4, 2, 4,
      1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

  // TODO: write this function
  return 0; // replace with appropriate value
}

// TODO: add function called "find_word" to conduct a binary search for a word in a word list
