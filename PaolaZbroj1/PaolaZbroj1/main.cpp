//
//  main.cpp
//  PaolaZbroj1
//
//  Created by Dario Caric on 14.09.2021..
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    int suma=0;
    for (int i=2; i<51; i=i+3) {
        suma = suma + i;
    }
    
    printf("suma = %i \n",suma);
    
 
    string znak = "gjshagdjhqwgdwhj";
    
    while (znak != "leptir") {
        printf("Upiši neku riječ: ");
        cin >> znak;
    };
    
    
    for (int j=1; j<5; j++) {
        printf("This is line number: %i \n",j);
        printf("This is line number: %i \n",j);
    }
    
    
    char grade = 'B';
    char myString[] = "Dario [char] type";
    printf("This is myString: %s \n",myString);
    
    string myRealString = "Dario [string] type";
    printf("This is myString: %s \n",myRealString.c_str());
    
    
    
}
