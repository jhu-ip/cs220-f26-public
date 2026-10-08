#ifndef IMAGE_MANIP_H
#define IMAGE_MANIP_H

#include "ppm_io.h"

// store PI as a constant
#define PI 3.14159265358979323846

// macro to square a number
#define sq(X) ((X) * (X))

///////////////////////////////
// Suggested helper function //
///////////////////////////////

/* Convert a RGB pixel to a single grayscale intensity;
* uses NTSC standard conversion
*/
unsigned char pixel_to_gray( Pixel p );

//////////////////////////////////
// Image manipulation functions //
//////////////////////////////////

//______grayscale______
/* convert an image to grayscale (NOTE: pixels are still
 * RGB, but the three values will be equal)
 */
Image grayscale( const Image in );

//______crop______
/* takes an image and points defining a bounding box,
* and crops that box out of the image, returning a newly
* created image containing just the cropped region
*/
Image crop( const Image in , Point top_left , Point bot_right );

//______rotate_ccw______
/* rotate the input image counter-clockwise
 */
Image rotate_ccw( const Image in );

//_______pointilism________
/* apply a painting like effect, i.e. pointilism technique.
*/
Image pointilism( const Image in , unsigned int seed );

//______blur______
/* apply a blurring filter to the image
*/
Image blur( const Image in , double sigma );

// _______alpha blend________
 /* blend two images into one using the given alpha factor
 */
Image blend( const Image in1, const Image in2 , double alpha );

#endif
