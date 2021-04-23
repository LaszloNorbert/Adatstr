//
// Created by user on 14/04/2021.
//

#ifndef PARCIALIS7_FELADAT7_H
#define PARCIALIS7_FELADAT7_H
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char county[2];
    int number[2];
    char ID[3];
}Plate;

typedef struct {
    Plate* plates;
    int nrOfPlates;
}Database;
#endif //PARCIALIS7_FELADAT7_H
