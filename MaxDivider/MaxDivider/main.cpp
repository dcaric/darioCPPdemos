//
//  main.cpp
//  MaxDivider
//
//  Created by Dario Caric on 25.08.2021..
//

#include <iostream>
#include "MaxDividerFunc.hpp"

using namespace findMaxDivider;
using namespace std;

int main(int argc, const char * argv[]) {

    int a, b, c = 0;
    printf("Upisi broj a: ");
    cin >> a;
    printf("Upisi broj b: ");
    cin >> b;
    // if b > a rotate nubers, so that a becomes > b
    if (b > a) {
        c = a;
        a = b;
        b = c;
    }
    printf("a=%i  b=%i \n", a, b);

    if (isADivWithB(a, b)) {
        // simple case
        printf("Max div is %i \n", b);
    } else {
        // more complicated cases
        //printf("Broj [%i] je %s \n", a, isNumberEven(a) ? "neparni": "parni");
        //printf("Broj [%i] je %s \n", b, isNumberEven(b) ? "neparni": "parni");

        if (isNumberEven(a) == 0 && isNumberEven(b) == 0) {
            // both even
            int nextDivNumber = int (b / 2);
            //printf("nextDivNumber %i \n",nextDivNumber);
            //printf("isADivWithB %i \n",isADivWithB(a, nextDivNumber));

            while (nextDivNumber > 1) {

                if (isADivWithB(a, nextDivNumber)) {
                    printf("Max div is %i \n", nextDivNumber);
                    nextDivNumber = 1;
                }
            }
//        } else if (!isNumberEven(a) && isNumberEven(b)) {
//
//        } else if (isNumberEven(a) && !isNumberEven(b)) {
//
//        } else if (!isNumberEven(a) && !isNumberEven(b)) {
//            printf("Max div is 1");
//        }
        } else  {
            printf("Max div is 1 \n");
        }
    }
    
    
    
    return 0;
}
