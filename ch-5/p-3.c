#include <stdio.h>

int main() {
	int n, price, rival;
	printf("Enter number of shares : ");
	scanf("%d", &n);
	printf("Enter price per share : ");
	scanf("%d", &price);

	if (n < 2000)
		rival = 33 + 0.03 * n;
	else
		rival = 33 + 0.02 * n;

	printf("Rival Broker commision : $%d\n", rival);
	return 0;
}
