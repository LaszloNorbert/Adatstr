//
// Created by user on 12/04/2021.
//

#ifndef PARCIALIS1_FELADAT1_2_H
#define PARCIALIS1_FELADAT1_2_H
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct{

    int size;

    int *elements;

    int sp; //stack pointer - veremmutató

}STACK;

typedef struct {
    int* elements;
    int* indexes;
    int nrOfElements;
}ordStruct;

STACK Create(int); //létrehoz egy vermet

void Push(STACK*, int); //betesz a verem tetejére

int Pop(STACK*); //kiveszi a veremből a legfelső elemet

int Top(STACK); //megnézi a verem legfelső elemét

bool isEmpty(STACK); //ellenőrzi, hogy üres-e a verem


bool isFull(STACK); //ellenőrzi, hogy tele van-e a verem

void Destroy(STACK*); //felszabadít

void FillStack(STACK*, int);

void Print(STACK*);

void PrintStruct(ordStruct);

void Insert(ordStruct*, int, int);

ordStruct CreateStruct(STACK*);

void Feladat1(ordStruct);


#endif //PARCIALIS1_FELADAT1_2_H
