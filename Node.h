#ifndef NODE_H_
#define NODE_H_
#include <memory>
using namespace std;

class Node {
public:
    Node(int);
    ~Node();
    int getValue();
    shared_ptr<Node> getLeft();
    shared_ptr<Node> getRight();

    // only used by BSTree
    Node();
    
    void setValue(int);
    void setLeft(shared_ptr<Node>);
    void setRight(shared_ptr<Node>);
private:
    int value;
    shared_ptr<Node> left;
    shared_ptr<Node> right;
};
#endif