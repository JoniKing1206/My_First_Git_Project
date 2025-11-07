#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

/* A stack of positive integers using a linked list (no max size) */
typedef struct Stack
{
    Node* top; // Pointer to the top element of the stack
} Stack;

// Push a new element on top
void push(Stack* s, unsigned int element);

// Pop the top element (return -1 if empty)
int pop(Stack* s);

// Initialize the stack
void initStack(Stack* s);

// Clean the stack.
void cleanStack(Stack* s);

// Utility functions
bool isEmpty(Stack* s);
bool isFull(Stack* s); // Always false since stack is dynamic

#endif // STACK_H
