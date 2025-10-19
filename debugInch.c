#include <stdio.h>
int main()
{
int   inch;
float feet,
      yard,
	  cm;
printf("Enter value in inches: ");
scanf("%d", &inch);
feet = inch / 12.00;
yard = feet / 3.00;
cm = inch * 2.54;
printf("%d inches is equivalent to:\n ", inch);
printf("Feet = %f\n", feet);
printf("Yard = %f\n", yard);
printf("CM = %2f\n", cm);
printf("M = %f", cm / 100);
return 0;
}
