#include "header.h"

int main() {
    STACK myStack;
    STACK myStack2;
    myStack2=Create(10);
    myStack=Create(10);

    char word[30];
    scanf("%s", word);
    for (int i=0;i<10;i++)
    {
        Push(&myStack, i*2);
        Push(&myStack2, i*3);
    }

    //Print(&myStack);
    STACK newStack;
    newStack=Union(myStack, myStack2);
    Print(&newStack);
    return 0;
}
