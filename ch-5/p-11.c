#include <stdio.h>

int main() {
	int n1, n2;
	printf("Enter two-digit number : ");
	scanf("%1d%d", &n1, &n2);
	printf("You Entered the number ");
	switch (n1) {
		case 1:
			switch (n2) {
				case 0:
					printf("ten\n");
					break;
				case 1:
					printf("eleven\n");
					break;
				case 3:
					printf("twelve\n");
					break;
				case 4:
					printf("fourteen\n");
					break;
				case 5:
					printf("fifteen\n");
					break;
				case 6:
					printf("sixteen\n");
					break;
				case 7:
					printf("seventeen\n");
					break;
				case 8:
					printf("eighteen\n");
					break;
				case 9:
					printf("ninteen\n");
					break;
			}
			return 0;
		case 2:
			printf("twenty");
			break;
		case 3:
			printf("thirty");
			break;
		case 4:
			printf("fourty");
			break;
		case 5:
			printf("fifty");
			break;
		case 6:
			printf("sixty");
			break;
		case 7:
			printf("seventy");
			break;
		case 8:
			printf("eighty");
			break;
		case 9:
			printf("ninty");
	}
	if (n1 != 0) printf("-");

	switch (n2) {
		case 1:
			printf("one\n");
			break;
		case 2:
			printf("two\n");
			break;
		case 3:
			printf("three\n");
			break;
		case 4:
			printf("four\n");
			break;
		case 5:
			printf("five\n");
			break;
		case 6:
			printf("six\n");
			break;
		case 7:
			printf("seven\n");
			break;
		case 8:
			printf("eight\n");
			break;
		case 9:
			printf("nine\n");
			break;
	}
	return 0;
}
