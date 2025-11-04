#include <stdio.h>

float 
nExponent (int base, int exp)
{
	float ans = base; //Temporary variable to store the current working value after each iteration
	
	if (exp == 0) // Answer = 1 when the exponent is 0
		return 1;
	
	while (exp != 1 && exp != -1)
	{
		ans = ans * base;
		
		if (exp > 0)	// Counter for the amount of multiplication steps required for negative and positive exponents
			exp -= 1;
		else
			exp += 1;
	}
	
	if (exp < 0) // Gets the derivative if the exponent is negative
		return 1.000 / ans;
	
	return ans;
}


int 
main ()
{
	int nBase, nExp;
	
	printf("Input base: ");
	scanf("%d", &nBase);
	printf("Input exponent: ");
	scanf("%d", &nExp);
	
	printf("Answer: %.3f", nExponent (nBase, nExp));
	
	return 0;
}
