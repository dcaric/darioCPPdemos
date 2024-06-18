//
//  GuessNumber.hpp
//  FirstTutorial
//
//  Created by Dario Caric on 07.08.2023..
//

#ifndef GuessNumber_hpp
#define GuessNumber_hpp

#include <stdio.h>

class GuessNumber {
    
public:
    
    GuessNumber();
    
    GuessNumber(int, int);
    
    ~GuessNumber();
    
    void printRandomNumber();
    
    
private:
    unsigned int randomNum;

    
    
protected:
    
    
};

#endif /* GuessNumber_hpp */
