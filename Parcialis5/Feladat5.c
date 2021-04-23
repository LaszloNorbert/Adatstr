//
// Created by user on 13/04/2021.
//

#include "Feladat5.h"

void create(stack** s)
{
    (*s)=(stack*)malloc(1*sizeof(stack));
    if ((*s)==0)
        exit(1);

    (*s)->next=NULL;
    (*s)->date.year=-1;
    (*s)->date.month=-1;
    (*s)->date.day=-1;
}

bool push(stack** myStack, Date data)
{
    struct stack* newElement;
    create(&newElement);
    newElement->date.year=data.year;
    newElement->date.month=data.month;
    newElement->date.day=data.day;
    newElement->next=(*myStack);
    (*myStack)=newElement;
    return true;
}

Date top(stack* topPtr)
{
    Date d= {-1, -1 ,-1};
    if (!isEmpty(&(*topPtr)))
        return (*topPtr).date;
    printf("STACK IS EMPTY!\n");
    return d;
}

bool isEmpty(stack* myStack)
{
    if ((*myStack).date.year==-1 && (*myStack).next==NULL)
        return true;
    return false;
}

Date pop(stack** topPtr)
{
    Date auxDate={-1, -1, -1};
    if (!isEmpty((*topPtr)))
    {
        stack* aux;
        aux=(*topPtr);
        (*topPtr)=aux->next;
        auxDate.year=aux->date.year;
        auxDate.month=aux->date.month;
        auxDate.day=aux->date.day;
        free(aux);
        return auxDate;
    }
    printf("STACK IS EMPTY!\n");
    return auxDate;
}

void printStack(stack *topPtr)
{
    stack* temp;
    temp=topPtr;
    while (temp->next!=NULL)
    {
        printf("%d-%d-%d\n", temp->date.year, temp->date.month, temp->date.day);
        temp=temp->next;
    }
}

stack* readData(const char* fname)
{
    FILE *f= fopen(fname, "rt");
    if (!f)
        exit(1);
    stack* myStack;
    create(&myStack);

    int n=0;//Number of invalid inputs

    while (n<5)//Read until 5 invalid inputs found
    {
        Date d;
        if (fscanf(f,"%d%d%d", &d.year, &d.month, &d.day) != 3)//EOF
        {
            break;
        }
        if (d.year<2000 && d.year > 1899)
        {
            push(&myStack, d);
        }
        else
        {
            n++;
        }
    }

    fclose(f);
    return myStack;

}

void Feladat5(stack* topPtr)
{
    int statisztika[]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    stack* temp;
    temp=topPtr;
    while (temp->next!=NULL)
    {
        statisztika[(temp->date.year%100)/10]++;
        temp=temp->next;
    }
    printf("5.Feladat: ");
    for (int i=0;i<10;i++)
    {
        printf("%d ", statisztika[i]);
    }
}