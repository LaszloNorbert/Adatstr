#include "header.h"
#include "queue.h"

int main() {
    /*stack* myStack;
    create(&myStack);
    for (int i=0;i<5;i++)
    {
        push(&myStack, i);
    }
    printStack(myStack);*/
    QNode* first=NULL;
    QNode* last=NULL;
    for (int i=0;i<5;i++)
    {
        insert(&last, i*2);
    }

    printQueue(first);
    return 0;
}
