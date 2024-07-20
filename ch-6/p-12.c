#include <stdio.h>

int main() {
	float n, term = 0, e = 1.0f;
	printf("Enter a number : ");
	scanf("%f", &n);
	for (int i = 1, denom = 1; term > n; i++) {
		term = 1.0f / (denom *= i);
		e += term;
	}
	printf("%f\n", e);
	return 0;
}
