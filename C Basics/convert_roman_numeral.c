#include <stdio.h>

void toRoman (int nVal) 
{
	
	int nLeft, nMid, nRight;
	
	// Splits the value into ones, tens, and hundreds place
	nLeft = nVal / 100;
	nMid = nVal / 10 % 10;
	nRight = nVal % 10;
	
	switch (nLeft)
	{
		case 1:
			printf("C");
			break;
		case 2:
			printf("CC");
			break;
		case 3:
			printf("CCC");
			break;
		case 4:
			printf("CD");
			break;
		case 5:
			printf("D");
			break;
		case 6:
			printf("DC");
			break;
		case 7:
			printf("DCC");
			break;
		case 8:
			printf("DCCC");
			break;
		case 9:
			printf("CM");
			break;
	}
	
		switch (nMid)
	{
		case 1:
			printf("X");
			break;
		case 2:
			printf("XX");
			break;
		case 3:
			printf("XXX");
			break;
		case 4:
			printf("XL");
			break;
		case 5:
			printf("L");
			break;
		case 6:
			printf("LX");
			break;
		case 7:
			printf("LXX");
			break;
		case 8:
			printf("LXXX");
			break;
		case 9:
			printf("XC");
			break;
	}
	
	switch (nRight)
	{
		case 1:
			printf("I");
			break;
		case 2:
			printf("II");
			break;
		case 3:
			printf("III");
			break;
		case 4:
			printf("IV");
			break;
		case 5:
			printf("V");
			break;
		case 6:
			printf("VI");
			break;
		case 7:
			printf("VII");
			break;
		case 8:
			printf("VIII");
			break;
		case 9:
			printf("IX");
			break;
	}
}

int main()
{
	int nVal;
	
	//Prompt user input
	printf ("Input a number anywhere from 1-999: ");
	scanf("%d", &nVal);
	
	//checks if number is within parameters. If true, run the function. If false, return 1.
	if (nVal >= 1 && nVal <= 999) {
		toRoman(nVal);
		return 0;
	}
	
	return 1;
}
