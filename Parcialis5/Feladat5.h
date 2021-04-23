//
// Created by user on 13/04/2021.
//

#ifndef PARCIALIS5_FELADAT5_H
#define PARCIALIS5_FELADAT5_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int year;
    int month;
    int day;
}Date;

typedef struct stack{
    Date date;
    struct stack *next;
}stack;

void create(stack**);
bool push(stack**, Date);
Date top(stack *topPtr);
Date pop(stack **topPtr);
bool isEmpty(stack *topPtr);
void printStack(stack *topPtr);
stack* readData(const char*);

void Feladat5(stack*);

#endif //PARCIALIS5_FELADAT5_H
