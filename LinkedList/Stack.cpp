#include "Stack.h"

// Initialize an empty stack
void initStack(Stack* s)
{
    s->top = nullptr;
}

// Push element to stack
void push(Stack* s, unsigned int element)
{
    addToHead(&(s->top), element);
}

// Pop element from stack
int pop(Stack* s)
{
    if (isEmpty(s))
        return -1;

    int value = s->top->data;
    removeFromHead(&(s->top));
    return value;
}

// Check if stack is empty
bool isEmpty(Stack* s)
{
    return s->top == nullptr;
}

// Check if stack is full (always false for dynamic stack)
bool isFull(Stack* s)
{
    return false;
}

// Clean the stack and free memory
void cleanStack(Stack* s)
{
    clearList(&(s->top));
}
