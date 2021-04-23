//
// Created by user on 17/03/2021.
//

#ifndef INC_5_HETHAZI2_HEADER_H
#define INC_5_HETHAZI2_HEADER_H
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct{

    int size;

    char *elements;

    int sp; //stack pointer - veremmutató

}STACK;

STACK Create(int); //létrehoz egy vermet

void Push(STACK*, char); //betesz a verem tetejére

char Pop(STACK*); //kiveszi a veremből a legfelső elemet

char Top(STACK); //megnézi a verem legfelső elemét

bool isEmpty(STACK); //ellenőrzi, hogy üres-e a verem

bool isFull(STACK); //ellenőrzi, hogy tele van-e a verem

void Destroy(STACK*); //felszabadít

void Print(STACK*); //kiírja a teljes verem tartalmát (segédfüggvény, nem tartozik az adatszerkezet definíciójához

bool isPalindrome(STACK);
#endif //INC_5_HETHAZI2_HEADER_H
