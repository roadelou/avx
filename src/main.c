/********************************** METADATA **********************************/

/*
* Contributors: roadelou
* Contacts: 
* Creation Date: 2021-08-31
* Language: C Source
*/

/********************************** INCLUDES **********************************/

// Used for the AVX intrinsics.
#include <immintrin.h>

// Used for printf.
#include <stdio.h>

/********************************* SINGLETONS *********************************/

/* The static global variables for your code goe here. */

/********************************* PROTOYPES **********************************/

/* The prototypes of your functions go here. */

/************************************ MAIN ************************************/

int main(int argc, const char **argv) {
	/* Initialize the two argument vectors */
  	__m256 evens = _mm256_set_ps(2.0, 4.0, 6.0, 8.0, 10.0, 12.0, 14.0, 16.0);
  	__m256 odds = _mm256_set_ps(1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0);

  	/* Compute the difference between the two vectors */
  	__m256 result = _mm256_sub_ps(evens, odds);

  	/* Display the elements of the result vector */
  	float* f = (float*)&result;
  	printf("%f %f %f %f %f %f %f %f\n",
  	  f[0], f[1], f[2], f[3], f[4], f[5], f[6], f[7]);

  	return 0;
}

/********************************* FUNCTIONS **********************************/

/* The functions for your code go here. */

/************************************ EOF *************************************/
