#include <iostream>

// Linked Lists
/*
-A linked list is a fundamental data structure in computer science. It consists of nodes where each node contains data and a reference (link) to the next node in the sequence. This allows for dynamic memory allocation and efficient insertion and deeletion operations compared to array.

-It is a linear data structure.

-Node Structure: A node is a linked list typically consists of two components:
--Data: It holds the actual value or data associated witht he node
--Next Pointer: It stores the memory address (reference) of the next node in the sequence.

-Head and Tail: The linked list is accessed through the head node, which points to the first node in the lists. The last node in the list points to Null or nullptr, indicating the end of the list. This node is known as the tail node.

-Dynamic Data Structure: Size of memory allocated or deallocated based on insertion or deletion at compile time.
*/

class Node
{
public:
    int value;
    Node *next;
};

void print(Node *node)
{
    while (node != nullptr)
    {
        std::cout << node->value << std::endl;
        node = node->next;
    }
}

void insertFront(Node **head, int value)
{
    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = *head;

    *head = newNode;
}

void insertBack(Node **head, int value)
{
    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = nullptr;

    if (*head == nullptr)
    {
        *head = newNode;
        return;
    }

    Node *tmp = *head;

    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

int main()
{

    Node *head = new Node();
    head->value = 2;
    head->next = 0;

    insertFront(&head, 1);
    insertBack(&head, 3);
    print(head);

    return 0;
}