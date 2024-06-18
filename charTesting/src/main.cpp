#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	// CASE 1 - single char
	char jedanZnak = 'a';
	printf("jedanZnak: %c\n", jedanZnak); // jedan znak ispis


	// CASE 2 - array of char
	char recenica[] = "Paola je bila u skoli";
	int i = 0;
	while (recenica[i] != '\0' )
	{
		printf("%c",recenica[i]); // ispisuje slovo po slovo dok ne naleti na znak specijlni sakriveni '\0' sto oznacava kraj
		i++;
	}
	printf("\n"); // samo da ide u novi red


	// CASE 3 - printing ascii coded and chars
	char asciiKod = 43;
	asciiKod = asciiKod + 1;
	printf("aschiiKod od %c  je %i \n", asciiKod, asciiKod); // ascii kod i njegov znak
	asciiKod = 110;
	printf("aschiiKod: %c\n", asciiKod); 
	asciiKod = 'n'; // ovo je isto sto i asciiKod = 110
	printf("aschiiKod: %c\n", asciiKod); 
	
	
}