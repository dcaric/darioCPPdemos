//
//  Furniture.cpp
//  TestKlasaVektor
//
//  Created by Dario Caric on 30.05.2024..
//

#include "Furniture.hpp"



Furniture::Furniture(string n, double p) {
    name = n;
    price = p;
    
    category = "";
    color = "";
}

Furniture::Furniture(string n,string c, double p) {
    name = n;
    category = c;
    price = p;
    color = "";
}

Furniture::Furniture(string n,string c, string colour, double p) {
    name = n;
    category = c;
    color = colour;
    price = p;
}

