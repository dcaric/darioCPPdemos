#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	// ** 1
	string inputVariable;
	printf("Trenutno je u varijabli inputVariable upisano: [%s] - Upisi neki podatak: ", inputVariable.c_str());
	getline(cin, inputVariable);
	printf("\nSuper upisala si u inputVariable:[%s] \n", inputVariable.c_str());


	// ** 2
	if (inputVariable == "dalje" ) {
		// this is block of code which belongs to IF
		printf("U inputVariable prije deklaracije u IF je [%s] \n\n", inputVariable.c_str());

		string inputVariable;
		printf("Sada je u inputVariable: [%s] - Upisi jos jedan podatak: ", inputVariable.c_str());
		getline(cin, inputVariable); 
		printf("Super upisala si u inputVariable:[%s] \n", inputVariable.c_str());
	}

	// ** 3
	// we are back to the main block of code
	printf("Da vidimo sto je u sada inputVariable:[%s] \n", inputVariable.c_str());


}