//
//  Calculator.hpp
//  FirstTutorial
//
//  Created by Dario Caric on 14.08.2023..
//

#ifndef Calculator_hpp
#define Calculator_hpp

#include <iostream>
#include <string>


using namespace std;

class Calculator {
    
    
public:
    static void runCalculator();
   
    
private:
    static double firstNum;
    static double secondNum;
    static double thirdNum;
    
    static string firstOperation;
    static string secondOperation;
    
    static double container;
    
};

#endif /* Calculator_hpp */
