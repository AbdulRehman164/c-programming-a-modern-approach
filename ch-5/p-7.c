#include <stdio.h>

int main() {
	int w, x, y, z;
	printf("Enter four integers : ");
	scanf("%d%d%d%d", &w, &x, &y, &z);
	int smallest;
	int largest;

	largest = w;
	smallest = w;

	if (x > largest) largest = w;
	if (y > largest) largest = y;
	if (z > largest) largest = z;

	if (x < smallest) smallest = w;
	if (y < smallest) smallest = y;
	if (z < smallest) smallest = z;

	printf("largest : %d\nsmallest : %d\n", largest, smallest);
	return 0;
}
