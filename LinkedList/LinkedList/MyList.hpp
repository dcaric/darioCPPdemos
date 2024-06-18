//
//  MyList.hpp
//  LinkedList
//
//  Created by Dario Caric on 09.04.2024..
//

#ifndef MyList_hpp
#define MyList_hpp
#include <string>
#include <stdio.h>

using namespace std;

struct Node {
    string name;
    int OIB;
    Node *next;
};

class MyList {
private:
    Node *front;
    
    
public:
    MyList();
    ~MyList();
    void addNode(string name, int OIB);
    void printList();
    void deleteNode(int OIB);
    void deleteList();
    void searchNode(int OIB);
    void prindNodeAddresses();
    long size();
    
    
};
#endif /* MyList_hpp */
