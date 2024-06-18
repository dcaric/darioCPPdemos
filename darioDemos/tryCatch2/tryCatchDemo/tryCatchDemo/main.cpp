//
//  main.cpp
//  tryCatchDemo
//
//  Created by Dario Caric on 31.01.2022..
//

#include <iostream>
#include "myMethods.hpp"
#include <memory>
#include<stdio.h>

using namespace std;

int string_length (char *word) {
    int c = 0;
    while ( *word++ ) {
        c++;
    }
    return  c;
}

bool getReverse(char *word1, char *word2) {
    //printf("2 word1=%c\n", *word1);
    //char *myCh = word1;
    //printf("2 word1=%p\n", myCh+4);
    //printf("2 word1=%c\n", *(myCh+4));

    int w1Length = string_length(word1);
    int w2Length = string_length(word2);
    //printf("w1Length=%d\n", w1Length);
    //printf("w1Length=%d\n", w2Length);

    // if 2 words are not same length
    if (w1Length != w2Length) return  false;
    
    // find reverse of first word
    int i = 0;
    for (char *s = word1+w1Length-1; *s !='\0'; s--) {
        //printf("4 word=%c\n", *s);
        //printf("8 word=%c\n", *(word2+i));
        if ( *s != *(word2+i)) return false;
        i++;
    }
    return true;
}



int main(int argc, char *argv[])
{
    //string word1;
    //string word2;
    char word1[100];
    char word2[100];

    /*
    myMethods *oldPtrWay = new myMethods(); // 1 way
    myMethods *oldPtrWay2 (new myMethods); // 2 way

    std::unique_ptr<myMethods> myFunc (new myMethods()); // 1 way
    std::unique_ptr<myMethods> myFunc2 (new myMethods); // 2 way

    try {
        printf("This is from main func 1: %d\n", myFunc->dummyFunc2("dario"));
    } catch (const std::exception& e) {
        printf("Error from main func\n");

    }
    printf("This is from main func 2: %d\n", oldPtrWay2->dummyFunc("jordan23"));
    */
    
    //cin >> word1;
    //cin >> word2;
    
    scanf("%s", word1);
    scanf("%s", word2);
    printf("1 word1=%s\n", word1);

    if (getReverse(word1, word2)) printf("%s is the reverse of %s\n", word1, word2);
    else printf("%s is not the reverse of %s\n", word1, word2);

    //printf("word1 is %s\n", word1.c_str());
    //printf("word2 is %s\n", word2.c_str());

    
    return 0;
}



