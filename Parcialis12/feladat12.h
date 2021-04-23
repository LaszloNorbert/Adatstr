//
// Created by user on 14/04/2021.
//

#ifndef PARCIALIS12_FELADAT12_H
#define PARCIALIS12_FELADAT12_H
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct{
    int year;
    int month;
    int day;
}Date;


typedef struct{
    int weight;
    Date expDate;
}Food;

typedef struct{

    int size;

    Food* elements;

    int sp;

}STACK;

STACK Create(int); //létrehoz egy vermet

STACK* CreateBoxes(int, int, int*);

void Push(STACK*, Food); //betesz a verem tetejére

Food Pop(STACK*); //kiveszi a veremből a legfelső elemet

Food Top(STACK); //megnézi a verem legfelső elemét

bool isEmpty(STACK); //ellenőrzi, hogy üres-e a verem

bool isFull(STACK); //ellenőrzi, hogy tele van-e a verem

void Destroy(STACK*); //felszabadít

void Print(STACK*);

Food* readFoods(const char*, int*, int*);

void FillBoxes(Food*, STACK**, int, int);

int cmp (const void*, const void*);

#endif //PARCIALIS12_FELADAT12_H
