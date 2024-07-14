#include <stdio.h>

int main() {
	int mm, dd, yyyy;
	printf("Enter a date : ");
	scanf("%2d/%2d/%4d", &mm, &dd, &yyyy);
	printf("%.4d/%.2d/%.2d", yyyy, mm, dd);
	return 0;
}
