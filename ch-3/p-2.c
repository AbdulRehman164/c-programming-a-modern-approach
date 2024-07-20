#include <stdio.h>

int main() {
	int itemNo, mm, dd, yyyy;
	float unitPrice;
	printf("Enter item number : ");
	scanf("%d", &itemNo);
	printf("Enter unit price : ");
	scanf("%f", &unitPrice);
	printf("Enter purchase date: ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);

	printf("Item\tUnit Price\tPurchase Date\n");
	printf("%-4d\t$%8.2f\t%d/%d/%d\n", itemNo, unitPrice, mm, dd, yyyy);
	return 0;
}
