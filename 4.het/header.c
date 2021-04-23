//
// Created by user on 10/03/2021.
//

#include "header.h"

int sizeOfSet(set s)
{
    return s.size;
}

void createSet(set* s)
{
    (*s).size=0;
    (*s).elements=(int*)malloc(sizeof(int)*1);
    if (!(*s).elements)
        printf("MALLOC ERROR\n");
}

void freeSet(set* s)
{
    (*s).elements=NULL;
    (*s).size=0;
}

bool isEmptySet(set s)
{
    if (sizeOfSet(s)==0)
        return true;
    return false;
}

void insertInSet(set* s, int num)
{
    if (isEmptySet((*s)))
    {
        (*s).size++;
        (*s).elements=(int*)realloc((*s).elements, sizeof(int));
        (*s).elements[0]=num;
        return;
    }

    if (findInSet((*s), num)==-1)
    {
        (*s).size++;
        (*s).elements=(int*)realloc((*s).elements, sizeof(int)*(*s).size);
        int i=0;
        while ((*s).elements[i]<num && i<(*s).size-1) i++;
        for (int j=(*s).size-1;j>i+1;j--)
        {
            (*s).elements[j]=(*s).elements[j-1];
        }
        (*s).elements[i]=num;
    }

}

void erase(set* s, int n)
{
    int index=findInSet((*s), n);
    if (index!=-1)
    {
        eraseFromPos(&(*s), index);
    }
}

void eraseFromPos(set* s, int pos)
{
    for (int i=pos;i<(*s).size-1;i++)
    {
        (*s).elements[i]=(*s).elements[i+1];
    }
    (*s).size--;
    (*s).elements=(int*)realloc((*s).elements, sizeof(int)*(*s).size);
}

void clearSet(set* s)
{
    (*s).elements=NULL;
    (*s).size=0;
}

int findInSet(set s, int num)
{
    int l=0;
    int r=sizeOfSet(s);
    while (l<=r)
    {
        int m=(l+r)/2;
        if (s.elements[m]==num)
            return m;
        if (s.elements[m]<num)
            l=m+1;
        else
        {
            r=m-1;
        }
    }
    return -1;
}

int lowerBound(set s, int num)
{
    if (isEmptySet(s))
    {
        printf("Set is empty!\n");
        return NULL;
    }
    int l=0;
    int m;
    int r=sizeOfSet(s);
    while (l<=r)
    {
        m=(l+r)/2;
        if (s.elements[m]==num)
            return num;
        if (s.elements[m]<num)
            l=m+1;
        else
        {
            r=m-1;
        }
    }
    if (s.elements[m-1]<num && m-1>=0)
        return s.elements[m-1];
    if (s.elements[m]<num)
        return s.elements[m];
    if (s.elements[m+1]<num && m+1<sizeOfSet(s))
        return s.elements[m+1];
    printf("Nem talalhato ilyen elem!\n");
    return NULL;
}

int upperBound(set s, int num)
{
    if (isEmptySet(s))
    {
        printf("Set is empty!\n");
        return NULL;
    }
    int l=0;
    int m;
    int r=sizeOfSet(s);
    while (l<=r)
    {
        m=(l+r)/2;
        if (s.elements[m]==num)
            return num;
        if (s.elements[m]<num)
            l=m+1;
        else
        {
            r=m-1;
        }
    }
    if (s.elements[m+1]>num && m+1<sizeOfSet(s))
        return s.elements[m+1];
    if (s.elements[m]>num)
        return s.elements[m];
    if (s.elements[m-1]>num && m-1>=0)
        return s.elements[m-1];
    printf("Nem talalhato ilyen elem!\n");
    return NULL;
}

void printSet(set s)
{
    for (int i=0;i<s.size;i++)
    {
        printf("%d ", s.elements[i]);
    }
    printf("\n");
}

set setUnion(set set1, set set2)
{
    int ai=0, bi=0;
    set set3;
    createSet(&set3);
    while (ai<sizeOfSet(set1) && bi<sizeOfSet(set2))
    {
        if (set1.elements[ai]<set2.elements[bi])
        {
            insertInSet(&set3, set1.elements[ai]);
            ai++;
        }
        else
        {
            insertInSet(&set3, set2.elements[bi]);
            bi++;
        }
    }

    while (ai<sizeOfSet(set1))
    {
        insertInSet(&set3, set1.elements[ai]);
        ai++;
    }
    while (bi<sizeOfSet(set2))
    {
        insertInSet(&set3, set2.elements[bi]);
        bi++;
    }
    return set3;
}

set setEngrave(set set1, set set2)
{
    set set3;
    createSet(&set3);
    for (int i=0;i<sizeOfSet(set1);i++)
    {
        if (findInSet(set2, set1.elements[i])!=-1)
        {
            insertInSet(&set3, set1.elements[i]);
        }
    }
    return set3;
}

set setSubstract(set set1, set set2)
{
    for (int i=0;i<sizeOfSet(set1);i++)
    {
        if (findInSet(set2, set1.elements[i])!=-1)
        {
            erase(&set1, set1.elements[i]);
            i--;
        }
    }
    return set1;
}

void subsetsOfSet(set s)
{
    bool* bArray;
    int n=sizeOfSet(s);
    bArray=(bool*)calloc(n, sizeof(bool));
    for (int i=0;i<n*n;i++)
    {
        incrementBinary(bArray, n);
        for (int j=0;j<n;j++)
        {
            if (bArray[j])
            {
                printf("%d ", s.elements[j]);
            }
        }
        printf("\n");
    }
}

void incrementBinary(bool* bArray, int size)
{
    bool carry=true;
    for (int i=size-1;i>=0;i--)
    {
        if (carry)
        {
            if (bArray[i]==false)
            {
                bArray[i]=true;
                carry=false;
            }
            else
            {
                bArray[i]=false;
                carry=true;
            }
        }
        else
        {
            break;
        }
    }
}