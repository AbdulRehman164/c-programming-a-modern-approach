#include <stdio.h>

int main() {
	int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, check;
	printf("Enter the first 11 digits of UPC : ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &p1, &p2, &p3, &p4, &p5, &p6,
		  &p7, &p8, &p9, &p10, &p11, &check);
	int sum1 = p1 + p3 + p5 + p7 + p9 + p11;
	int sum2 = p2 + p4 + p6 + p8 + p10;

	int computedCheck = 9 - (sum1 * 3 + sum2 - 1) % 10;

	if (computedCheck == check)
		printf("VALID\n");
	else
		printf("NOT VALID\n");

	return 0;
}
