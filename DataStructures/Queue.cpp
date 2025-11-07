#include "Queue.h"
#include <cstdlib>

void initQueue(Queue* q, unsigned int size)
{
    q->data = (unsigned int*)malloc(sizeof(unsigned int) * size);
    q->size = size;
    q->front = 0;
    q->rear = 0;
    q->count = 0;
}

void cleanQueue(Queue* q)
{
    if (q->data != nullptr)
    {
        free(q->data);
        q->data = nullptr;
    }
    q->size = 0;
    q->front = 0;
    q->rear = 0;
    q->count = 0;
}

bool isEmpty(Queue* q)
{
    return q->count == 0;
}

bool isFull(Queue* q)
{
    return q->count == q->size;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (!isFull(q))
    {
        q->data[q->rear] = newValue;
        q->rear = (q->rear + 1) % q->size; // circular increment
        q->count++;
    }
}

int dequeue(Queue* q)
{
    if (isEmpty(q))
        return -1;

    int value = q->data[q->front];
    q->front = (q->front + 1) % q->size; // circular increment
    q->count--;
    return value;
}
