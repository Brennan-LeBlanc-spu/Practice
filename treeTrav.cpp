#include <iostream>
// Breadth First Search -- preorder, inorder, and postorder
struct Node
{
    int value;
    Node *left;
    Node *right;
};

// Prints Tree
void printTree(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    std::cout << root->value << std::endl;
    printTree(root->left);
    printTree(root->right);
}

Node *createNewNode(int value)
{
    Node *newnode = new Node();
    newnode->value = value;
    newnode->left = nullptr;
    newnode->right = nullptr;
    return newnode;
}

int main()
{
    // Level One
    Node *root = createNewNode(1);

    // Level Two
    root->left = createNewNode(2);
    root->right = createNewNode(3);

    printTree(root);
    return 0;
}