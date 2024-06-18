//
//  main.cpp
//  LinkedList
//
//  Created by Dario Caric on 09.04.2024..
//

#include <iostream>
#include "MyList.hpp"

int main() {
    
    MyList list;
    list.addNode("Dario", 123456789);
    list.addNode("Paola", 987654321);
    list.addNode("Mate", 123123123);
    list.addNode("Luka", 456456456);
    list.addNode("Marko", 789789789);
    list.printList();
    cout << "size: " << list.size() << endl;
    cout << endl;
    list.prindNodeAddresses();
    cout << endl;

    list.deleteNode(123123123);
    list.printList();
    cout << "size: " << list.size() << endl;

    cout << endl;
    list.prindNodeAddresses();
    cout << endl;

    list.searchNode(987654321);
    list.deleteList();
    list.printList();
    
    return 0;
}
