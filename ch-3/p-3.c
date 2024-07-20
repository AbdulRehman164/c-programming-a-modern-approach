#include <stdio.h>

int main() {
	int gs1, groupIdentifier, publisherCode, itemNo, checkNo;
	printf("Enter ISBN : ");
	scanf("%d-%d-%d-%d-%d", &gs1, &groupIdentifier, &publisherCode, &itemNo,
		  &checkNo);
	printf("GS1 prefix : %d\n", gs1);
	printf("Group Idenifier : %d\n", groupIdentifier);
	printf("Publisher Code : %d\n", publisherCode);
	printf("Item number : %d\n", itemNo);
	printf("Check digit : %d\n", checkNo);
	return 0;
}
