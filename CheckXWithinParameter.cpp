#include <stdio.h>
#include <math.h>

int main() {
	int fValX;
	int fValY;
	int fValZ;
	
	//x
	printf ("Enter x value:");
	scanf ("%d", &fValX);
	printf ("%d", fValX);
	
	//y
	printf ("\n Enter y value:");
	scanf ("%d", &fValY);
	printf ("%d", fValY);
	
	//z
	printf ("\n Enter z value:");
	scanf ("%d", &fValZ);
	printf ("%d", fValZ);
	
	//expression
	if (fValX / fValY < fValY % fValZ) {
		printf ("x is within the parameter");
	} else {
		printf ("x is not within the parameter");
	}
	
	return 0;
}
