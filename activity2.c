#include <stdio.h>        // printf
#include <limits.h>       // named constants for min, max of C integer data types
#include <assert.h>       // assert




/** TODO TASK 3:
    * Write print statements to print the max values and sizes of each unsigned
    * integer type (short, int, long), based on the example of unsigned char.
    * 
    * References: printf format specifier, limits.h
    */
void utype_sizes() {
	printf("unsigned char | max: %hu | size: %zu\n", (unsigned char) UCHAR_MAX, sizeof(unsigned char));
}


int main() {
    // TASK 1: function call
    
    
    // TASK 2: place your function call here


    // TASK 3: function call
    utype_sizes();

    return 0;
}
