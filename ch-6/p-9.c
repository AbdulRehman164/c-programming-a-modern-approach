#include <stdio.h>

int main() {
	float amountOfLoan, interestRate, monthlyPayment;
	int noOfPayments;
	printf("Enter amount of loan : ");
	scanf("%f", &amountOfLoan);
	printf("Enter interest rate : ");
	scanf("%f", &interestRate);
	printf("Enter monthly payment : ");
	scanf("%f", &monthlyPayment);
	printf("Enter no of payments : ");
	scanf("%d", &noOfPayments);

	float monthlyInterestRate = interestRate / 100 * amountOfLoan / 12;
	float monthlyReaminingPayment = monthlyPayment - monthlyInterestRate;

	for (int i = 1; i <= noOfPayments; i++) {
		printf("Remaining balance payment no %d : %.2f\n", i,
			   amountOfLoan - monthlyReaminingPayment * i);
	}

	return 0;
}
