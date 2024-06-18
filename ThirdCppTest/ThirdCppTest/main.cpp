//
//  main.cpp
//  zbroj
//
//  Created by Dario Caric on 08.08.2021..
//

#include <iostream>
#include"zbrojBrojeva.hpp"
#include <string>

using namespace std;
using namespace myNameSpace;


int main(int argc, const char * argv[]) {
    

    leptir *myObject= new leptir(23);
    leptir myObject1;
    //leptir *myObject2= new leptir();
    std::shared_ptr<leptir> myObject2 (new leptir);

    
    printf("myObject1:  VAR %i \n",myObject1.globalVarPublic);


    int a = 0;
    string b = "";

    printf("upisi broj: ");
    cin >> a;

    {

        
        std::shared_ptr<leptir> myObject2 (new leptir);
        printf("GLOBAL myObject2 globalVarPublic %i \n",myObject2->globalVarPublic);

        
        printf("suma zbroja do %i je %i \n",a, myObject2->dodavanje(a));
        printf("GLOBAL VAR %i \n",myObject->globalVarPublic);
        myObject->globalVarPublic = 15;
        printf("myObject: GLOBAL VAR %i \n",myObject->globalVarPublic);

        myObject1.globalVarPublic = 20;
        printf("myObject1: GLOBAL VAR %i \n",myObject1.globalVarPublic);

    }
    printf("GLOBAL myObject2 address %i \n",myObject2->globalVarPublic);

    
    //printf("myObject: Out of scope GLOBAL VAR %i \n",myObject->globalVarPublic);
    printf("myObject1: GLOBAL VAR %i \n",myObject1.globalVarPublic);



    printf("STATIC: suma zbroja do %i je %i \n",a, leptir::drugacijeDodavanje(a));

    printf("NAMESPACE: suma zbroja do %i je %i \n",a, dodavanje2(a));

    printf("Pocetno ime %s \n",myObject1.pocetniLeptirIme.c_str());


    //printf("myObject: GLOBAL VAR %i \n",myObject->globalVarPublic);
    
    
    //printf("myObject address %p \n",&myObject);
    delete myObject;

    //delete &myObject1;
//    printf("myObject address %p \n",&myObject);
    printf("GLOBAL VAR %i \n",myObject->globalVarPublic);
    printf("**** suma zbroja do %i je %i \n",a, myObject->dodavanje(a));


    printf("myObject: GLOBAL VAR %i \n",myObject2->globalVarPublic);

    
    printf("100 div 3 = %i \n", 100 % 3);

    return 0;
}
