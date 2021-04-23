#include "header.h"

int main() {
    Node* first;
    first=Create();
    /*addFirst(&first, 5);
    addFirst(&first, 4);
    addFirst(&first, 3);*/
    addLast(first, 1);
    addLast(first, 2);
    addLast(first, 3);
    printList(first);
    return 0;
}
