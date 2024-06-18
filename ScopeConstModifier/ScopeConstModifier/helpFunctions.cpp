//
//  helpFunctions.cpp
//  ScopeConstModifier
//
//  Created by Dario Caric on 15.09.2021..
//

#include "helpFunctions.hpp"
#include <array>

using namespace stringManipulation;
using namespace std;
using namespace listManipulation;

/**
 Make string compression. For example from ddaaaarrio makes d2a4r2io
 
 @param rawString string which will be compressed
 @result compressed string
 */
string stringManipulation::getCompressedString(string rawString) {
    
    string compressedString = "";

    int charCounter = 1;
    
    for (int i=0; i<rawString.length(); i++) {
        if (rawString[i] != rawString[i+1]) {
            compressedString = compressedString + rawString[i];
            if (charCounter > 1) {
                compressedString = compressedString + to_string(charCounter);
            }
            charCounter = 1;
        } else {
            // chars are the same increse counter
            charCounter++;
        }
    }
    
    printf("Compressed %s is: %s \n",rawString.c_str(), compressedString.c_str());
    
    return compressedString;
}


bool listManipulation::detectPalindromeList(string linkedList) {
    
    string linkedListStr = "";
    string linkedListReversedStr = "";

//    for (int i=0; i < linkedList.length(); i++) {
//        linkedListStr = linkedListStr + to_string(linkedList[i]);
//    }
    linkedListReversedStr = linkedList;
    reverse(linkedListReversedStr.begin(), linkedListReversedStr.end());
    if (linkedList == linkedListReversedStr) {
        printf("List %s and %s are Palindrome \n",linkedList.c_str(), linkedListReversedStr.c_str());
        return true;
    }
    return false;
}
