#include "feladat1.h"

int main() {
    STACK myStack;
    myStack=Create(40);
    int sumValue=10;
    FillStack(&myStack, sumValue);
    printf("Stack: ");
    Print(&myStack);
    ordStruct myStruct;
    myStruct=CreateStruct(&myStack);
    printf("Ordered struct:");
    PrintStruct(myStruct);
    printf("Feladat1:\n");
    Feladat1(myStruct);


    return 0;
}
