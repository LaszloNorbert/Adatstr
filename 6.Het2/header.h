//
// Created by user on 24/03/2021.
//

#ifndef INC_6_HET2_HEADER_H
#define INC_6_HET2_HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct stack{
    int info;
    struct stack *next;
}stack;

void create(stack**);
bool push(stack**, int);

int top(stack *);
int pop(stack **);
bool isEmpty(stack *);
void printStack(stack *);
#endif //INC_6_HET2_HEADER_H
