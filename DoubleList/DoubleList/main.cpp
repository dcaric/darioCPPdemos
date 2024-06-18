//
//  main.cpp
//  DoubleList
//
//  Created by Dario Caric on 12.01.2024..
//

#include <iostream>
#include "Node.hpp"

int main(int argc, const char * argv[]) {

    vector<Node<string>*> nodeList;
    Node<string> *currentPtr = nullptr;
    Node<string> *first = nullptr;
    Node<string> *last = nullptr;
    
    // define few nodes
    cout << " How many nodes: " << endl;
    int nodeNum;
    cin >> nodeNum;
    
    for (int i = 0; i < nodeNum; i++) {
        cout << "Write some text:" << endl;
        string text;
        cin >> text;
        Node<string> *tempNode = new Node(text);
        nodeList.push_back(tempNode);
        if (i > 0) {
            currentPtr->next = tempNode;
            tempNode->prev = currentPtr;
        }
        if (i == 0)first = tempNode;
        if (i == nodeNum -1) last = tempNode;
        currentPtr = tempNode;
    }
    
    cout << "Forward direction" << endl;
    currentPtr = first;
    while (currentPtr != nullptr) {
        cout << currentPtr->value << endl;
        currentPtr = currentPtr->next;
    }
    
    cout << endl;
    cout << "Backward direction" << endl;
    currentPtr = last;
    while (currentPtr != nullptr) {
        cout << currentPtr->value << endl;
        currentPtr = currentPtr->prev;
    }
    
    // delete pointers
    for (int i = 0; i < nodeList.size(); i++) {
        delete nodeList[i];
    }
    
    
    return 0;
}
