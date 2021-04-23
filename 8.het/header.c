//
// Created by user on 14/04/2021.
//

#include "header.h"


void printList(Node* first)
{
    Node* c=first;
    while (c!=NULL)
    {
        printf("%d ", c->info);
        c=c->next;
    }
}

Node* Create()
{
    Node* p;
    p=(Node*)malloc(sizeof(Node));
    p->next=NULL;
    p->info=NULL;
    return p;
}
bool isEmpty(Node* first)
{
    if (first==NULL)
        return true;
    return false;
}
void addLast(Node* first, int n)
{
    Node* new;
    new=Create();
    new->info=n;
    if (first==NULL)
        first=new;
    else
    {
        Node* p;
        p=Create();
        p=first;
        while (p->next!=NULL)
            p=p->next;
        p->next=new;
    }
}

void addFirst(Node** first, int n)
{
    Node* new;
    new=Create();
    new->info=n;
    new->next=(*first);
    (*first)=new;
}

int removeFirst(Node** first)
{
    int retval = -1;
    Node * next_node = NULL;

    if (*first == NULL) {
        return -1;
    }

    next_node = (*first)->next;
    retval = (*first)->info;
    free(*first);
    *first = next_node;

    return retval;
}

int removeIndex(Node** first, int n)
{
    int i = 0, retval=-1;
    Node* current = *first;
    Node* temp_node = NULL;

    if (n == 0) {
        return removeFirst(first);
    }

    for (i = 0; i < n-1; i++) {
        if (current->next == NULL) {
            return -1;
        }
        current = current->next;
    }

    temp_node = current->next;
    retval = temp_node->info;
    current->next = temp_node->next;
    free(temp_node);

    return retval;
}
