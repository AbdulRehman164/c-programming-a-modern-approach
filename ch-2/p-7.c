#include <stdio.h>

int main() {
	int amount;
	printf("Enter amount in dollar : ");
	scanf("%d", &amount);

	int _20 = amount / 20;
	int _10 = (amount - 20 * _20) / 10;
	int _5 = ((amount - 20 * _20) - 10 * _10) / 5;
	int _1 = (((amount - 20 * _20) - 10 * _10) - 5 * _5);

	printf("$20 : %d \n", _20);
	printf("$10 : %d \n", _10);
	printf("$5  : %d \n", _5);
	printf("$1  : %d \n", _1);

	return 0;
}
