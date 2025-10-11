/*
 Write a program that asks the user to enter a dollars-and-cents amount, then displays the
amount with 5% tax added:
Enter an amount: 100.00
With tax added: $105.00
*/

#include <stdio.h>
#define TAX 0.05f

int main(){
	float amount, result;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	result = amount + (amount * TAX);
	printf(" With tax added: %f\n", result);
	return 0;
}


