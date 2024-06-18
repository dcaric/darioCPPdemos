//
//  MaxDividerFunc.cpp
//  MaxDivider
//
//  Created by Dario Caric on 25.08.2021..
//

#include "MaxDividerFunc.hpp"
#include <iostream>


using namespace findMaxDivider;


bool findMaxDivider::isNumberEven (int number) {
    return (number % 2 ? true : false);
}

bool findMaxDivider::isADivWithB (int aNumber, int bNumber) {
    return (aNumber % bNumber ? false : true);
}
