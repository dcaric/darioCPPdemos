//
//  btree.cpp
//  BinaryTree3
//
//  Created by Dario Caric on 11.06.2024..
//

#include "btree.hpp"
#include <iostream>
#include <queue>
#include <sstream>

using namespace std;

/*************** PRIVATNE METODE ****************/

node* btree::create_new_node(string element)
{
    node* new_node = new node;
    new_node->element = element;
    new_node->left_child = nullptr;
    new_node->right_child = nullptr;
    
    return new_node;
}

/*************** JAVNE METODE ****************/

//KONSTRUKTOR
btree::btree(string element)
{
    root_node = create_new_node(element);
}

void btree::insert_left(node* parent, string element)
{
    parent->left_child = create_new_node(element);
}

void btree::insert_right(node* parent, string element)
{
    parent->right_child = create_new_node(element);
}

node* btree::root()
{
    return root_node;
}

node* btree::get_left_child(node* parent)
{
    return parent->left_child;
}

node* btree::get_right_child(node* parent)
{
    return parent->right_child;
}



//TASK 02
void btree::inorder(node* n){
    if(n == nullptr){
        return;
    }
    
    
    inorder(n->left_child);
    cout << n->element << " ";
    inorder(n->right_child);
    
}

void btree::postOrder(node* n){
    if(n == nullptr){
        return;
    }
    
    
    postOrder(n->left_child);
    postOrder(n->right_child);
    cout << n->element << " ";
    
    // destroy node
    cout << "Deleting node with element: " << n->element << endl;
    delete n;
}

btree::~btree(){
    cout << "Destroying all nodes" << endl;
}

void btree::destroyAllNodes() {
    postOrder(root_node); // pozove postOrder sa root_node i odatle krene klupko se vrtiti node po node
    root_node = nullptr;  // na kraju se i root_node rucno makne
}


string btree::create_spaces(int n) {
    stringstream ss;
    for (int i = 0; i < n; i++) {
        ss << " ";
    }
    return ss.str();
}

string btree::bfs_spaces(node* n){
    
    
    if(n == nullptr){
        return "";
    }
    
    queue<node*> q;
    q.push(n);
    
    
    int level = 0;
    stringstream ss;
    
    while (!q.empty()) {
        node* node = q.front();
        q.pop();

        //cout << node->element << " ";
        // stream je za ovakve stvari super jer mi treba on da mogu dodavati u njega
        // dio po dio i na kraju od njega napravim string
        // dodaval spaceve preko funkcije koja isto ima svoj strem u kojeg nadoda vise spacova
        // koliki je level u biti i to dole iskoristim
        ss << create_spaces(level) << node->element << "\n";
        //cout << endl;

        bool newLevel = false; // osigurava mi da znam da barem imam jedan (left ili right) child sto je novi level
        if (node->left_child != nullptr) {
            q.push(node->left_child);
            newLevel = true;
        }
        if (node->right_child != nullptr) {
            q.push(node->right_child);
            newLevel = true;
        }
        
        if (newLevel) level++;
        
    }
    
    
    return ss.str();
}
