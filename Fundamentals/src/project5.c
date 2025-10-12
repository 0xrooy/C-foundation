/*
 Write a program that formats product information entered by the user. A session with the
program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
Item
583
Unit
Price
$ 13.50
Purchase
Date
10/24/2010
The item number and date should be left justified; the unit price should be right justified.
Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
*/

#include <stdio.h>

int main(){
	int nItemNumber, nDay, nMonth, nYear;
	float fUnitPrice;

	printf("Enter item number: ");
	scanf("%d", &nItemNumber);
	printf("Enter unit price: ");
	scanf("%f", &fUnitPrice);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &nDay, &nMonth, &nYear);

	printf("Item	Unit Price	Purchase Date\n");
	printf("%d	$ %.2f		%d/%d/%d\n", nItemNumber, fUnitPrice, nDay, nMonth, nYear);
	return 0;
}


