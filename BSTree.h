#ifndef BSTREE_H_
#define BSTREE_H_
#include "Node.h"
#include <iostream>
#include <memory>
using namespace std;

class BSTree
{ 
public: 
    BSTree(); 
    ~BSTree();

    bool Insert(int value); 
    void Display(shared_ptr<Node> node);  
    void Empty();  
    bool isEmpty() const;
    shared_ptr<Node> getRoot() const;
private: 
    shared_ptr<Node> root;  
}; 
#endif