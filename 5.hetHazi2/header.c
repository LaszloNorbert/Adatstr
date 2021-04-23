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

char Pop(STACK* s)
{
    char r=(*s).elements[(*s).sp-1];
    (*s).sp--;
    return r;
}

void Push(STACK* s, char n)
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

char Top(STACK s)
{
    return s.elements[s.sp-1];
}

void Print(STACK* s)
{
    char * temp=(char *)malloc(sizeof(char )*(*s).sp);
    if (!temp)
        exit(1);
    int size=(*s).sp;
    while (!isEmpty((*s)))
    {
        printf("%c ", Top((*s)));
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
    res.elements=(char*)malloc(sizeof(char)*s);
    return res;
}

bool isPalindrome(STACK s)
{
    char* temp;
    int l=0, r=s.sp-1;
    temp=(char*)malloc(sizeof(char)*s.size);
    while (!isEmpty(s))
    {
        temp[s.sp-1]=Pop(&s);
    }
    while (l<r)
    {
        if (temp[l]!=temp[r])
            return false;
        l++;
        r--;
    }
    return true;
}

