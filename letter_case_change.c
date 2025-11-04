#include <stdio.h>

char toUpper(char nLetter)
{
	char nCapital = nLetter - 32;
	return nCapital;
}

char toLower(char nLetter)
{
	char nLowercase = nLetter + 32;
	return nLowercase;
}

int main () {
	char nLetter;
	
	printf("Input letter: ");
	scanf("%c", &nLetter);
	
	if (nLetter >= 97 && nLetter <= 122)
	{
		printf("Uppercase-ified!\nOutput: %c", toUpper(nLetter));
	}
	else if (nLetter >= 65 && nLetter <= 90) 
	{
		printf("Lowercase-isfied!\nOutput:%c", toLower(nLetter));
	} 
	else
	{
		printf("Invalid letter, please make sure you input a single letter from the English alphabet.");
	}
	
	return 0;
}

