//
//  M;yClass1.hpp
//  ThirdCppTest
//
//  Created by Dario Caric on 23.08.2021..
//

#ifndef M_yClass1_hpp
#define M_yClass1_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Adding {
    
    
public:
    
    int globalVarPublic;

    Adding() {
        globalVarPublic = 0;
    }
    
    Adding(int a) {
        globalVarPublic = a;
    }
    
    ~Adding() {
        globalVarPublic = 1;
    }
    
    string startingName = "Paola";
    
    int dodavanje (int maxbr);


    
};

#endif /* M_yClass1_hpp */
