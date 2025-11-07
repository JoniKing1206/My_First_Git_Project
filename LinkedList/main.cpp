#include <iostream>
#include "LinkedList.h"
using namespace std; // // Allows using cout, endl, etc. without writing std:: each time.

int main()
{
    Node* list = createList(); // create empty list

    addToHead(&list, 5);
    addToHead(&list, 10);
    addToHead(&list, 3);

    printList(list); // should print: 3 10 5

    removeFromHead(&list);
    printList(list); // should print: 10 5

    clearList(&list);
    printList(list); // should print: List is empty.

    return 0;
}
