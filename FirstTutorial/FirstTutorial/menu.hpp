//
//  menu.hpp
//  FirstTutorial
//
//  Created by Dario Caric on 03.08.2023..
//

/**
 @file menu.hpp
 @brief Provides functions for menu
*/

#ifndef menu_hpp
#define menu_hpp

#include <stdio.h>
#include <string>
#include <list>


using namespace std;

/*
enum class Choice {
    EXIT,             // 0
    GUESS_NUMBER      // 1
};
*/

class menu {
    
    
    // Public members are accessible from outside the class (by the user of your class)
    public:
    
    
    // Constructor
    menu(); // basic constructor
    
    menu(list<string> myInputList); // constructor with parameter
    
    
    // Destructor
    ~menu();
    
    /**
     @brief Receives menu list and returns selected item from that list
     
     This function receives a list of string. Prints menu using that list and gives abbility for user to select one item from the menu
     
     @param myInputList list of strings (menu)
     @return selected item from the list of strings (menu)
     */
    string showMenu(list<string> myInputList);

    string showMenu();
    // instance method
    //static string showMenuStatic(list<string>); // static method
    static const string endOfApp;  // static constant

    
    // Protected members are accessible from inside the class and from its derived (inherited) classes
    protected:
    
    
    // Private members are only accessible from inside the class
    private:
    
    list<string> myList;
    
    
};


#endif /* menu_hpp */
