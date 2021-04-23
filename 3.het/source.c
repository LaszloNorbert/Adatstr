//
// Created by user on 03/03/2021.
//

#include "source.h"

bool allocateMemoryKozep(kozepVegzettseg** alkalmazottKozepvegzettseg, int alkalmazottakSzama)
{
    *(alkalmazottKozepvegzettseg)=(kozepVegzettseg*)malloc(sizeof(kozepVegzettseg)*alkalmazottakSzama);
    if (!*(alkalmazottKozepvegzettseg))
        return false;
    return true;
}

bool allocateMemoryFelso(felsoVegzettseg** alkalmazottFelsovegzettseg, int alkalmazottakSzama)
{
    *(alkalmazottFelsovegzettseg)=(felsoVegzettseg*)malloc(sizeof(felsoVegzettseg)*alkalmazottakSzama);
    if (!*(alkalmazottFelsovegzettseg))
        return false;
    return true;
}

bool allocateMemoryVegzettsegNelkul(char*** nelkul, int alkalmazottakSzama)
{
    *(nelkul)=(char**)malloc(sizeof(char*)*alkalmazottakSzama);
    if (!*(nelkul))
        return false;
    for (int i=0;i<alkalmazottakSzama;i++)
    {
        *(nelkul)[i]=(char*)malloc(sizeof(char)*30);
        if (!*(nelkul)[i])
            return false;
    }
    return true;
}

bool beolvasAlkalmazottak(const char* fnev, kozepVegzettseg** kozep, felsoVegzettseg** felso,
                          char*** nelkul, int* pKozepNr, int* pFelsoNr, int* pNelkulNr)
{
    int felsoNr, kozepNr, nelkulNr, total;
    FILE* f=fopen(fnev, "rt");
    if (!f)
        return false;
    fscanf("%d", &total);
    if (!allocateMemoryKozep(&(*kozep), total))
         return false;
    if (!allocateMemoryFelso(&(*felso), total))
        return false;
    if (!allocateMemoryVegzettsegNelkul(&(*nelkul), total))
        return false;

    char vegzettseg[30];
    for (int i=0;i<total;i++)
    {
        fscanf(f, "%s", vegzettseg);
        if (strcmp(vegzettseg, "Kozep")==0)
        {
            fscanf(f, "%s", (*kozep)[kozepNr].nev);
            fscanf(f, "%s", (*kozep)[kozepNr].liceumNev);
            fscanf(f, "%lf", (*kozep)[kozepNr].atlag);
            kozepNr++;
        }
        else if (strcmp(vegzettseg, "Felso")==0)
        {
            fscanf(f, "%s", (*felso)[felsoNr].nev);
            fscanf(f, "%s", (*felso)[felsoNr].intezmenyNev);
            fscanf(f, "%s", (*felso)[felsoNr].karNev);
            fscanf(f, "%lf", (*felso)[felsoNr].atlag);
            felsoNr++;
        }
        else if (strcmp(vegzettseg, "Nelkul")==0)
        {
            fscanf(f, "%s", (*nelkul)[nelkulNr]);
            nelkulNr++;
        }
    }
    (*felso)=(felsoVegzettseg*)realloc((*felso), felsoNr);
    (*kozep)=(kozepVegzettseg*)realloc((*kozep), kozepNr);
    (*nelkul)=(char**)realloc((*nelkul), nelkulNr);
    *pKozepNr=kozepNr;
    *pFelsoNr=felsoNr;
    *pNelkulNr=nelkulNr;

    return true;
}