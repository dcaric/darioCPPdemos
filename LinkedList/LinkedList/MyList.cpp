//
//  MyList.cpp
//  LinkedList
//
//  Created by Dario Caric on 09.04.2024..
//

#include "MyList.hpp"
#include <iostream>

using namespace std;

MyList::MyList() {
    front = NULL;
}

MyList::~MyList() {
    deleteList();
}

void MyList::addNode(string name, int OIB) {
    Node *newNode = new Node;
    newNode->name = name;
    newNode->OIB = OIB;
    newNode->next = front;
    front = newNode;
}

void MyList::printList() {
    Node *current = front;
    while (current != NULL) {
        cout << current->name << " " << current->OIB << endl;
        current = current->next;
    }
}


/**
 
 (1)
 case where first node has OIB
 
 0x100
 OIB = 3343
 next = 0x200 (next node)
 
 
 (2)
 case where node in the mid has OIB
                            current
 0x100                                                  0x200                       0x300
 OIB = 1234                                         OIB = 3343              OIB = 4567
 next = 0x200 (next node)                   next = 0x300            next = 0x400
 
 */

void MyList::deleteNode(int OIB) {
    Node *current = front;
    Node *previous = NULL;
    
    while (current != NULL) {
        if (current->OIB == OIB) {
            if (previous == NULL) {
                front = current->next;  // 0x200
            } else {
                previous->next = current->next; // link one at 0x100 with 0x300, 0x200 is deleted
            }
            delete current;
            return; // end the function no need to continue
        }
        previous = current;
        current = current->next;
    }
}

void MyList::deleteList() {
    Node *current = front;
    Node *next = NULL;
    
    while (current != NULL) {
        next = current->next;
        delete current;
        current = next;
    }
    front = NULL;
}

void MyList::searchNode(int OIB) {
    Node *current = front;
    while (current != NULL) {
        if (current->OIB == OIB) {
            cout << "Name: " << current->name << " OIB: " << current->OIB << endl;
            return;
        }
        current = current->next;
    }
    cout << "Node with OIB " << OIB << " not found" << endl;
}

void MyList::prindNodeAddresses() {
    Node *current = front;
    while (current != NULL) {
        cout << current << endl;
        current = current->next;
    }
}

long MyList::size() {
    Node *current = front;
    long count = 0;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
