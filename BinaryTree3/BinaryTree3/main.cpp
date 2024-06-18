//
//  main.cpp
//  BinaryTree3
//
//  Created by Dario Caric on 11.06.2024..
//

#include <iostream>
#include <iostream>
#include "btree.hpp"
using namespace std;


int main() {

    btree tree = btree("a");
    
    tree.insert_left(tree.root(), "b");
    tree.insert_right(tree.root(), "c");
    
    
    node* c = tree.get_right_child(tree.root());
    tree.insert_right(c, "d");
    
    node* d = tree.get_right_child(c);
    tree.insert_left(d, "e");
    tree.insert_right(d, "f");
    
    
    node* e = tree.get_left_child(d);
    tree.insert_left(e, "g");
    tree.insert_right(e, "h");
    
    
    node* f= tree.get_right_child(d);
    tree.insert_right(f, "i");
    
    //TASK 02
    //tree.inorder (tree.root ());
    //cout << endl;

    
    //tree.postOrder(tree.root());
    //cout << endl;
    //tree.destroyAllNodes();
    
    
    cout << tree.bfs_spaces(tree.root());
    cout << endl;
    
    
    return 0;
}
