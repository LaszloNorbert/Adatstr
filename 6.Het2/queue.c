//
// Created by user on 24/03/2021.
//

#include "queue.h"

QNode* createQ()
{
    QNode* newElement;
    newElement=(QNode*)malloc(1*sizeof(QNode));
    newElement->next=NULL;
    return newElement;
}

int topQ(QNode* first, QNode* last)
{
    if (!isEmptyQ(first))
        return last->info;
    printf("QUEUE IS EMPTY!\n");
    return INT_MIN;
}

int delete(QNode** first)
{
    QNode* auxNode;
    if (!isEmptyQ((*first)))
    {
        auxNode=(*first);
        int auxinfo=(*first)->info;
        (*first)=(*first)->next;
        free(auxNode);
        return auxinfo;
    }
    else return INT_MIN;
}

bool isEmptyQ(QNode* first)
{
    if (first==NULL)
        return true;
    return false;
}

void printQueue(QNode* first)
{
    while (first != NULL)
    {
        printf(" %d ", first->info);
        first = first->next;
    }
}

void insert(QNode* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("Last node can not be null!\n");
        return;
    }

    QNode* new_node =(QNode*) malloc(sizeof(QNode));

    new_node->info  = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;
}