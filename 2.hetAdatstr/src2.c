//
// Created by user on 25/02/2021.
//

#include "header2.h"

void Feladat6Func(int i, int j, int k, int n, int noOfRuns)
{
    int x, muvSzam=0;
    double avgTime=0;
    time_t begin, end, elapsed;
    for (int t=0;t<noOfRuns;t++)
    {
        time(&begin);
        for( int i = n; i > 0; i /= 2 )
        {
            for( int j = 1; j < n; j *= 2 )
            {
                for( int k = 0; k < n; k += 2 )
                {
                    x=5;
                    muvSzam++;
                }
            }
        }
        time(&end);
        elapsed = end - begin;
        avgTime+=elapsed;
    }
    avgTime/=noOfRuns;
    muvSzam/=noOfRuns;
    printf("Time measured: %lf seconds.\n", avgTime);
    printf("Muveletek szama:%d\n", muvSzam);
}

void Feladat7Func(int i, int j, int k, int n, int noOfRuns)
{
    int x, muvSzam=0;
    double avgTime=0;
    time_t begin, end, elapsed;
    for (int t=0;t<noOfRuns;t++)
    {
        time(&begin);
        for( int i = n; i > 0; i-- )
        {
            for( int j = 1; j < n; j *= 2 )
            {
                for( int k = 0; k < j; k++ )

                {
                    x=5;
                    muvSzam++;
                }
            }
        }
        time(&end);
        elapsed = end - begin;
        avgTime+=elapsed;
    }
    avgTime/=noOfRuns;
    muvSzam/=noOfRuns;
    printf("Time measured: %lf seconds.\n", avgTime);
    printf("Muveletek szama:%d\n", muvSzam);
}

double Feladat4Func(int n)
{
    return (3*n+1)/2;
    //Legjobb eset n+1, legrosszabb 2n
    //(n+1+2n)/2 - atlag
}

void Feladat3Func()
{
    /*
     * A pakliban 4 szin van, ket kerdesből kiderül, hogy ez melyik.
     * Piros v zöld?
     * Ha igen, akkor pl. piros?
     * Ha nem, akkor Tök vagy makk.
     * Marad 8 lap (7-ász)
     * Innen bináris kereséssel 3 kérdésből megvan a lap.
     */
}
