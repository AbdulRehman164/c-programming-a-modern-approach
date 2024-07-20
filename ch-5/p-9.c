#include <stdio.h>

int main() {
	int m1, d1, y1, m2, d2, y2;
	int earlier = 1;  // 1 : first is earlier, 2: second is earlier, 3: equal

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m1, &d1, &y1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m2, &d2, &y2);

	if (y1 == y2 && d1 == d2 && m1 == m2)
		earlier = 3;
	else if (y2 < y1) {
		earlier = 2;
	} else {
		if (m2 < m1) {
			earlier = 2;
		} else {
			if (d2 < d1) {
				earlier = 2;
			}
		}
	}

	if (earlier == 1)
		printf("%.2d/%.2d/%.2d is earlier %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2,
			   y2);
	else if (earlier == 2)
		printf("%.2d/%.2d/%.2d is earlier %.2d/%.2d/%.2d\n", m2, d2, y2, m1, d1,
			   y1);
	else
		printf("Both dates are equal\n");

	return 0;
}
