//
// Created by user on 24/02/2021.
//
#include "header.h"

void Print(int x)
{
    printf("%d\n", x);
}

int FindInArray(int* tomb, int n, int x, int * muvSzam)
{
    for (int i=0;i<n;i++)
    {
        (*muvSzam)++;
        if (tomb[i]==x)
            return i;
    }
    return -1;
}

int* GenerateArray(int n)
{
    int* tomb;
    srand(time(0));
    tomb=(int*)malloc(sizeof(int)*n);
    for (int i=0;i<n;i++)
    {
        tomb[i]=rand()%1000;
    }
    return tomb;
}

int binarySearch(int* arr, int l, int r, int x, int* muvSzam)
{
    if (r >= l)
    {
        int mid = l + (r - l)/2;
        (*muvSzam)++;

        if (arr[mid] == x)  return mid;

        (*muvSzam)++;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x, muvSzam);//Search to the left

        return binarySearch(arr, mid+1, r, x, muvSzam);//Search to the right
    }

    return -1;
}

int CmpFunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}