#include <stdio.h>

int main() {
	for (int n, sum = 0;;) {
		printf("Enter a number : ");
		scanf("%d", &n);

		if (n <= 0) {
			printf("The sum is : %d\n", sum);
			break;
		}

		sum += n;
	}
	return 0;
}
