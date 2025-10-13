/*
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
and diagonals:
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
If the row, column, and diagonal sums are all the same (as they are in this example), the
numbers are said to form a magic square. The magic square shown here appears in a 1514
engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the
last row give the date of the engraving.)

*/

#include <stdio.h>

int main(){
	int nNumber1, nNumber2, nNumber3, nNumber4, nNumber5, nNumber6, nNumber7, nNumber8, nNumber9, nNUmber10, nNumber11, nNumber12, nNumber13, nNumber14, nNumber15, nNumber16;
	int nRowSum1, nRowSum2, nRowSum3, nRowSum4, nColumnSum1, nColumnSum2, nColumnSum3, nColumnSum4;

	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &nNumber1, &nNumber2, &nNumber3, &nNumber4, &nNumber5, &nNumber6, &nNumber7, &nNumber8, &nNumber9, &nNUmber10, &nNumber11, &nNumber12, &nNumber13, &nNumber14, &nNumber15, &nNumber16);

	printf("%d %d %d %d\n", nNumber1, nNumber2, nNumber3, nNumber4);
	printf("%d %d %d %d\n", nNumber5, nNumber6, nNumber7, nNumber8);
	printf("%d %d %d %d\n", nNumber9, nNumber10, nNumber11, nNumber12);
	printf("%d %d %d %d\n", nNumber13, nNumber14, nNumber15, nNumber16);

	nRowSum1 = nNumber1 + nNumber2 + nNumber3 + nNumber4;
	nRowSum2 = nNumber5 + nNumber6 + nNumber7 + nNumber8;
	nRowSum3 = nNumber9 + nNumber10 + nNumber11 + nNumber12;
	nRowSum4 = nNumber13 + nNumber14 + nNumber15 + nNumber16;

	nColumnSum1 = nNumber1 + nNumber5 + nNumber9 + nNumber13;
	nColumnSum2 = nNumber2 + nNumber6 + nNumber10 + nNumber14;
	nColumnSum3 = nNumber3 + nNumber7 + nNumber11 + nNumber15;
	nColumnSum4 = nNumber4 + nNumber8 + nNumber12 + nNumber16;






