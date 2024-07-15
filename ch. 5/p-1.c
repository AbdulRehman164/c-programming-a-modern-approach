#include <stdio.h>

int main() {
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	if (num < 10)
		printf("Number has one digit\n");
	else if (num < 100)
		printf("Number has two digits\n");
	else if (num < 1000)
		printf("Number has three digits\n");
	else
		printf("Number has four digits\n");
	return 0;
}
