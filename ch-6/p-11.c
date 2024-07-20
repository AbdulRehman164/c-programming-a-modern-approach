#include <stdio.h>

int main() {
	int n;
	float e = 1.0;
	printf("Enter a number : ");
	scanf("%d", &n);
	for (int i = 1, denom = 1; i <= n; i++) {
		e += 1.0f / (denom *= i);
	}
	printf("%f\n", e);
	return 0;
}
