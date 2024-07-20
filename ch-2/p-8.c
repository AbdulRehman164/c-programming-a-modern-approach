#include <stdio.h>

int main() {
	float amountOfLoan, interestRate, monthlyPayment;
	printf("Enter amount of loan : ");
	scanf("%f", &amountOfLoan);
	printf("Enter interest rate : ");
	scanf("%f", &interestRate);
	printf("Enter monthly payment : ");
	scanf("%f", &monthlyPayment);

	float monthlyInterestRate = interestRate / 100 * amountOfLoan / 12;
	float monthlyReaminingPayment = monthlyPayment - monthlyInterestRate;

	float balanceAfterFirstPayment = amountOfLoan - monthlyReaminingPayment;
	float balanceAfterSecondPayment =
		amountOfLoan - monthlyReaminingPayment * 2;
	float balanceAfterThirdPayment = amountOfLoan - monthlyReaminingPayment * 3;

	printf("Remaining balance after first payment : %.2f\n",
		   balanceAfterFirstPayment);
	printf("Remaining balance after second payment : %.2f\n",
		   balanceAfterSecondPayment);
	printf("Remaining balance after third payment : %.2f\n",
		   balanceAfterThirdPayment);

	return 0;
}
