#include <stdio.h>

int main ()
{
    float fCup;
    float fOunce;
    float fQuart;
    float fPint;
    float fGallon;
    float fLiter;

    // prompt the user input (in cups)
    printf("NOTE: The inputted number must be a non-negative real number\n\n");
	printf("Enter the amount in cups: ");
    scanf("%f", &fCup);
    
    /*
    Convert measurements
    1 ounce = 1/8 cup
    1 quart = 32 ounces
    1 pint = 1/2 quarts
    1 gallon = 8 pints
    1 liter = 2.1 pint
    */
    fOunce = fCup * 8.0000;
    fQuart = fOunce / 32.0000;
    fPint = fQuart * 2.0000;
    fGallon = fPint / 8.0000;
    fLiter = fPint / 2.1000;

	// show output results
    printf("Ounces: %.4f\n", fOunce);
    printf("Quarts: %.4f\n", fQuart);
    printf("Pints: %.4f\n", fPint);
    printf("Gallons: %.4f\n", fGallon);
    printf("Liters: %.4f\n", fLiter);
    
    return 0;
}
