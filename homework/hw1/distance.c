// Compile with: 
// gcc -lm -std=c99 -pedantic -Wall -Wextra distance.c -o distance

#include <stdio.h>
#include <math.h>

// some systems define this constant, but it's not guaranteed
#ifndef M_PI
#define M_PI  3.14159265358979323846
#endif

// used in distance calculation formula
#define EARTH_RADIUS_MILES 3959
#define MAX_LOCATIONS 8

// error codes
#define ERROR_BAD_OPTION 1
#define ERROR_LOCATION_COUNT_EXCEEDED 2
#define ERROR_BAD_LABEL 3
#define ERROR_BAD_COORDINATES 4

int main() {

    return 0;

}