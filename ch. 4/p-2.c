#include <stdio.h>

int main() {
	int num;
	printf("Enter a three-digit number : ");
	scanf("%d", &num);

	int rev = num % 10 * 100 + num % 100 / 10 * 10 + num / 100;
	printf("The reversal is : %.3d\n", rev);
	return 0;
}
