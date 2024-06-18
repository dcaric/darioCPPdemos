//
//  menu.cpp
//  FirstTutorial
//
//  Created by Dario Caric on 03.08.2023..
//
#include <iostream>
#include <stdexcept> // for std::out_of_range
#include <map>
#include <vector>
#include "menu.hpp"
#include <cstdlib>
#include "menu.hpp"  // Include the header file


using namespace std;

menu::menu() {
    cout << "[ This is basic constructor ]\n";
}

menu::menu(std::list<std::string> myInputList) : myList(myInputList) {
    // Other potential initialization code (if any) goes here
    myList.push_front(menu::endOfApp); // add word Exit at the begining of the list, there is also push_back function to add at the end of the list
    cout << "[ This is constructor ]\n";
}


menu::~menu() {
    cout << "[ This is destructor ]\n";
}

const string menu::endOfApp = "Exit";

//string menu::showMenu(list<string> myList) {
string menu::showMenu() {

    //myList.push_front(menu::endOfApp); // add word Exit at the begining of the list, there is also push_back function to add at the end of the list

    // this is menu with header and footer
    cout << "\nMenu\n";
    cout << "==========\n";
    int i  = 0;
    for (string& item : myList) {
        cout << i << ". " << item << "\n";
        i ++;
    }
    cout << "Enter your choice: ";
    cout << "\n==========\n";
    
    // user make selection and value for it is saved in input variable
    int input;
    cin >> input;
    
    //cout << "input is " << input << "\n";  // only for debug
        

    
    list<string>::const_iterator it = myList.begin();
    //cout << "begin is " << *it << "\n";    // only for debug
    
    // finding selected option to return
    int index = 0;
    while (it != myList.end()) {
        if (index == input) return *it;
        it ++;
        index ++;
    }

    // in case selected option is not fout method throws (reports) error
    throw out_of_range("Position out of range of the list");

}


string menu::showMenu(list<string> myList) {
    myList.push_front(menu::endOfApp); // add word Exit at the begining of the list, there is also push_back function to add at the end of the list
    
    map<int, string> myDictionary;
    vector<string> myVector;


    // this is menu with header and footer
    system("clear");

    cout << "\nMenu\n";
    cout << "==========\n";
    int i  = 0;
    for (string& item : myList) {
        myDictionary[i] = item; // build myDictionary based on myList
        myVector.push_back(item); // build myVector based on myList
        
        cout << i << ". " << item << "\n";
        i ++;
    }
    cout << "Enter your choice: ";
    cout << "\n==========\n";
    
    // user make selection and value for it is saved in input variable
    int input;
    cin >> input;

    //return myDictionary[input];
    return myVector[input];

}
