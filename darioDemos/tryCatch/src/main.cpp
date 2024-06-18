#include <iostream>
#include "methods/myMethods.hpp"


int main(int argc, char *argv[])
{
	myMethods myFunc = myMethods();
	printf("This is from main func %d", myFunc.dummyFunc("dario"));

}