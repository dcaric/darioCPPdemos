//
//  main.cpp
//  SecondCppTest
//
//  Created by Dario Caric on 05.08.2021..
//

#include <iostream>
#include "ReadPath.hpp"

int main(int argc, const char * argv[]) {

    ReadPath *myObject = new ReadPath();
    
    printf("Current path is: %s \n",myObject->returnPath().c_str());
    
    printf("Sum of 2 and 3 is %i \n",myObject->sum2Numbers(2, 3));
    
    return 0;
}
