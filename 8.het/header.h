//
// Created by user on 14/04/2021.
//

#ifndef INC_8_HET_HEADER_H
#define INC_8_HET_HEADER_H
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    int info;
    struct Node* next;
}Node;

void printList(Node*);
Node* Create();
bool isEmpty(Node*);
void addLast(Node*, int);
void addFirst(Node**, int);
int removeFirst(Node**);
int removeLast(Node*);
int removeIndex(Node**, int);

#endif //INC_8_HET_HEADER_H
