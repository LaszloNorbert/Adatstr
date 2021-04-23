//
// Created by user on 13/04/2021.
//

#ifndef PARCIALIS8_FELADAT8_H
#define PARCIALIS8_FELADAT8_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    int year;
    int month;
    int day;
}Date;

typedef struct {
    int sex;
    Date birthDate;
    char* CNP;
}Student;

bool isValidCNP(char*);
Student* readStudents(const char*, int*);
void setData(Student**, int*, int*);
Date dateFromCNP(char*);

#endif //PARCIALIS8_FELADAT8_H
