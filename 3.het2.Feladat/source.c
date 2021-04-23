//
// Created by user on 03/03/2021.
//

#include "source.h"

void createArray(intArray* array)
{
    array->elements=(int*)malloc(sizeof(int)*array->size);
    if (!array->elements)
        printf("MALLOC ERROR\n");
}

void readArray(const char *fileName, intArray* array)
{
    FILE* f=fopen(fileName, "rt");
    if (!f)
        printf("IO ERROR\n!");
    fscanf(f, "%d", &(*array).size);
    createArray(&(*array));
    for (int i=0;i<(*array).size;i++)
    {
        fscanf(f, "%d", &(*array).elements[i]);
    }
}

void fillArray(intArray* array, int first, int last)
{
    srand(time(0));
    for (int i = 0; i < array->size; ++i)
    {
        array->elements[i]=(rand() % (last - first + 1)) + first;
    }
}

void printArray(intArray a)
{
    for (int i = 0; i < a.size; ++i) {
        printf("%d ", a.elements[i]);
    }
    printf("\n");
}

void printArrayToFile(const char* fileName, intArray array)
{
    FILE* f=fopen(fileName, "wt");
    if (!f)
        printf("IO PROBLEM!\n");
    for (int i = 0; i < array.size; ++i) {
        fprintf(f, "%d ", array.elements[i]);
    }
}

void sortArray(intArray* array)
{
    qsort((*array).elements, (*array).size, sizeof(int), cmpfunc);
}

int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

int findElement(intArray array, int element)
{
    for (int i = 0; i < array.size; ++i) {
        if (array.elements[i]==element)
            return i;
    }
    return -1;
}

int minimum(intArray array)
{
    int m=INT_MAX;
    for (int i=0;i<array.size;i++)
    {
        if (array.elements[i]<m)
            m=array.elements[i];
    }
    return m;
}

int maximumFunc(intArray array)
{
    int m=INT_MIN;
    for (int i=0;i<array.size;i++)
    {
        if (array.elements[i]>m)
            m=array.elements[i];
    }
    return m;
}

int linearSearch(intArray array, int element)
{
    for (int i = 0; i < array.size; ++i) {
        if (array.elements[i]==element)
            return i;
    }
    return -1;
}

int binarySearchUtil(intArray array, int element)
{
    return binarySearch(array, 0, array.size-1, element);
}

int binarySearch(intArray a, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (a.elements[mid] == x)
            return mid;

        if (a.elements[mid] > x)
            return binarySearch(a, l, mid - 1, x);

        return binarySearch(a, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

void copy(intArray array1, intArray* array2){
    if (array1.size<=(*array2).size)
    {
        for (int i=0;i<array1.size;i++)
        {
            (*array2).elements[i]=array1.elements[i];
        }
    }
    (*array2).size=array1.size;
}

void deleteElement(intArray* array, int element)
{
    for (int i = 0; i < (*array).size; ++i)
    {
        if ((*array).elements[i]==element)
        {
            (*array).elements[i]=(*array).elements[(*array).size-1];
            (*array).size--;
            i--;
        }

    }
}