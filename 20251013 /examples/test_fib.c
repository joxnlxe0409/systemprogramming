#include "fib.h"
#include <stdio.h>

int main(void){
	for(int i = 0; i <= 10; i++){
		printf("fib_iterative(%d) = %llu\n", i, fib_iterative(i));
	}
	return 0;
}
