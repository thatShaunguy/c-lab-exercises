#include <stdio.h>


int main ()
{
	float fPeso;
	printf("**********CURRENCY CONVERT**********\n");
	
	printf("Please input an amount in Peso:\n");
	scanf("%f", &fPeso);
	
	printf("Converting... Done!\n");
	
	printf("In US Dollars: %.2f\n", fPeso * 0.017189);
	printf("In Euro: %.2f", fPeso * 0.014733	);
	printf("In Japanese Yen: %.2f\n", fPeso * 2.573959);
	printf("In British Pound: %.2f\n", fPeso * 0.01);
	printf("In Swiss Franc: %.2f\n", fPeso * 0.02);
	
	printf("Thank You!\n");
	printf("************************************");
	return 0;
}

