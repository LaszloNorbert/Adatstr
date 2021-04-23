#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    int x, muvSzam=0, noOfRuns;
    int target=rand()%1000;
    double avgTime;
    time_t begin, end, elapsed;
    int* tomb;
    puts("Size of array:");
    scanf("%d", &x);//Size of array
    puts("Number of runs:");
    scanf("%d", &noOfRuns);//Number of runs
    tomb=GenerateArray(x);

    //-------LINEARIS KERESES--------------------
    printf("----LINEARIS KERESES----\n");
    for (int i=0;i<noOfRuns;i++)
    {
        time(&begin);
        int y=FindInArray(tomb, x, target, &muvSzam);
        time(&end);
        if (y!=-1) printf("Benne van ezen a helyen: %d!\n", y);
        elapsed = end - begin;
        avgTime+=elapsed;
    }
    avgTime/=noOfRuns;
    muvSzam/=noOfRuns;

    printf("Time measured: %lf seconds.\n", avgTime);
    printf("Muveletek szama: %d\n", muvSzam);
    //----------------------------------------------------

    //----------BINARIS KERESES--------------------------
    printf("----BINARIS KERESES----\n");
    qsort(tomb, x, sizeof(int), CmpFunc);
    muvSzam=0;
    avgTime=0;

    for (int i=0;i<noOfRuns;i++)
    {
        time(&begin);
        int y=binarySearch(tomb, 0, x-1, target, &muvSzam);
        time(&end);
        if (y!=-1) printf("Benne van ezen a helyen: %d!\n", y);
        elapsed = end - begin;
        avgTime+=elapsed;
    }
    avgTime/=noOfRuns;
    muvSzam/=noOfRuns;

    printf("Time measured: %lf seconds.\n", avgTime);
    printf("Muveletek szama: %d\n", muvSzam);

    return 0;
}
