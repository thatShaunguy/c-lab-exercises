#include <stdio.h>
#include <math.h>

int main() {
	int nVal, nFirst, nMid, nLast, nSum, sumDigits;
	
	
	printf("Input a three digit number:");
	scanf("%d", &nVal);
	
	
	nFirst = nVal / 100;
	nMid = nVal / 10 % 10;
	nLast = nVal % 10;
	
	
	sumDigits = nFirst + nMid + nLast;
	printf("%d", sumDigits);
}
