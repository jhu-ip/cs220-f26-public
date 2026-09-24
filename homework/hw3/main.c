#include <stdio.h>
#include <string.h>

#include "word_funcs.h"

int main(int argc, char* argv[]) {

  // argc check and error handling
  if (argc != 3) {
    printf("Error: program usage requires two files names - grid and word list\n");
    return USAGE_ERROR;
  }

  // TODO: declare variables, file handling, error checks, get input
  // HINT: use provided function(s), create other(s)

  // TODO: proceed to search for highest point word in grid -----------
  // feel free to change, delete, add variables - these are suggestions
  
  int best_points = 0;
  char best_word[MAX_LENGTH] = {0};  
  char best_grid[MAX_GRID][MAX_GRID] = {0};

  // TODO: search from each grid position -----------------------------------

      // SUGGESTED APPROACH:
      // create temporary variables for just this search
      // copy the original grid to a temporary grid
      // call find_best and store returned points
      // if better points found, update the best variables & print to file


  // TODO: print overall best result on screen and to output file

  // TODO: write best grid (with capitalization) to output file

  // TODO: close files
  
  return 0;
}

