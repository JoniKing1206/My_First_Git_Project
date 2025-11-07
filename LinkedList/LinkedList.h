#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node
{
    int data;
    Node* next;
};

Node* createList();
void addToHead(Node** head, int value);
void removeFromHead(Node** head);
void printList(const Node* head);
void clearList(Node** head);

#endif // LINKEDLIST_H
