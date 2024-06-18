//
//  main.cpp
//  LongestPalindromicSubstring
//
//  Created by Dario Caric on 10.11.2022..
//

#include <iostream>
#include <string.h>
#include <vector>
#include <time.h>


using namespace std;
using namespace std::chrono;

string longestPalindrome(string s);

int main(int argc, const char * argv[]) {
    string inputStr ="cbbd";
    
    printf("\nRESULT=%s\n", longestPalindrome(inputStr).c_str());
    return 0;
}


bool isTheSame (long left, long right, char *letters) {
    long l = left;
    long r = right;
    
    while (l<=r) {
        printf("l=%lu L:%c   r=%lu  R:%c \n", l, *(letters + l), r, *(letters + r));
        if(*(letters + l) != *(letters + r)) return false;
        l++;
        r--;
    }
    return true;
}


string longestPalindrome(string s) {
    long length = s.length();
    if (length <= 1) return s;
    
    char letters[length + 1];
    strcpy(letters, s.c_str());
    
    string finalStr = "";
    long lengthStored = 0;
    
    long left = 0;
    long right = length - 1;
    
    while (left<=length-1) {
        
        
        if (*(letters + left) == *(letters + right)) {
            
            if (isTheSame(left, right, letters) && (right - left + 1) > lengthStored) {
                finalStr = "";
                for (long i=left; i<=(right); i++) finalStr = finalStr + *(letters + i);
                lengthStored = (right - left + 1);
                if (lengthStored == length) return finalStr;
            }
            
        }
        
        if (right <= left) {
            left++;
            right = length - 1;
        } else right--;

    }
        
    
    return finalStr;
}
