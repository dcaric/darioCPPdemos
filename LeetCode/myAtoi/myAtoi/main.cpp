//
//  main.cpp
//  myAtoi
//
//  Created by Dario Caric on 10.01.2023..
//

#include <iostream>
#include <string.h>

using namespace std;

int myAtoi(string);

int main(int argc, const char * argv[]) {
    printf("%i\n",myAtoi("  -0012a42")); // should be -12 ??
    //printf("%i\n",myAtoi("00000-42a1234")); // should be 0
    //printf("%i\n",myAtoi("4193 with words")); // should be 4193

    return 0;
}


int myAtoi(string s) {
    if (s.length() == 0) return 0;
    bool positive = true;
    int onePrefix = 0;
    int index = 0;
    bool charAndNum = false;
    string newS = "";
    for(char& c : s) {
        if (c == 45)  {
            if (onePrefix == 0) {
                positive = false;
                newS = "";
            }
            else return 0;
            onePrefix ++;
        }
        else if (c == 32) continue;
        else if (c == 43) {
            if (onePrefix == 0) {
                positive = true;
                newS = "";
            }
            else return 0;
            onePrefix ++;
        }
        else if (c >= 48 && c <= 58) {
            if (charAndNum) return 0;
            string temp = string(1, c);
            newS = newS + c;
            //printf("res: %s\n", newS.c_str());
        }
        else if (c == 46) {
            if (index > 0) break;
            else return 0;
        }
        else {
            if (index == 0) return 0;
            else {
                if (newS.length() > 0) charAndNum = true;
                continue;
            }
        }
        index ++;
    }
    if (newS == "") return 0;
    int newInt = 0;// make new function to build string one by one character
    try {
        newInt = stoi(newS);
    } catch (exception e) {
        return (positive ? INT_MAX : INT_MIN);
    }
    return (positive ? newInt : -newInt);
}
