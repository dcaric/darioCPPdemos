//
//  Person.hpp
//  Optional
//
//  Created by Dario Caric on 05.03.2024..
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <optional>
#include <string>

using namespace std;

class Person {
   
private:
    string name;
    string lastname;
    optional<int> id;
    
public:
    *Person(string,string);
    *Person(string,string, optional<int>);
    
};

#endif /* Person_hpp */
