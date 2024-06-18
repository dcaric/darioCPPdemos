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
#include <sstream>
#include <chrono>
#include "Furniture.hpp"


// dat user da upise nesto od:
//nmae category price i color
// 1. name ad price
//2. name category and price
//3 sve
// dostupnost - ako je
// ispisat ovisno sta upise i dostupnost uvijek




using namespace std;
using namespace chrono;

int main1 () {

    char choice;
    char choice2;
    char choice3;
    string name, category, color;
    double price;
    
    cout << "Insert option" << endl;
    cout << " 1 - name and price" << endl;
    cout << " 2 - name, price, chategory" << endl;
    cout << " 3 - name, price, chategory and color" << endl;
    int option;
    switch (option) {
        case 1:
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter price: ";
            cin >> price;
            break;
        case 2:
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter category: ";
            cin >> category;
            cout << "Enter price: ";
            cin >> price;
            break;
        case 3:
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter category: ";
            cin >> category;
            cout << "Enter color: ";
            cin >> color;
            cout << "Enter price: ";
            cin >> price;
            break;
        default:
            cout << "Invalid option" << endl;
            break;
    }
    
    
    
    
   

    return 0;
}
