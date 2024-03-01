#include <iostream>
using namespace std;

// Tree data structures -- An Example is the folders in your directory
/*
-Singular entity is a node, and multiple nodes build up a tree data structure and are connected with edges. Children are not interconnected.
-The first node is called the root node
-Leaf nodes are nodes that do not have any children
-Binary Tree: Parent child relationship, but the parent cannot have anymore than two child nodes
-Binary Search Tree (BST): Binary Tree but its data is organized in a specific way, left child is lower than its parent and right child has a value that is higher than its parent. Facilitate the search of elements.
-Each node has three things, data, left node pointer, and right node pointer
*/

struct Node
{
    int data;    // Data stored in the node
    Node *left;  // Left Child
    Node *right; // Right Child
};

// Create new node and return that node
Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

int main()
{
    Node *root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);

    return 0;
}