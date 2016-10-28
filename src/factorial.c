#include "factorial.h"

/* Definition for "factorial"
 * Note: this must match the type specified in the header file above
 */

int factorial(int n) {
    /* By convention in C, all variables must by type defined at the top
     * of each function */
	int fac;
	if (n >= 0){
		fac = 1; 
	}
	else{
		fac = -1;
	}

	while (n > 0) {
        /* var-- reads the contents of an integer variable, then decrements
           --var decrements the contents of an integer variable, then returns
         */
        // a *= b is equivalent to a = a * b
        fac *= n;
        n--;
    }
    return fac;
}
