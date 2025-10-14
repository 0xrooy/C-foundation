/*
Programming Project 9 in Chapter 5 asked you to write a program that determines which of
two dates comes earlier on the calendar. Generalize the program so that the user may enter
any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:
Enter a date (mm/dd/yy): 3/6/08
Enter a date (mm/dd/yy): 5/17/07
Enter a date (mm/dd/yy): 6/3/07
Enter a date (mm/dd/yy): 0/0/0
5/17/07 is the earliest date
*/

#include <stdio.h>

int main(){

	int nMonth, nDay, nYear, nMinMonth, nMinDay, nMinYear;

	do{
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &nMonth, &nDay, &nYear);

		if (nYear <= nMinYear && nYear != 0){
			nMinYear = nYear;
			if (nMonth <= nMinMonth && nMonth != 0){
				nMinMonth=nMonth;
				if (nDay <= nMinDay && nDay != 0){
					nMinDay = nDay;
				}
			}
		}


	}while (nMonth != 0 && nDay != 0 && nYear !=0);

	printf("%d/%d/%d is the earliest date\n", nMinMonth, nMinDay, nMinYear);
	return 0;
}


