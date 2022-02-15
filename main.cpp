#include "BSTree.h"
#include "JltFinder.h"
#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

void testFind(JltFinder finder, vector<int> vect);

int main()
{
    BSTree tree1 = BSTree();

    vector<int> vect = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    for(int i : vect)
    {
        tree1.Insert(i);
        //cout << "Inserting " << i << endl;
    }
    
    JltFinder finder1 = JltFinder(tree1.getRoot());
    
    // run test1
    cout << "***STARTING TEST 1***\n" << endl;
    testFind(finder1, vect);
    cout << "***FINISHED TEST 1***\n" << endl;
    

    // create new tree
    BSTree tree2 = BSTree();

    vect = {-1, -311, 2432, 43, 1112, -23, 0, -54, 55, -3, 2};
    for(int i : vect)
    {
        tree2.Insert(i);
        //cout << "Inserting " << i << endl;
    }

    JltFinder finder2 = JltFinder(tree2.getRoot());

    // run test1 again with new tree
    cout << "***STARTING TEST 2***\n" << endl;
    testFind(finder2, vect);
    cout << "***FINISHED TEST 2***\n" << endl;
    

}

void testFind(JltFinder finder, vector<int> vect) // tests for correct function of Find() with values that are already in the tree
{
    for(int i : vect)
    {
        shared_ptr<Node> node = finder.Find(i);
        if(node == nullptr)
        {
            cout << ">>> Value of " << i << " does not have a lesser value in current tree" << endl;
        }
        else
        {
            cout << "Value of " << i << " has a lesser value in current tree of " << node->getValue() << endl;
        }
    }
    cout << endl;
}