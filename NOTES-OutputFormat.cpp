#include <stdio.h>

int main()
{
	//int
	
    int nOne = 12345; /*5 characters*/

    printf ("1) %d\n", nOne);
    printf ("2) %7d\n", nOne);
    printf ("3) %0d\n", nOne);
    printf ("4) %07d\n", nOne);
    printf ("5) %+d\n", nOne);
    printf ("6) %+7d\n", nOne);
    printf ("7) %+07d\n", nOne);
    printf ("8) %.8d\n", nOne);
    printf ("9) %-8d*\n\n\n", nOne);
    
    
    //float
    
    float fOne = 12345.98; /*10 characters*/
	
    printf ("1) %f\n", fOne);
    printf ("2) %15f\n", fOne);
    printf ("3) %0f\n", fOne);
    printf ("4) %015f\n", fOne);
    printf ("5) %+f\n", fOne);
    printf ("6) %+15f\n", fOne);
    printf ("7) %+015f\n", fOne);
    printf ("8) %.3f\n", fOne);
    printf ("9) %15.8f\n", fOne);
    printf ("0) %-15f*\n\n\n", fOne);


	//char

    char cOne = 'c';

    printf ("1) %c\n", cOne);
    printf ("2) %3c\n", cOne);
    printf ("3) %03c\n", cOne);

    printf ("\n");

    printf ("4) %s\n", "hello");
    printf ("5) %10s\n", "hello");

    return 0;
}
