#include <stdio.h>
#include "source.h"

int main() {
    kozepVegzettseg* kozep;
    felsoVegzettseg* felso;
    char** vegzettsegNelkuli;
    int kozepNr, felsoNr, nelkulNr;
    if (!beolvasAlkalmazottak("be.txt", &kozep, &felso, &vegzettsegNelkuli, &kozepNr, &felsoNr, &nelkulNr))
        printf("NAGY A BAJ!");
    else
    {
        for (int i=0;i<nelkulNr;i++)
        {
            printf("%s", vegzettsegNelkuli[i]);
        }
    }
    return 0;
}
