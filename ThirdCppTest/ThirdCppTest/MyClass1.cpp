//
//  M;yClass1.cpp
//  ThirdCppTest
//
//  Created by Dario Caric on 23.08.2021..
//

#include "MyClass1.hpp"


int Adding::dodavanje (int maxbr) {
    int suma = 0;
    for (int i=1; i<=maxbr; i=i+1) {
        suma = suma + i;
        printf("i=%i    suma=%i \n",i, suma);
        printf("");
    }
    printf("********************* \n");
    return suma;
}
