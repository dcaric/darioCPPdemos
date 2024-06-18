#include <iostream>

int main(void)
{
	const int maxchars = 40;
	const int maxNumOfWords = 68;
	char words [maxNumOfWords][maxchars];
	long int count = 0;

	// INPUT ***************************************
	int i = 0;
	for (int i = 0; i < maxNumOfWords; i++)
	{
		scanf("%s", words[i]);
	}
	count = sizeof(words) / maxchars;
	printf ("\033[0;31m"); // red
	printf ("There are %lu words.\n", count);
	printf("\033[0;37m"); // white


	// FORWARD PRINT ********************************
	printf("\033[0;33m"); // yellow
	printf("[");
	for (int i = 0; i < count; i++)
	{
		printf("%s",words[i]);
		if ( i < count - 1) printf(" ");
	}
	printf("]");
	printf("\033[0;37m"); // white
	printf("\n");
	

	// BACKWARD PRINT *******************************
	printf("\033[0;35m"); // purple
	printf("[");
	for (int i = count - 1; i >= 0; i--)
	{
		printf("%s",words[i]);
		if ( i > 0) printf(" ");
	}
	printf("]");
	printf("\033[0;37m"); // white
	printf("\n");


}