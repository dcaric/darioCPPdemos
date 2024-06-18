//
//  MyClass1.hpp
//  FirstCpp
//
//  Created by Dario Caric on 04.08.2021..
//

#ifndef MyClass1_hpp
#define MyClass1_hpp

#include <stdio.h>
#include <string>

using namespace std;

class MyClass1 {
    
private:
    
    int returnRowCount(string filePath);
    
public:

    string readFromFile(string filePath, int rowCount);
    string readRoothPath();
    static string myStaticMethod();
    pair<int, string> returnTuple();
        
};



#endif /* MyClass1_hpp */

