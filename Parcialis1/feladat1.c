//
// Created by user on 12/04/2021.
//

#include "feladat1.h"

bool isFull(STACK s)
{
    return (s.sp==s.size);
}

bool isEmpty(STACK s)
{
    return (s.sp==0);
}

int Pop(STACK* s)
{
    int r=(*s).elements[(*s).sp-1];
    (*s).sp--;
    return r;
}

void Push(STACK* s, int n)
{
    if (!isFull((*s)))
    {
        (*s).elements[(*s).sp]=n;
        (*s).sp++;
    }
}

void Destroy(STACK* s)
{
    free((*s).elements);
    free((s));
}

int Top(STACK s)
{
    return s.elements[s.sp-1];
}

void Print(STACK* s)
{
    int* temp=(int*)malloc(sizeof(int)*(*s).sp);
    if (!temp)
        exit(1);
    int size=(*s).sp;
    while (!isEmpty((*s)))
    {
        printf("%d ", Top((*s)));
        temp[(*s).sp-1]=Pop(&(*s));
    }
    for (int i=0;i<size;i++)
    {
        Push(&(*s), temp[i]);
    }
    printf("\n");
}

STACK Create(int s)
{
    STACK res;
    res.size=s;
    res.sp=0;
    res.elements=(int*)malloc(sizeof(int)*s);
    return res;
}

void FillStack(STACK* s, int sumValue)
{
    srand(time(0));
    int actSum=0;
    while (actSum<sumValue)//<=, maskepp vegtelen ciklus lesz legtobb esetben
    {
        int temp=rand()%10;//%10, hogy ne fusson vegtelensegig
        actSum+=temp;
        Push(&(*s), temp);
    }
}

ordStruct CreateStruct(STACK* s)
{
    ordStruct res;
    res.nrOfElements=0;
    res.elements=(int*)malloc(sizeof(int)*(*s).sp);
    res.indexes=(int*)malloc(sizeof(int)*(*s).sp);
    int i=0;
    while (!isEmpty((*s)))
    {
        Insert(&res, Pop(&(*s)), i++);
    }
    return res;
}

void Insert(ordStruct* s, int n, int index)
{
    int i=(*s).nrOfElements-1;
    while ((*s).elements[i]>n && i>=0)
    {
        (*s).elements[i+1]=(*s).elements[i];
        (*s).indexes[i+1]=(*s).indexes[i];
        i--;
    }
    (*s).elements[i+1]=n;
    (*s).indexes[i+1]=index;
    (*s).nrOfElements+=1;
}

void PrintStruct(ordStruct s)
{
    for (int i=0;i<s.nrOfElements;i++)
    {
        printf("%d ", s.elements[i]);
    }
    printf("\n");
    for (int i=0;i<s.nrOfElements;i++)
    {
        printf("%d ", s.indexes[i]);
    }
    printf("\n");
}

void Feladat1(ordStruct s) {
    int res = 0;
    for (int i = 0; i < s.nrOfElements; i++) {
        res += abs(s.indexes[i] - i);
    }
    printf("Megoldas: %d\n", res);
}
