#include "header.h"

int main() {
    set s2;
    createSet(&s2);
    for (int i=0;i<4;i++)
    {
        insertInSet(&s2, i+1);
    }
    printSet(s2);
    subsetsOfSet(s2);
    return 0;
}
