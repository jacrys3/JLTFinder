# Homework 3: Just Less Than Finder

This homework is part of CSS 343 at the University of Washington Bothell. The point of the assignment was to create a functioning search algorithm to find the closest value to an input value. A secondary requirement was that we had to implement the search using DFS. 

> Given a binary search tree and a number n, find the node in the tree that contains the largest number 
that is less than n.  If there is no value in the tree less than n then return nullptr.  The binary search tree 
over which you will search will be given as a parameter.  The Node interface is as follows: 
```
class Node {
public:
  Node(int);
  ~Node();
  int getValue();
  std::shared_ptr<Node> getLeft();
  std::shared_ptr<Node> getRight();
};
```
The function I was responsible for implementing is shown below:
```
std::shared_ptr<Node> Find(int);
```
