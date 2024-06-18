//
//  Person.cpp
//  Optional
//
//  Created by Dario Caric on 05.03.2024..
//

#include "Person.hpp"

Person::*Person(string a,string b){
    name = a;
    lastname = b;
}

Person::*Person(string a,string b, optional<int> id){
    name = a;
    lastname = b;
    id = id;
}
