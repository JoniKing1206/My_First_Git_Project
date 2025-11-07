#include <iostream>
#include "LinkedList.h"
using namespace std;

// Create an empty list
Node* createList()
{
    return nullptr;
}

// Add a new node at the head of the list
void addToHead(Node** head, int value)
{
    if (value <= 0)
    {
        cout << "Error: value must be positive" << endl;
        return;
    }

    Node* newNode = new Node; // allocate memory.
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Remove the node at the head of the list
void removeFromHead(Node** head)
{
    if (*head == nullptr)
    {
        cout << "List is empty, nothing to remove." << endl;
        return;
    }

    Node* temp = *head;
    *head = (*head)->next;
	delete temp; // free memory
}

// Print all nodes in the list.
void printList(const Node* head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    const Node* current = head;
    cout << "List elements: ";
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Clear the list and free memory.
void clearList(Node** head)
{
    while (*head != nullptr)
    {
        removeFromHead(head);
    }
}
