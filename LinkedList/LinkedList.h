#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node
{
    int data;
    Node* next;
};


Node* createList();

// Add a new node at the head of the list./
void addToHead(Node** head, int value);

// Remove the node at the head of the list.
void removeFromHead(Node** head);

// Print all elements in the list.
void printList(const Node* head);

// Clear the list and free memory.
void clearList(Node** head);

#endif
