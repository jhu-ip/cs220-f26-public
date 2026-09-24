#ifndef WORD_FUNCS
#define WORD_FUNCS

#include <stdio.h>

// ASSUMED LIMITS

#define MAX_LENGTH 16   // of a single word, including null
#define MAX_WORDS 500000   // max # of words  in file
#define MAX_GRID 20   // max dimension for grid rows, cols

#define USAGE_ERROR 1
#define FILE_OPEN_ERROR 2
#define GRID_ERROR 3
#define WORDS_ERROR 4

// TODO: add function called "find_word" to conduct a binary search for a word in a word list

/* Get point value for a lower-case string
 */
int points(char word[]);

/* Copy from a 2D array into another based on actual size (rows, cols)
*/
void copy(char dest[][MAX_GRID], char orig[][MAX_GRID], int rows, int cols);

/* Read grid, storing in 2D array
   Return 0 if successful, other errors codes if not
*/
int read_grid(int rows, int cols, FILE* infile, char grid[][MAX_GRID]);

/* Find best word in grid based on current position [r,c],
   updating the searched grid to capitalize and the word itself.
   Parameter list holds the valid words and size is how many are in it.
   Return the total point value of the word, or 0 if none found.
*/
int find_best(char crnt_grid[][MAX_GRID], int cols, char word[], int r, int c,
              char list[][MAX_LENGTH], int size);

#endif
