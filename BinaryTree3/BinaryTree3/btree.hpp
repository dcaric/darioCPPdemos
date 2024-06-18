//
//  btree.hpp
//  BinaryTree3
//
//  Created by Dario Caric on 11.06.2024..
//

#ifndef btree_hpp
#define btree_hpp

#include <stdio.h>
#include <string>
using namespace std;

struct node
{
    string element;
    node* left_child;
    node* right_child;
};

class btree {
    
private:
    node* root_node;
    node* create_new_node(string element);
    string create_spaces(int);

public:
    btree(string element);
   
    void insert_left(node* parent, string element);
    void insert_right(node* parent, string element);
    node* root();
    node* get_left_child(node* parent);
    node* get_right_child(node* parent);
    
    void inorder(node*);
    void postOrder(node*);
    ~btree();
    void destroyAllNodes();
    string bfs_spaces(node*);
};

#endif /* btree_hpp */
