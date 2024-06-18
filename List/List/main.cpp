//
//  main.cpp
//  List
//
//  Created by Dario Caric on 10.04.2024..
//

#include <iostream>
#include <list>
#include <forward_list>
#include <time.h>
#include <chrono>

using namespace std;

int main() {

    srand (time(nullptr));
    list<string> s;
    auto start = chrono::high_resolution_clock::now();
    
    
    for (long i = 0; i< 100000; i++){
        string str = "";
        for ( int j = 0; j < 30; j ++){
            int random = 33 + rand()%(126 - 33 + 1); // random number form ascii table 0 -255
            //cout << "random: " << random << endl;
            // convert int to char
            char ch = (char)(random);
            //cout << "ch: " << ch << endl;

            str = str + ch;
        }
        //cout << str << endl;
        s.push_back(str);
    }
    
    
    for (list<string>::iterator i = s.begin(); i != s.end(); i++) {
        cout << *i << endl;
    }
         
    auto stop = chrono::high_resolution_clock::now();

    chrono::milliseconds ms = duration_cast<chrono::milliseconds>(stop - start);
    cout << "Time: " << ms.count() << " ms" << endl;
    
    return 0;
}
