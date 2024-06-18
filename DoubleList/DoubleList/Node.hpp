//
//  Node.hpp
//  DoubleList
//
//  Created by Dario Caric on 12.01.2024..
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <string>

using namespace std;
template <typename T>

class Node {
            
    
public:
    T value;
    Node *next;
    Node *prev;
    
    Node(T setValue) {
        value = setValue;
        next = nullptr;
        prev = nullptr;
    }};

#endif /* Node_hpp */
