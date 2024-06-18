//
//  zbrojBrojeva.cpp
//  zbroj
//
//  Created by Dario Caric on 08.08.2021..
//

#include "zbrojBrojeva.hpp"

using namespace myNameSpace;

int myNameSpace::dodavanje2 (int maxbr) {
    
    int suma = 0;
    int a = 0;
    printf("1: a= %i\n",a);

    for (int i=1; i<=maxbr; i=i+1) {
        a = 3;
        printf("2: a= %i\n",a);

        suma = suma + i;
        printf("i=%i    suma=%i \n",i, suma);
        printf("");
    }
    printf("3: a= %i\n",a);
    printf("********************* \n");
    return suma;
    
};


int leptir::dodavanje (int maxbr) {
    
    int suma = 0;
    for (int i=1; i<=maxbr; i=i+1) {
        suma = suma + i;
        printf("i=%i    suma=%i \n",i, suma);
        printf("");
    }
    printf("********************* \n");
    return suma;
    
    
};


int leptir::drugacijeDodavanje (int maxbr) {
    
    int suma = 0;
    for (int i=1; i<=maxbr; i=i+1) {
        suma = suma + i;
        printf("i=%i    suma=%i \n",i, suma);
        printf("");
    }
    printf("********************* \n");
    return suma;
};





