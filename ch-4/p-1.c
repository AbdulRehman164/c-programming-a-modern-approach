#include <stdio.h>

int main() {
	int num;
	printf("Enter a two-digit number : ");
	scanf("%d", &num);
	printf("The reversal is : %.2d", num % 10 * 10 + num / 10);
	return 0;
}
