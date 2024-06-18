//
//  Calculator.cpp
//  FirstTutorial
//
//  Created by Dario Caric on 14.08.2023..
//

#include "Calculator.hpp"
#include <algorithm>
#include "Constants.hpp"

using namespace std;


double Calculator::firstNum = 0.0;
double Calculator::secondNum = 0.0;
double Calculator::thirdNum = 0.0; 

string Calculator::firstOperation = "";
string Calculator::secondOperation = "";



double Calculator::container = 0.0;

bool contains(const std::vector<std::string>& vec, const std::string& element) {
    return std::find(vec.begin(), vec.end(), element) != vec.end();
}

void Calculator::runCalculator() {
    
    while (Calculator::secondOperation != Constants::END) {
        cout << "Enter number\n";
        cin >> Calculator::firstNum;
        cout << "Enter operation \n";
        cin >> Calculator::firstOperation;
        cout << "Enter number \n";
        cin >> Calculator::secondNum;
        cout << "Enter operation or end\n";
        cin >> Calculator::secondOperation;

        cout << "You entered:\n";
        cout << "NUMBER 1: " << Calculator::firstNum << "\n";
        cout << "OPERATION 1: " << Calculator::firstOperation << "\n";
        cout << "NUMBER 2: " << Calculator::secondNum << "\n";
        cout << "OPERATION 2: " << Calculator::secondOperation << "\n";
        
        if (contains(Constants::LOWER_OPERATIONS, Calculator::secondOperation)) {
            cout << Calculator::secondOperation << " is LOWER OPERATION" << std::endl;
        } else {
            cout << Calculator::secondOperation << " is HIGHER OPERATION" << std::endl;
        }
    }
    
    Calculator::secondOperation = ""; // reset variable
    
}


