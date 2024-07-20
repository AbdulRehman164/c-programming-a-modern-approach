#include <stdio.h>

int main() {
	int hours, mins;
	printf("Enter 24-hour time : ");
	scanf("%d:%d", &hours, &mins);

	if (hours > 12) {
		printf("%.2d:%.2d", hours - 12, mins);
		if (hours == 24)
			printf("am\n");
		else
			printf("pm\n");
	} else {
		printf("%.2d:%.2d", hours, mins);
		if (hours == 12)
			printf("pm\n");
		else
			printf("am\n");
	}

	return 0;
}
