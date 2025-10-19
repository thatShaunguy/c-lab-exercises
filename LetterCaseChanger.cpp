#include <stdio.h>

char toUpper(char nLetter, char nCapital)
{
	nCapital = nLetter + 32;
	return nCapital;
}

char toLower(char nLetter, char nLowercase)
{
	nLowercase = nLetter - 32;
	return nLowercase;
}

