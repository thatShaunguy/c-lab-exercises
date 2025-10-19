#include <stdio.h>
#include <stdlib.h>

int main() {
	int nVal;
	int nDig1;
	int nDig2;
	int nDig3;
	
	//User inputs a number
	printf("Enter a three digit number: ");
	scanf ("%d", &nVal);
	
	
	//returns 1 if the number is too high or low
	if (nVal > 999 || nVal < 0)
	return 1;
	
	//Seperate the digits
	nDig1 = nVal / 100; /* get the largest digit*/
	printf("%d\n", nDig1);
	nDig2 = nVal / 10 % 10; /*get the middle digit*/
	printf("%d\n", nDig2);
	nDig3 = nVal % 10; /*get the single last digit*/
	printf("%d\n", nDig3);
	
	//Print the reversed sequence
	printf("Reversed: %d", nDig3);
	printf("%d", nDig2);
	printf("%d", nDig1);
	
	return 0;
}

