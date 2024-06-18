//
//  sortStruct.cpp
//  SortingSTD
//
//  Created by Dario Caric on 12.06.2024..
//

#include <iostream>
#include <vector>
#include <time.h>
#include <string>

using namespace std;

struct mydata {
    int value;
    string name;
};

bool isValueGreather(mydata a, mydata b) {
    return a.value > b.value;
}

bool isNameGreather(mydata a, mydata b) {
    return a.name < b.name;
}


bool isValueGreatherPlusByName(mydata a, mydata b) {
    // ako imena nisu ista u imaju isti value vrati tko je prije u abecedi znaci <
    if (a.name != b.name && a.value == b.value) return a.name < b.name;
    else return a.value > b.value;
}

int main () {
    
    srand(time(NULL));
    
    vector<string> names = {"dario", "paola", "ana", "marko", "ivana", "ifigenija"};
    
    vector<mydata> v1;
    // generate 6 records
    for (int i = 0; i < 6; i++) {
        mydata temp;
        temp.value = rand() % 100;
        temp.name = names[i];
        v1.push_back(temp);
    }
    
    
    // DODAO SAM POSEBNO 2 LIKA SA ISTIM VALUE
    mydata temp;
    temp.value = 123;
    temp.name = "vader";
    v1.push_back(temp);
    temp.value = 123;
    temp.name = "malgus";
    v1.push_back(temp);
    
    
    
    for (auto item : v1) {
        cout << item.value << " " << item.name << endl;
    }
    cout << endl;

    
    // sortiranje po value
    sort(v1.begin(), v1.end(), [](mydata a, mydata b) {
        return a.value < b.value;
    });
    
    for (auto item : v1) {
        cout << item.value << " " << item.name << endl;
    }
    cout << endl;
    
    
    // sortiranje po value
    cout << "SORT BY VALUE OD VECE -> MANJOJ" << endl;
    sort(v1.begin(), v1.end(), isValueGreather);
    
    for (auto item : v1) {
        cout << item.value << " " << item.name << endl;
    }
    cout << endl;
    
    
    
    // sortiranje po name
    cout << "SORT BY NAME PO ABECEDI" << endl;
    sort(v1.begin(), v1.end(), isNameGreather);
    for (auto item : v1) {
        cout << item.value << " " << item.name << endl;
    }
    cout << endl;
    
    
    
    
    // sortiranje po name
    cout << "SORT BY NAME PO ABECEDI PLUS S ISTIM BODOVIMA IMA INTERNI SORT" << endl;
    sort(v1.begin(), v1.end(), isValueGreatherPlusByName);
    for (auto item : v1) {
        cout << item.value << " " << item.name << endl;
    }
    cout << endl;
    return 0;
    
}
