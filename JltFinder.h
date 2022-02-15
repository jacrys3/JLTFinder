#include <memory>
#include <vector>

class Node;

class JltFinder
{
public:
    JltFinder();
    //public constructor, receives the root of the binary search tree over which to search.
    JltFinder(std::shared_ptr<Node>);
    //search for the node with the value closest to but less than the value provided.
    std::shared_ptr<Node> Find(int);
private:
    std::shared_ptr<Node> root;
};