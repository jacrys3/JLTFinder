#include "JltFinder.h"
#include "Node.h"

JltFinder::JltFinder(std::shared_ptr<Node> tree) : root(tree)
{
    if(tree == nullptr)
    {
        throw "ERROR BAD TREE ROOT";
    }
}

std::shared_ptr<Node> JltFinder::Find(int value)
{
    std::vector<std::shared_ptr<Node>> stack;
    stack.push_back(root);
    int closest = INT_MIN;
    std::shared_ptr<Node> closeNode;

    while(!stack.empty())
    {
        std::shared_ptr<Node> node = stack.back();
        stack.pop_back();
        int currVal = node->getValue();

        if(closest < currVal && currVal < value)
        {
            closest = currVal;
            closeNode = node;
        }
        if(node->getLeft() != nullptr)
        {
            stack.push_back(node->getLeft());
        }
        if(node->getRight() != nullptr)
        {
            stack.push_back(node->getRight());
        }
    }
    return closeNode;
}