#include <stdio.h>

int main ()
{
	int nEven = 0,
		nOdd = 1,
		nLimit;
	
	//Store upper bound input
	printf("Input upper limit: ");
	scanf("%d", &nLimit);
	
	//display even numbers
	printf("\n%d total even values.\n", nLimit / 2 + 1);
	printf("Even numbers:\n");
	do
	{
		printf("%d", nEven);
		nEven += 2;
		if (nEven <= nLimit)
			printf(", ");
	}
	while (nEven <= nLimit);

	//display odd numbers
	printf("\n\n%d total odd values.\n", (nLimit + 1) / 2);
	printf("Odd numbers:\n");
	do
	{
		printf("%d", nOdd);
		nOdd += 2;
		if (nOdd <= nLimit)
			printf(", ");
	}
	while (nOdd <= nLimit);
	
	return 0;
}
