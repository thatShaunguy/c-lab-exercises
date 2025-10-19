#include <stdio.h>
#include <math.h>

int main() {
	int nVal, nDig1, nDig2, nDig3, nSum, sumDigits;
	
	//User inputs a number
	printf("Input a three digit number: ");
	scanf("%d", &nVal);
	
	//returns 1 if the number is too high or low
	if (nVal > 999 || nVal < 0)
	return 1;
	
	//Seperate the digits
	nDig1 = nVal / 100; /* get the largest digit*/
	printf("First Digit: %d\n", nDig1);
	nDig2 = nVal / 10 % 10; /*get the middle digit*/
	printf("Second Digit: %d\n", nDig2);
	nDig3 = nVal % 10; /*get the single last digit*/
	printf("Third Digit: %d\n", nDig3);
	
	
	sumDigits = nDig1 + nDig2 + nDig3;
	printf("Sum: %d", sumDigits);
}
