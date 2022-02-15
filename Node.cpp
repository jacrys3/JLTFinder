#include "Node.h"

Node::Node() : value(-1), left(nullptr), right(nullptr)
{

}

Node::Node(int item) : value(item), left(nullptr), right(nullptr)
{

}

Node::~Node()
{
    left.reset();
    right.reset();
}

int Node::getValue()
{
    return value;
}

shared_ptr<Node> Node::getLeft()
{
    return left;
}

shared_ptr<Node> Node::getRight()
{
    return right;
}

void Node::setValue(int v)
{
    value = v;
}

void Node::setLeft(shared_ptr<Node> l)
{
    left = l;
}

void Node::setRight(shared_ptr<Node> r)
{
    right = r;
}