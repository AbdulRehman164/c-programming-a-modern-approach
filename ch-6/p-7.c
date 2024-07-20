#include <stdio.h>

int main() {
	int n, odd, square;
	printf("Enter a number : ");
	scanf("%d", &n);

	square = odd = 1;
	for (int i = 1; i <= n; i++) {
		printf("%10d%10d\n", i, square);
		square += odd += 2;
	}
	return 0;
}
