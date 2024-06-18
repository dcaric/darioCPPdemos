#include <iostream>
#include "myMethods.hpp"


int main(int argc, char *argv[])
{
	myMethods myFunc = myMethods();
	printf("This is from main func %d\n", myFunc.dummyFunc());
	printf("Hello Dario !\n");

}