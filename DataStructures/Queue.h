#include <stdbool.h>

#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains positive integer values. */
typedef struct Queue
{
    unsigned int* data;   // pointer to dynamically allocated array
    unsigned int size;    // max capacity
    unsigned int front;   // index of first element
    unsigned int rear;    // index of last element
    unsigned int count;   // number of elements currently in queue
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif /* QUEUE_H */
