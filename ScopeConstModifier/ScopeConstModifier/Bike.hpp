//
//  Bike.hpp
//  ScopeConstModifier
//
//  Created by Dario Caric on 03.09.2021..
//

#ifndef Bike_hpp
#define Bike_hpp

#include <stdio.h>
#include <string>

class Bike {
    
private:
    
    
    
public:
    
    // CONSTANTS
    const int numberOfWheels = 2;
    const int numberOfStearings = 1;
    const int numberOfSeat = 1;
    const bool thisIsBike = true;
    
    
    // PROPERTIES (VARIABLES)
    /*
     0 - city bike
     1 - mounting bike
     2 - touring bike
     3 - bmx
     4 - pony
     5 - track bike
     */
    int bikeType = 0;
    
    struct myBike {
        int bike1 = 0;
        bool bike2 = true;
    };
    
    /*
     disk breaks - true
     rubber breks - false
     */
    bool diskBreaks = false;
    
    // first gear number
    int numberOfFirstGear = 0;
    // last gear number
    int numberOfLastGear = 0;

    
    
    // CONSTRUCTOR
    Bike() {
        bikeType = 0;
        diskBreaks = true;
        numberOfFirstGear = 0;
        numberOfLastGear = 3;
    }
    
    
    // DESTRUCTOR
    ~Bike() {
        bikeType = NULL;
        diskBreaks = NULL;
        numberOfFirstGear = NULL;
        numberOfLastGear = NULL;
    }

    
    
};

#endif /* Bike_hpp */
