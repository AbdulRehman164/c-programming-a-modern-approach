#include <stdio.h>

int main() {
	int m, d, y, em, ed, ey;
	em = ed = ey = 0;

	for (;;) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &m, &d, &y);

		if (em == 0 && ed == 0 && ey == 0) {
			em = m;
			ed = d;
			ey = y;
		}

		if (m == 0 && d == 0 & y == 0) break;
		if (y < ey) {
			ey = y;
			em = m;
			ed = d;
		} else if (y == ey) {
			if (m < em) {
				ey = y;
				em = m;
				ed = d;
			} else if (m == em) {
				if (d < ed) {
					ey = y;
					em = m;
					ed = d;
				}
			}
		}
	}

	printf("%.2d/%.2d/%.2d is the earliest date\n", em, ed, ey);

	return 0;
}
