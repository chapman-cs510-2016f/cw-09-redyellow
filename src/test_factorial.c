#include <stdio.h>
#include "factorial.h"

int main(int argc, char **argv) {
	print_factorial();
	return 0;
}

void print_factorial() {
	printf("Factorial of 100 is: %d\n", factorial(100));
	printf("Factorial of 0 is: %d\n", factorial(0));
	printf("Factorial of -1 is: %d\n", factorial(-1));
}

