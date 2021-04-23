#include "Feladat8.h"

int main() {
    Student* students;
    int n, invalidNr=0, totalStudents;
    students= readStudents("Feladat8.txt", &n);
    totalStudents=n;
    setData(&students, &n, &invalidNr);
    for (int i=0;i<n;i++)
    {
        printf("%s, ", students[i].CNP);
        printf("%d-%d-%d, sex=%d\n", students[i].birthDate.year, students[i].birthDate.month,
               students[i].birthDate.day, students[i].sex);
    }
    double res=invalidNr*100/totalStudents;
    printf("\n%.2lf%% of students gave invalid CNP!\n", res);
    return 0;
}
