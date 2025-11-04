#include <stdio.h>

#define COST 99.00
#define TAX 0.12
#define TIP1 0.15
#define TIP2 0.18
#define TIP3 0.20

//computeTotal function
float computeTotal (int nOrders) 
{
	float fTotal;
	fTotal = nOrders * COST;
	return fTotal;
}

//computeGross
float computeGross (float fTotal)
{
	float fGross;
	fGross = fTotal / (1+TAX);
	return fGross;
}

//computeTax
float computeTax (float fGross)
{
	float fTax;
	fTax = fGross * TAX;
	return fTax;
}

//compute tips
void computeTips (float fGross, float * tip1, float * tip2, float * tip3)
{
	*tip1 = fGross * TIP1;
	*tip2 = fGross * TIP2;
	*tip3 = fGross * TIP3;
}

int main() {
	int nDateFull;
	int nDateM;
	int nDateD;
	int nDateY;
	
	int nOrders;
	float fTotal;
	float fGross;
	float fTax;
	
	//Get inputs
	printf("Input date (MMDDYYYY):");
	scanf("%d", &nDateFull);
	printf("Input orders:");
	scanf("%d", &nOrders);
	
	//show orders
	printf("Orders: %d\n", nOrders);

	//Get total price
	fTotal = computeTotal (nOrders);
	printf ("Total price: %.2f\n", fTotal);
	
	//Get gross
	fGross = computeGross (fTotal);
	printf("Gross: %.2f\n", fGross);
	
	//Get Tax
	fTax = computeTax (fGross);
	printf("Tax: %.2f\n", fTax);
	
	//Create Date
	nDateM = nDateFull / 1000000;
	nDateD = nDateFull / 10000 % 100;
	nDateY = nDateFull % 10000;
	printf("%02d-%02d-%04d", nDateM, nDateD, nDateY);
	
	
}
