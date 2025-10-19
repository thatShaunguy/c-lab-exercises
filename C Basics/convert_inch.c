#include <stdio.h>

int main()
{
	int   inch;
	float feet,
	      yard,
		  cm;
		  
	//gets input value in inches
	printf("Enter value in inches: ");
	scanf("%d", &inch);
	
	/*
	INCHES CONVERSION TABLE
	
	| Feet      | inch / 12.0
	| Yard      | inch / 36.0
	| Centimeter| inch * 2.54
	| Meter     | (inch * 2.54) / 100
	*/
	
	//conversions
	feet = inch / 12.00;
	yard = feet / 3.00;
	cm = inch * 2.54;
	
	//validate inputted value and displays in plain text
	if (inch < 0)
	{
		printf("Invalid value");
		return 1;
	}	
	else if (inch == 1)
	{
		printf("\n%d inch is equivalent to:\n\n", inch);
	}
	else
	{
		printf("\n%d inches are equivalent to:\n\n", inch);
	}
	
	
	//display values in converted units
	printf("Feet = %f\n", feet);
	printf("Yard = %f\n", yard);
	printf("Centimeters = %2f\n", cm);
	printf("Meters = %f", cm / 100);
	
	return 0;
}
