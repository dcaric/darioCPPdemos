//
//  main.cpp
//  FirstCpp
//
//  Created by Dario Caric on 04.08.2021..
//

// system headers
#include <iostream>


// my headers
#include "MyClass1.hpp"

using namespace std;
//using namespace myStd;

int main(int argc, const char * argv[]) {
    //cout << "Hello, World!\n";
    //int x1=0;
    
    MyClass1 *myClass1Object = new MyClass1();
        
    string varThatKeepsPath = myClass1Object->readRoothPath();
    printf("Addres for variable that keeps PATH is:%s\n",varThatKeepsPath.c_str());

    cout << myClass1Object->readRoothPath() << "\n";
    
    string myName = "Dario";
    printf("Address of myName is:%p\n",&myName);
    
    printf("Call static method: %s\n",MyClass1::myStaticMethod().c_str());
    
    
    printf("Return tuple:\n%i\n%s\n",get<0>(myClass1Object->returnTuple()), get<1>(myClass1Object->returnTuple()).c_str());

    return 0;
}
