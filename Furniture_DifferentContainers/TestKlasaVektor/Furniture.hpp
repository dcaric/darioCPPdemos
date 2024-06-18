//
//  Furniture.hpp
//  TestKlasaVektor
//
//  Created by Dario Caric on 30.05.2024..
//

#ifndef Furniture_hpp
#define Furniture_hpp

#include <stdio.h>

#endif /* Furniture_hpp */
#pragma once
#include <iostream>
#include <string>
using namespace std;



class Furniture{

private:
    string name, category, color;
    double price;
    bool availability;

public:

    
    
    Furniture(string,double);  //enters name and price
    Furniture(string,string,double);  //enters name,category and price
    Furniture(string,string,string,double);   //enters all values

    
    


};
