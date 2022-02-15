#include "BSTree.h"

// BSTree Implementation

BSTree::BSTree() : root(nullptr)
{
} 

BSTree::~BSTree()
{
    //Display(root);
    Empty();
}

bool BSTree::Insert(int value)
{
    if(root == nullptr)
    {
        shared_ptr<Node> newNode = make_shared<Node>();
        newNode->setValue(value);
        newNode->setLeft(nullptr);
        newNode->setRight(nullptr);
        root = newNode;
        return true;
    }

    shared_ptr<Node> prev = make_shared<Node>();
    shared_ptr<Node> temp = make_shared<Node>();
    temp = root;

    while(temp != nullptr)
    {
        if(temp->getValue() > value)
        {
            prev = temp;
            temp = temp->getLeft();
        }
        else if(temp->getValue() < value)
        {
            prev = temp;
            temp = temp->getRight();
        }
        else
        {
            throw "ERROR DUPLICATE VALUE";
            return false;
        }
    }
    if(prev->getValue() > value)
    {
        shared_ptr<Node> newNode = make_shared<Node>();
        newNode->setValue(value);
        newNode->setLeft(nullptr);
        newNode->setRight(nullptr);
        prev->setLeft(newNode);
        return true;
    }
    else
    {
        shared_ptr<Node> newNode = make_shared<Node>();
        newNode->setValue(value);
        newNode->setLeft(nullptr);
        newNode->setRight(nullptr);
        prev->setRight(newNode);
        return true;
    }
    return false;
}

void BSTree::Display(shared_ptr<Node> node)
{
    if(node == nullptr)
    {
        return;
    }
    Display(node->getLeft());
    cout << "Node with value of " << node->getValue() << endl;
    Display(node->getRight());
}

void BSTree::Empty()
{
    root.reset();
}

bool BSTree::isEmpty() const
{
    return root == nullptr;
}

shared_ptr<Node> BSTree::getRoot() const
{
    return root;
}