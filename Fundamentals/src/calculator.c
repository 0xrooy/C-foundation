/* This program is the calculator program used by me to experiment the expression and calculation in C programming */

#include <stdio.h>

int main(){
	int digit;
	long n;

	printf("Enter your number: ");
	scanf("%ld", &n);

	digit = n % 10;
	printf("%d", digit);


	return 0;
}





