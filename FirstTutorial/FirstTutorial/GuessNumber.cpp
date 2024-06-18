//
//  GuessNumber.cpp
//  FirstTutorial
//
//  Created by Dario Caric on 07.08.2023..
//

#include "GuessNumber.hpp"
#include <iostream>
#include <random>

using namespace std;


GuessNumber::GuessNumber() {
    cout << "[Constructor called] \n";

    random_device rd;  // Will be used to obtain a seed for the random number engine
    mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    uniform_int_distribution<> distrib(1, 100);
    randomNum = distrib(gen);
};

GuessNumber::GuessNumber(int min, int max) {
    cout << "[Constructor called] \n";

    random_device rd;  // Will be used to obtain a seed for the random number engine
    mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    uniform_int_distribution<> distrib(min, max);
    randomNum = distrib(gen);
};

GuessNumber::~GuessNumber() {
    cout << "[Destructor called] \n";
}

void GuessNumber::printRandomNumber() {
    cout << "Random number: " << randomNum << '\n';
}
