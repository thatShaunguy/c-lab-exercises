#include <stdio.h>
#include <math.h>

int main() {
	float fHeight;
	float fRadius;
	
	//input
	printf ("Radius:");
	scanf ("%f", &fRadius);
	printf ("Height:");
	scanf ("%f", &fHeight);
	
	//compute volume
	printf ("\n\nVolume: %f\n", 1.0/3.0 * 3.141593 * fRadius*fRadius * fHeight);
	//compute SA
	printf ("Surface Area: %f", 3.14159 * fRadius * sqrt(fRadius * fRadius + fHeight * fHeight));
}
