#include <stdio.h>
#define PI 3.1416f

int main() {
	int r;
	printf("Enter Radius : ");
	scanf("%d", &r);
	printf("Volume of sphere is : %f : ", (4.0f / 3.0f) * PI * (r * r * r));
	return 0;
}
