#include <stdio.h>
int main(void) {
	int d1, s2, d3;
	int val;
	printf("Enter phone number [(999)999-9999]:\n");
	val=scanf("(%d)%d-%d", &d1, &s2, &d3);
	if (val==3)
		printf("You entered %d.%d.%d", d1, s2, d3);
	else
		printf("Invalid input\n");
	return 0;
}

