//
//  main.cpp
//  ScopeConstModifier
//
//  Created by Dario Caric on 03.09.2021..
//

#include <iostream>
#include "Bike.hpp"
#include <string>
#include <cmath>
#include "helpFunctions.hpp"

using namespace std;
using namespace stringManipulation;
using namespace listManipulation;

// block of code
int sumBlock (int a, int b) {
    return (a + b);
}

void funkcija (string varijable) {
    
    
}

int main(int argc, const char * argv[]) {

    string str1 = "Dario";
    string str2 = "1Dario1";
    
    // reversed string
    string str1Revesed = str1;
    reverse(str1Revesed.begin(), str1Revesed.end());
    printf("Reversed %s is: %s \n",str1.c_str(), str1Revesed.c_str());
    
    
    // compressed string
    string inputString = "";
    printf("Upisi neki string: ");
    cin >> inputString;
    printf("RESULT: %s \n", getCompressedString(inputString).c_str());
    
    // using block of code
    printf("Using block of code: %i \n",sumBlock(3, 5));
    
    
    //printf("%s len: %i  -  %s %i \n",str1.c_str(), str1.length(), str2.c_str(), str2.length());
    int diff = abs(int(str1.length() - str2.length()));
                   
    if (diff >= 1 && diff < 2 && str2.compare(str1) != -1) {
        printf("%s is substring of %s at position: %lu \n",str1.c_str(), str2.c_str(), str2.find(str1));

    }

    // Check if 2 lists are Palindrome
    printf("Upisi neki niz (listu): ");
    cin >> inputString;
    printf("RESULT: %i \n", detectPalindromeList(inputString));

    funkcija("dario");

    return 0;
}





