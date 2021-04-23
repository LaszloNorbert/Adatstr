//
// Created by user on 24/03/2021.
//

#include "header.h"

void create(stack** s)
{
    (*s)=(stack*)malloc(1*sizeof(stack));
    if ((*s)==0)
        exit(1);

    (*s)->next=NULL;
    (*s)->info=NULL;
}

bool push(stack** myStack, int data)
{
    stack* newElement;
    create(&newElement);
    newElement->info=data;
    newElement->next=(*myStack);
    (*myStack)=newElement;
    return true;
}

int top(stack* topPtr)
{
    if (!isEmpty(topPtr))
        return topPtr->info;
    printf("STACK IS EMPTY!\n");
    return NULL;
}

bool isEmpty(stack* myStack)
{
    if (myStack->info==NULL && myStack->next==NULL)
        return true;
    return false;
}

int pop(stack** topPtr)
{
    if (!isEmpty((*topPtr)))
    {
        stack* aux;
        int auxinfo;
        aux=*topPtr;
        *topPtr=aux->next;
        auxinfo=aux->info;
        free(aux);
        return auxinfo;
    }
    printf("STACK IS EMPTY!\n");
    return NULL;
}

void printStack(stack *topPtr)
{
    stack* temp;
    temp=topPtr;
    while (temp->next!=NULL)
    {
        printf("%d ", temp->info);
        temp=temp->next;
    }
}
