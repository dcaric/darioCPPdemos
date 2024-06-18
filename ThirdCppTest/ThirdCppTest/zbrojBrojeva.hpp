//
//  zbrojBrojeva.hpp
//  zbroj
//
//  Created by Dario Caric on 08.08.2021..
//

#ifndef zbrojBrojeva_hpp
#define zbrojBrojeva_hpp

#include <stdio.h>
#include <string>

using namespace std;



class leptir {
    
    
private:
    
    int globalVarPrivate = 12;

    
public:
    
    int globalVarPublic;
    
    leptir() {
        globalVarPublic = 0;

    }
    
    leptir(int a) {
        globalVarPublic = a;

    }
    
    ~leptir() {
        //globalVarPublic = 1;
    }

    string pocetniLeptirIme = "Paola";
    
    int dodavanje (int maxbr);

    static int drugacijeDodavanje (int maxbr);
    
    void mojaFunkcija(int a);

    
};
    
namespace myNameSpace {

    int dodavanje2 (int maxbr);

};


#endif /* zbrojBrojeva_hpp */
