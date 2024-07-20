#include <stdio.h>

int main() {
	int t1, t2, t3, t4, t5, t6, t7, t8;
	t1 = 8 * 60;		// 8:00 am
	t2 = 9 * 60 + 43;	// 9:43 am
	t3 = 11 * 60 + 19;	// 11:19 am
	t4 = 12 * 60 + 47;	// 12:47 pm
	t5 = 14 * 60;		// 2:00 pm
	t6 = 15 * 60 + 45;	// 3:45 pm
	t7 = 19 * 60;		// 7:00 pm
	t8 = 21 * 60 + 45;	// 9:45 pm

	int userh, userm, usert;
	printf("Enter a 24-hour time : ");
	scanf("%2d:%2d", &userh, &userm);

	usert = userh * 60 + userm;

	int td1, td2, td3, td4, td5, td6, td7, td8;
	// finding the difference
	td1 = (t1 > usert) ? t1 - usert : usert - t1;
	td2 = (t2 > usert) ? t2 - usert : usert - t2;
	td3 = (t3 > usert) ? t3 - usert : usert - t3;
	td4 = (t4 > usert) ? t4 - usert : usert - t4;
	td5 = (t5 > usert) ? t5 - usert : usert - t5;
	td6 = (t6 > usert) ? t6 - usert : usert - t6;
	td7 = (t7 > usert) ? t7 - usert : usert - t7;
	td8 = (t8 > usert) ? t8 - usert : usert - t8;

	int smallest = td1;
	int closestT = t1;
	int arrivalT = 10 * 60 + 16;
	if (td2 < smallest) {
		smallest = td2;
		closestT = t2;
		arrivalT = 11 * 60 + 52;
	}
	if (td3 < smallest) {
		smallest = td3;
		closestT = t3;
		arrivalT = 1 * 60 + 31;
	}
	if (td4 < smallest) {
		smallest = td4;
		closestT = t4;
		arrivalT = 3 * 60;
	}
	if (td5 < smallest) {
		smallest = td5;
		closestT = t5;
		arrivalT = 4 * 60 + 8;
	}
	if (td6 < smallest) {
		smallest = td6;
		closestT = t6;
		arrivalT = 5 * 60 + 55;
	}
	if (td7 < smallest) {
		smallest = td7;
		closestT = t7;
		arrivalT = 9 * 60 + 20;
	}
	if (td8 < smallest) {
		smallest = td8;
		closestT = t8;
		arrivalT = 11 * 60 + 58;
	}

	printf("%d\n", smallest);
	int closestH = closestT / 60;
	int closestM = closestT % 60;
	int arrivalH = arrivalT / 60;
	int arrivalM = arrivalT % 60;

	printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n",
		   closestH, closestM, arrivalH, arrivalM);

	return 0;
}
