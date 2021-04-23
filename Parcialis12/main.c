#include "feladat12.h"

int main() {
    int foodNr, n, boxNr;
    Food* foods;
    foods= readFoods("feladat12.txt", &foodNr, &n);
    qsort(foods, foodNr, sizeof(Food), cmp);

    STACK* boxes;
    boxes= CreateBoxes(n, foodNr, &boxNr);
    FillBoxes(foods, &boxes, foodNr, n);

    for (int i=0;i<boxNr;i++)
    {
        Print(&boxes[i]);
        printf("-----------------\n");
    }
    return 0;
}
