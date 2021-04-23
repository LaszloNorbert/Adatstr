//
// Created by user on 10/03/2021.
//

#ifndef INC_4_HET_HEADER_H
#define INC_4_HET_HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int* elements;
    int size;
}set;

int sizeOfSet(set);
void createSet(set*);
void freeSet(set*);
bool isEmptySet(set);
void insertInSet(set*, int);
void erase(set*, int);
void eraseFromPos(set*, int);
void clearSet(set*);
int findInSet(set, int);
int lowerBound(set, int);
int upperBound(set, int);
void printSet(set);
set setUnion(set, set);
set setEngrave(set, set);
set setSubstract(set, set);
void subsetsOfSet(set);
void incrementBinary(bool*, int);


#endif //INC_4_HET_HEADER_H
