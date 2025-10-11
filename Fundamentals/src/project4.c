/*
 Write a program that calculates the remaining balance on a loan after the first, second, and
third monthly payments:
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66
Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
Display each balance with two digits after the decimal point. Hint: Each month, the balance
is decreased by the amount of the payment, but increased by the balance times the monthly
interest rate. To find the monthly interes
*/

#include <stdio.h>

int main(void)
{
    float fLoanAmount;
    float fInterestRate;
    float fMonthlyPayment;
    float fFirstBalance;
    float fSecondBalance;
    float fThirdBalance;

    printf("Enter loan amount: ");
    scanf("%f", &fLoanAmount);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &fInterestRate);

    printf("Enter monthly payment: ");
    scanf("%f", &fMonthlyPayment);

    // Convert annual rate to monthly
    float fMonthlyRate = (fInterestRate / 100.0f) / 12.0f;

    // First payment balance
    fFirstBalance = fLoanAmount - (fMonthlyPayment - (fLoanAmount * fMonthlyRate));

    // Second payment balance
    fSecondBalance = fFirstBalance - (fMonthlyPayment - (fFirstBalance * fMonthlyRate));

    // Third payment balance
    fThirdBalance = fSecondBalance - (fMonthlyPayment - (fSecondBalance * fMonthlyRate));

    printf("\nBalance after first payment: %.2f\n", fFirstBalance);
    printf("Balance after second payment: %.2f\n", fSecondBalance);
    printf("Balance after third payment: %.2f\n", fThirdBalance);

    return 0;
}

