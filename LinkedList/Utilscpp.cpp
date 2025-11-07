#include "Utils.h"
#include "Stack.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Reverse an array using the stack
void reverse(int* nums, unsigned int size)
{
    Stack s;
    initStack(&s);

    // Push all elements into the stack
    for (unsigned int i = 0; i < size; i++)
    {
        push(&s, nums[i]);
    }

    // Pop elements back into the array
    for (unsigned int i = 0; i < size; i++)
    {
        nums[i] = pop(&s);
    }

    cleanStack(&s);
}

// Read 10 numbers from the user and return a reversed array
int* reverse10()
{
    int* arr = new int[10];
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // Reverse using the stack
    reverse(arr, 10);

    return arr; // caller must delete[] this array later
}
