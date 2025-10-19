/*
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
terms:
Enter a fraction: 6/12
In lowest terms: 1/2
Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD.
*/

#include <stdio.h>

int main(void){
	int nNumerator, nDenominator, nRemainder, n, m, nGCD;
	int nNumeratorLowestTerm=0, nDenominatorLowestTerm=0;

	printf("Enter a fraction: ");
	scanf("%d/%d", &nNumerator, &nDenominator);
	n = nDenominator;
	m = nNumerator;

	while (n !=0){

		nRemainder = m % n;
		m = n;
		n = nRemainder;
	}

	nGCD = m;

	nNumeratorLowestTerm = nNumerator / nGCD;
	nDenominatorLowestTerm = nDenominator / nGCD;

	printf("In lowest term %d/%d\n", nNumeratorLowestTerm, nDenominatorLowestTerm);

	return 0;
}







