//
//  main.cpp
//  SortingSTD
//
//  Created by Dario Caric on 12.06.2024..
//

#include <iostream>
#include <vector>
#include <time.h>
#include <string>

using namespace std;


int random(int min, int max) {
    return min + rand() % (max - min + 1);
}

// ova funkcija se poziva dole bez da se proslijede argumenti !!!
// to je bitno aali to je specijalni slucaj i sama sort funkcija "ZNA" kako da koristi
// funkciju kou sadrzi na tom zadnjem 3cem mjestu
//     sort(v1.begin(), v1.end(), isGreather);
// bitno da ta funkcija vraca BOOL a da prima elementi ISTOG tipa kao i vector
// i onda u mjoj ide neka logika koja vraca true ili false
bool isGreather(int a, int b) {
    return a > b;
}

bool isLess(int a, int b) {
    return a < b;
}



bool isLessString(string a, string b) {
    return a < b;
}


bool isGreatherString(string a, string b) {
    return a > b;
}

int main1() {
    
    srand(time(NULL));
    
    
    // create vector of int with 20 elements
    vector<int> v1;
    // reserve space for 20 elements
    v1.reserve(20);
    
    
    // FILL VECTOR WITH INT
    for (int i = 0; i < 20; i++) {
        v1.push_back(random(1, 100));
    }
    
    // **************************************************************
    // PRINT UNSORTED VECTOR
    cout << "unsorted vector" << endl;
    for (int item : v1) {
        cout << item << " ";
    }
    cout << endl;
    
    
    // SORT VECTOR ACCENDING
    sort(v1.begin(), v1.end());
    cout << "accending vector" << endl;
    for (int item : v1) {
        cout << item << " ";
    }
    cout << endl;
    
    
    // SORT VECTOR ACCENDINMG 2nd WAY WITH FUNCTION
    sort(v1.begin(), v1.end(), isLess);
    cout << "accending vector" << endl;
    for (int item : v1) {
        cout << item << " ";
    }
    cout << endl;
    
    
    // SORT VECTOR DECENDING
    sort(v1.begin(), v1.end(), isGreather);
    cout << "decending vector" << endl;
    for (int item : v1) {
        cout << item << " ";
    }
    cout << endl;
    
    
    
    // SORT MIX - kako je V1 vec od prije sortiran od veceg -> manjem
    // sad ovo dole ne dira prvih 6 i onda od 7mog pa do kraja sortira koristeci
    // isLess
    sort(v1.begin()+6, v1.end(), isLess);
    cout << "mix from 6 vector" << endl;
    for (int item : v1) {
        cout << item << " ";
    }
    cout << endl;
    
    
    
    
    // **************************************************************
    cout << endl << endl << " STRING" << endl;
    vector<string> v2;
        
    v2.push_back("Dario");
    v2.push_back("Ivan");
    v2.push_back("Marko");
    v2.push_back("Jure");
    v2.push_back("Paola");
    v2.push_back("Ifigenija");
    
    for (auto item: v2) {
        cout << item << " ";
    }
    cout << endl;
    
    
    cout << endl << "accending vector" << endl;
    sort(v2.begin(), v2.end());
    for (auto item: v2) {
        cout << item << " ";
    }
    cout << endl;
    
    
    cout << endl << "decending vector" << endl;
    sort(v2.begin(), v2.end(), isGreatherString);
    for (auto item: v2) {
        cout << item << " ";
    }
    cout << endl;
    
    return 0;
}
