//
//  main.cpp
//  TestKlasaVektor
//
//  Created by Dario Caric on 30.05.2024..
//

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include  <list>
#include <forward_list>
#include <stack>
using namespace std;
// nap signly i dubly listu sa 10 brojeva
// spremi obe liste u vector
//value 99 spremit na misto koje user izabere ( pitta ga br 1-20)
//sve to stavit na stack i valjda printat




int main2() {

    //int n = 10;
    forward_list<int> l;
    for (int i = 1; i < 11; i++) {
        l.push_front(i);
    }
    
    cout << "forward list:" << endl;
    for (int item : l) {
        cout << item << " ";
    }
    cout << endl << endl;
        
        
    list<int>l2;
    for (int i = 11; i <21; i++) {
        l2.push_back(i);
    }
    cout << "list:" << endl;
    for (int item : l2) {
        cout << item << " ";
    }
    cout << endl << endl;
    
    
    
    vector<int> v;
    for (auto it = l.begin(); it != l.end(); it++) {
        v.push_back(*it);
    }
    for (auto it = l2.begin(); it != l2.end(); it++) {
        v.push_back(*it);
    }
    cout << "vector:" << endl;
    for (int item : l2) {
        cout << item << " ";
    }
    cout << endl << endl;
    
    
    int value = 99;
    int num;
    cout << "Enter a number between 1-20:" << endl;
    cin >> num;


    vector<int> v2;
    for (int i = 0; i < v.size(); i++) {
        if (i == num) v2.push_back(value);
        v2.push_back(v[i]);
    }
    
    cout << "V2:" << endl;
    for (int item : v2) {
        cout << item << " ";
    }
    cout << endl;
 
    
    
    stack<int> s;
    for (int i = 0; i < v2.size(); i++) {
        s.push(v2[i]);
        //s.pop();
    }cout << endl;
    
    
    
    cout << "STACK:" << endl;
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }cout << endl;
    
    
    
    
    return 0;
}

