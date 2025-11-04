#include <stdio.h>

/*
 * Recieves repeated inputs from the user until sentinel value -999 is inputted
 * Stores the highest and lowest values in *pMax and *pMin respectively
 */
void 
nMaxmin (int *pMax, int *pMin) 
{
	int nInput;
	int	nSwitch = 1; // Flag to detect the first input
	
	do
	{
		printf("Input: ");
		scanf("%d", &nInput);
		
		if (nInput != -999)
		{
			//Initialize *pMax and *pMin on the first input
			if (nSwitch)
			{
				*pMax = nInput;
				*pMin = nInput;
				nSwitch--;
			}
			
			// Compare current values of pMax and pMin with the latest user input.
			if (*pMax < nInput)
				*pMax = nInput;
			
			if (*pMin > nInput)
				*pMin = nInput;
		}
	} while (nInput != -999);
	
}

int main()
{
	int nHigh, nLow;
	
	nMaxmin(&nHigh, &nLow);
	
	printf("Max: %d\nMin: %d", nHigh, nLow);
	
	return 0;
}

