#include <stdio.h>

int main() {
	int m, n;
	printf("Enter two integers : ");
	scanf("%d %d", &m, &n);
	for (;;) {
		if (n == 0) {
			printf("GCD is : %d\n", m);
			break;
		}
		int r = m % n;
		m = n;
		n = r;
	}
	return 0;
}
