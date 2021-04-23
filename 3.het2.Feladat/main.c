#include <stdio.h>
#include "source.h"

int main() {
    intArray a;
    //readArray("be.txt", &a);
    a.size=5;
    createArray(&a);
    fillArray(&a, 5, 10);
    //sortArray(&a);
    printArray(a);
    deleteElement(&a, 7);
    printArray(a);
    return 0;
}
