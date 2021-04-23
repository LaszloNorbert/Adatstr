//
// Created by user on 03/03/2021.
//

#ifndef ADATSTR_SOURCE_H
#define ADATSTR_SOURCE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char nev[30];
    char liceumNev[30];
    double atlag;
}kozepVegzettseg;

typedef struct {
    char nev[30];
    char intezmenyNev[30];
    char karNev[30];
    double atlag;
}felsoVegzettseg;

bool allocateMemoryKozep(kozepVegzettseg**, int);
bool allocateMemoryFelso(felsoVegzettseg**, int);
bool allocateMemoryVegzettsegNelkul(char***, int);
bool beolvasAlkalmazottak(const char*, kozepVegzettseg**, felsoVegzettseg**, char***, int*, int*, int*);

#endif //ADATSTR_SOURCE_H
