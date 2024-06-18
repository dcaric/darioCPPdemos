//
//  main.cpp
//  LongestSubstring
//
//  Created by Dario Caric on 09.11.2022..
//

#include <iostream>
#include <string.h>

using namespace std;

int lengthOfLongestSubstring(string s);

int main(int argc, const char * argv[]) {
    string inputStr = "u";
    
    printf("\nlength=%d\n", lengthOfLongestSubstring(inputStr));
    
    return 0;
}

int lengthOfLongestSubstring(string s) {
    string temp = "";
    string finalStr = "";
    for(char& c : s) {
        long length = temp.length();
        long findC = temp.find(c);
        
        if (temp.length() >= 1 && *temp.substr(length-1, 1).c_str() == c){
            //printf("reset\n");
            if (finalStr.length() < length) finalStr = temp;
            temp = c;
        }
        else if (findC == std::string::npos) temp = temp + c;
        else {
            //printf("duplicate at positon=%lu ", findC);
            if (finalStr.length() < length) finalStr = temp;
            int pos = temp.find(c) + 1;
            temp = temp.substr(pos,temp.length()-pos) + c;

        }
        //if (temp.length()>=1) printf("char=%c  temp=%s  last char=%s \n",c, temp.c_str(), temp.substr(temp.length()-1, 1).c_str());
        //printf("finalStr=%s   temp=%s\n\n",finalStr.c_str(), temp.c_str());

    }
    
    
    if (finalStr.length() < temp.length()) finalStr = temp;
    //printf("** finalStr=%s   temp=%s\n",finalStr.c_str(), temp.c_str());

    return int(finalStr.length());
}



