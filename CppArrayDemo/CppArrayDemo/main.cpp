//
//  main.cpp
//  CppArrayDemo
//
//  Created by Dario Caric on 09.04.2024..
//

#include <iostream>
#include <array>

using namespace std;

int main() {
    
    /**
     Slicno C-stylu arry-a tipa
     int myArray [10];
     nema inserta kao u vectorima i listama
     fiksni size koliko se postavi na pocetku
     
     https://en.cppreference.com/w/cpp/container/array

     */
    array<int, 10> myArray;
    
    for (int i = 0; i < 10; i++) {
        myArray[i] = i;
    }
    
    
    
    cout << " front " << myArray.front() << endl;
    cout << " back " << myArray.back() << endl;
    cout << " size " << myArray.size() << endl;
    cout << " max size: " << myArray.max_size() << endl;

    cout << " begin" << *myArray.begin() << endl;
    cout << " cbegin" << *myArray.cbegin() << endl;

    cout << " end" << *myArray.end() << endl;
    cout << " cend" << *myArray.cend() << endl;

    cout << " rbegin" << *myArray.rbegin() << endl;
    cout << " crbegin" << *myArray.crbegin() << endl;
    
    cout << " rend" << *myArray.rend() << endl;
    cout << " crend" << *myArray.crend() << endl;
    
    // difference between begin and cbegin
    // begin() returns a pointer to the first element in the array
    // cbegin() returns a const pointer to the first element in the array
    
    auto result = myArray.empty();
    cout << " empty " << result << endl;
    cout << " front " << myArray.front() << endl;
    cout << " back " << myArray.back() << endl;
    cout << " size " << myArray.size() << endl;


    return 0;
}
