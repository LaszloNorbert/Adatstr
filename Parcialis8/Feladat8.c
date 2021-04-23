//
// Created by user on 13/04/2021.
//

#include "Feladat8.h"

bool isValidCNP(char* CNP)
{
    if (strlen(CNP)!=13)//length
        return false;
    for (int i=0;i<13;i++)//is digit
    {
        if (!isdigit(CNP[i]))
            return false;
    }

    int validation[] = { 2, 7, 9, 1, 4, 6, 3, 5, 8, 2, 7, 9 };
    int cnpLength = 13;
    int sum = 0;
    int sex = CNP[0]-'0';

    for (int i = 0; i < cnpLength - 1; i++)
        sum += (CNP[i]-'0') * validation[i];

    if (CNP[12]-'0' != sum % 11)
        return false;
    if (sex <1 || sex > 8)
        return false;
    return true;
}

Student* readStudents(const char* fname, int* pn)
{
    FILE *f= fopen(fname, "rt");
    if (!f)
        exit(1);

    int n;
    fscanf(f, "%d", &n);
    Student* students;
    students=(Student*)malloc(sizeof(Student)*n);
    if (!students)
        exit(3);
    for (int i=0;i<n;i++)
    {
        students[i].CNP=(char*)malloc(sizeof(char)*14);
        if (!students[i].CNP)
            exit(5);

        char* line;
        line=(char*)malloc(sizeof(char)*20);
        if (!line)
            exit(2);

        fscanf(f, "%s", line);
        line[strcspn(line, "\n")] = 0;
        strcpy(students[i].CNP, line);
    }

    (*pn)=n;
    fclose(f);
    return students;
}

void setData(Student** students, int* n, int* invalidCNP)
{
    for (int i=0;i<(*n);i++)
    {
        if (isValidCNP((*students)[i].CNP))
        {
            (*students)[i].sex=(*students)[i].CNP[0]%2==0 ? 0 : 1;//set gender
            Date d= dateFromCNP((*students)[i].CNP);
            (*students)[i].birthDate.year=d.year;
            (*students)[i].birthDate.month=d.month;
            (*students)[i].birthDate.day=d.day;
        }
        else
        {
            (*students)[i]=(*students)[(*n)-1];
            (*invalidCNP)+=1;
            i--;
            (*n)--;
        }
    }
}

Date dateFromCNP(char* CNP)
{
    Date d;
    d.month=((CNP[3]-'0')*10)+CNP[4]-'0';
    d.day=((CNP[5]-'0')*10)+CNP[6]-'0';
    if (CNP[0]-'0'<3)
    {
        d.year=1900;
    }
    else if (CNP[0]-'0'< 5)
    {
        d.year=1800;
    }
    else
    {
        d.year=2000;
    }
    d.year+=((CNP[1]-'0')*10)+CNP[2]-'0';
    return d;

}
