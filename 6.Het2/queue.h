//
// Created by user on 24/03/2021.
//

#ifndef INC_6_HET2_QUEUE_H
#define INC_6_HET2_QUEUE_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

typedef struct QNode{
    int info;
    struct QNode* next;
}QNode;

QNode* createQ();

int topQ();
int delete(QNode**);
bool isEmptyQ(QNode*);
void printQueue(QNode*);
void insert(QNode*, int);
#endif //INC_6_HET2_QUEUE_H
