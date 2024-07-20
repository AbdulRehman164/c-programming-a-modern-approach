#include <stdio.h>

int main() {
	int n, w;
	printf("Enter number of days in month : ");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
	scanf("%d", &w);

	for (int j = 1; j < w; j++) printf("\t");

	for (int i = 1; i <= n; i++, w++) {
		if (w == 8) {
			printf("\n");
			w = 1;
		}

		printf("%d\t", i);
	}
	return 0;
}
