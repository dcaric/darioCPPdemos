//
//  main.cpp
//  CppVectorDemo
//
//  Created by Dario Caric on 09.04.2024..
//

#include <iostream>
#include <vector>

using namespace std;

/**
 https://en.cppreference.com/w/cpp/container/vector
 
 */

int main() {
    
    vector<int> myVector;
    
    for (int i = 0; i < 10; i++) {
        myVector.push_back(i);
    }
    
    cout << "Vector size: " << myVector.size() << endl;
    cout << "Vector capacity: " << myVector.capacity() << endl;
    cout << "Vector max size: " << myVector.max_size() << endl;
    cout << "Front: " << myVector.front() << endl;
    cout << "Back: " << myVector.back() << endl;
    cout << "Begin: " << *myVector.begin() << endl;
    cout << "CBegin: " << *myVector.cbegin() << endl;
    cout << "End: " << *myVector.end() << endl;
    cout << "CEnd: " << *myVector.cend() << endl;
    cout << "Rbegin: " << *myVector.rbegin() << endl;
    cout << "Crbegin: " << *myVector.crbegin() << endl;
    cout << "Rend: " << *myVector.rend() << endl;
    cout << "Crend: " << *myVector.crend() << endl;
    
    
    return 0;
}
