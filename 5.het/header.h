//
// Created by user on 17/03/2021.
//

#ifndef INC_5_HET_HEADER_H
#define INC_5_HET_HEADER_H
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{

    int size;

    int *elements;

    int sp; //stack pointer - veremmutató

}STACK;

STACK Create(int); //létrehoz egy vermet

void Push(STACK*, int); //betesz a verem tetejére

int Pop(STACK*); //kiveszi a veremből a legfelső elemet

int Top(STACK); //megnézi a verem legfelső elemét

bool isEmpty(STACK); //ellenőrzi, hogy üres-e a verem

bool isFull(STACK); //ellenőrzi, hogy tele van-e a verem

void Destroy(STACK*); //felszabadít

void Print(STACK*); //kiírja a teljes verem tartalmát (segédfüggvény, nem tartozik az adatszerkezet definíciójához

STACK Union(STACK, STACK);
#endif //INC_5_HET_HEADER_H
