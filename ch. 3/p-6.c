#include <stdio.h>

int main() {
	int f11, f12, f21, f22;
	printf("Enter two fractions seprated by plus sign : ");
	scanf("%d/%d+%d/%d", &f11, &f12, &f21, &f22);
	printf("The sum is %d/%d", f11 * f22 + f21 * f12, f22 * f12);
	return 0;
}
