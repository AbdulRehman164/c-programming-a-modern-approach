#include <stdio.h>

int main() {
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	for (int i = 1;; i++) {
		if (i * i > n) break;
		if (i * i % 2 == 0) printf("%d\n", i * i);
	}

	return 0;
}
