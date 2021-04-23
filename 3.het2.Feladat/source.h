//
// Created by user on 03/03/2021.
//

#ifndef INC_3_HET2_FELADAT_SOURCE_H
#define INC_3_HET2_FELADAT_SOURCE_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <limits.h>

typedef struct{
    int* elements;
    int size;
}intArray;

void createArray(intArray*);
void readArray(const char*, intArray*);
void fillArray(intArray*, int, int);
void printArray(intArray);
void printArrayToFile(const char*, intArray);
void sortArray(intArray*);
int cmpfunc (const void*, const void*);
int findElement(intArray, int);
int minimum(intArray);
int maximumFunc(intArray);
int linearSearch(intArray, int);
int binarySearchUtil(intArray, int);
int binarySearch(intArray, int, int, int);
void copy(intArray, intArray*);
void deleteElement(intArray*, int);

#endif //INC_3_HET2_FELADAT_SOURCE_H
