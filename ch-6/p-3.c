#include <stdio.h>

int main() {
	int n, d, gcd;
	printf("Enter a fraction : ");
	scanf("%d/%d", &n, &d);
	for (int n1 = n, d1 = d;;) {
		if (n1 == 0) {
			gcd = d1;
			break;
		}
		int r = d1 % n1;
		d1 = n1;
		n1 = r;
	}
	printf("The lowest terms : %d/%d\n", n / gcd, d / gcd);
	return 0;
}
