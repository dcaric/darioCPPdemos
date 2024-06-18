//
//  btree.cpp
//  DSA_Exercise_07
//
//  Created by Paola Caric on 11.06.2024..
//

#include "btree.hpp"
#include <iostream>
#include <queue>

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
    
    
    
}

btree::~btree(){
    cout << "destroy" << endl;
}


void btree::bfs_spaces(node* n){
    
    
    if(n == nullptr){
        return;
    }
    
    queue<node*> q;
    q.push(n);
    
    

    while (!q.empty()) {
        node* node = q.front();
        q.pop();

        cout << node->element << " ";
        
        cout << endl;

        if (node->left_child != nullptr) {
            q.push(node->left_child);
        }
        if (node->right_child != nullptr) {
            q.push(node->right_child);
        }
    }
    
    
    
}
