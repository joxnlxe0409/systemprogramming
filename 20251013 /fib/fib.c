#include "fib.h"

unsigned long long fib_iterative(int n){
	if(n <= 1) return n;
	unsigned long long a = 0, b = 1, temp;
	for(int i = 2; i <= n; i++){
		temp = a + b;
		a = b;
		b = temp;
	}
	return b;
}
