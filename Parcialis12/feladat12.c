//
// Created by user on 14/04/2021.
//

#include "feladat12.h"

bool isFull(STACK s)
{
    return (s.sp==s.size);
}

bool isEmpty(STACK s)
{
    return (s.sp==0);
}

Food Pop(STACK* s)
{
    Food r=(*s).elements[(*s).sp-1];
    (*s).sp--;
    return r;
}

void Push(STACK* s, Food n)
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

Food Top(STACK s)
{
    return s.elements[s.sp-1];
}

void Print(STACK* s)
{
    Food* temp=(Food*)malloc(sizeof(Food)*(*s).sp);
    if (!temp)
        exit(1);
    int size=(*s).sp;
    while (!isEmpty((*s)))
    {
        Food d=Top((*s));
        printf("Weight:%d, Exp.date: %d-%d-%d\n", d.weight, d.expDate.year, d.expDate.month, d.expDate.day);
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
    res.elements=(Food*)malloc(sizeof(Food)*s);
    return res;
}


Food* readFoods(const char* fname, int* pfoodNr, int *pn)
{
    FILE* f= fopen(fname, "rt");
    if (!f)
        exit(2);

    int n, foodNr;
    fscanf(f, "%d%d", &foodNr, &n);
    Food* foods;
    foods=(Food*)malloc(sizeof(Food)*foodNr);

    for (int i=0;i<foodNr;i++)
    {
        Food temp;
        fscanf(f, "%d%d%d%d", &temp.weight, &temp.expDate.year, &temp.expDate.month, &temp.expDate.day);
        foods[i]=temp;
    }

    fclose(f);
    *pfoodNr=foodNr;
    *pn=n;
    return foods;
}

STACK* CreateBoxes(int n, int foodNr, int* boxNr)
{
    int temp= (foodNr%n==0 ? foodNr/n : (foodNr/n)+1);
    STACK* stacks;
    stacks=(STACK*)malloc(sizeof(STACK)*temp);
    for (int i=0;i<temp;i++)
    {
        STACK stack;
        stack.sp=0;
        if (i==temp-1 && (foodNr%n)!=0)
        {
            stack.size=foodNr%n;
            stack.elements=(Food*)malloc(sizeof(Food)*(foodNr%n));
        }
        else
        {
            stack.size=n;
            stack.elements=(Food*)malloc(sizeof(Food)*n);
        }
        stacks[i]=stack;
    }
    *boxNr=temp;
    return stacks;
}

void FillBoxes(Food* foods, STACK** boxes, int foodNr, int n)
{
    int boxIndex=0;
    for (int i=0;i<foodNr;i++)
    {
        Push(&(*boxes)[boxIndex], foods[i]);
        if ((i+1)%n==0)
            boxIndex++;
    }
}

int cmp(const void *A, const void *B)
{
    const Food *a=(Food*)A, *b=(Food*)B;
    if (a->weight==b->weight)
    {
        if (a->expDate.year==b->expDate.year)
        {
            if (a->expDate.month==b->expDate.month)
            {
                return a->expDate.day > b->expDate.day ? -1 : 1;
            }
            return a->expDate.month > b->expDate.month ? -1 : 1;
        }
        return a->expDate.year > b->expDate.year ? -1 : 1;
    }
    return a->weight > b->weight ? -1 : 1;
}