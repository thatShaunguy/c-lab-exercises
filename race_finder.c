#include <stdio.h>

int main ()
{
	int nTime;
	printf("Input time: ");
	scanf("%d", &nTime);
	
	int nLatest = nTime % 170;
	
	// Compare time values with the current lap
	if (nLatest <= 30 && nLatest != 0)
		printf("The car is in the CONCRETE section");
		
	else if (nLatest <= 85 && nLatest != 0)
		printf("The car is in the MUD section");
		
	else if (nLatest <= 132 && nLatest != 0)
		printf("The car is in the SAND section");
		
	else
		printf("The car is in the ASPHALT section");
	
	return 0;
}
