//
// Created by user on 17/03/2021.
//

#include "header.h"

bool isFull(STACK s)
{
    if (s.sp==s.size) return 1;
    return 0;
}

bool isEmpty(STACK s)
{
    if (s.sp==0) return true;
    return false;
}

int Pop(STACK* s)
{
    int r=(*s).elements[(*s).sp-1];
    (*s).sp--;
    return r;
}

void Push(STACK* s, int n)
{
    if (!isFull(*s))
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
}

STACK Create(int s)
{
    STACK res;
    res.size=s;
    res.sp=0;
    res.elements=(int*)malloc(sizeof(int)*s);
    return res;
}

STACK Union(STACK s1, STACK s2)
{
    STACK res;
    int size1=s1.size;
    int size2=s2.size;
    res.size=s1.size+s2.size;
    res.sp=0;
    res.elements=(int*)malloc(sizeof(int)*res.size);
    int* temp;
    int* temp2;
    temp=(int*)malloc(sizeof(int)*s1.size);
    temp2=(int*)malloc(sizeof(int)*s2.size);
    while (!isEmpty(s1))
    {
        temp[s1.sp-1]=Pop(&s1);
    }
    while (!isEmpty(s2))
    {
        temp2[s2.sp-1]=Pop(&s2);
    }
    int ai=0, bi=0;
    while (ai<size1 && bi<size2)
    {
        if (temp[ai]<temp2[bi])
        {
            Push(&res, temp[ai]);
            ai++;
        }
        else
        {
            Push(&res, temp2[bi]);
            bi++;
        }
    }

    while (ai<size1)
    {
        Push(&res, temp[ai]);
        ai++;
    }

    while (bi<size2)
    {
        Push(&res, temp2[bi]);
        bi++;
    }
    return res;
}