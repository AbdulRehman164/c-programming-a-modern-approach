#include <stdio.h>

int main() {
	int val;
	float commision;
	for (;;) {
		printf("Enter value of trade : ");
		scanf("%d", &val);
		if (val <= 0)
			break;
		else if (val < 2500)
			commision = 30 + 0.017f * val;
		else if (val >= 2500 && val < 6250)
			commision = 56 + 0.0066f * val;
		else if (val >= 6250 && val < 20000)
			commision = 76 + 0.0034f * val;
		else if (val >= 20000 && val < 50000)
			commision = 100 + 0.0022f * val;
		else if (val >= 50000 & val < 500000)
			commision = 155 + 0.0011f * val;
		else
			commision = 255 + 0.0009f * val;
		printf("Commision : %.2f\n", commision);
	}
	return 0;
}
