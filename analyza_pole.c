#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int pole[10];
    int Soucet = 0;
    int i;

    srand(time(0));

    for(i = 0; i < 10; i++)
    {
        pole[i] = rand() % 100 +1;
    }

    int Max = pole[0];
    int Min = pole[0];
    int Prumer;
    int Prumer2;

    for (i = 0; i < 10; i++)
    {
        printf("pole[%d] = %d\n", i, pole[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (Max < pole[i])
            Max = pole[i];
        if (Min > pole[i])
            Min = pole[i];
            Soucet += pole[i];
    }
        printf("\n\n\nMaximum = %d" , Max);
        printf("\nMinimum = %d" , Min);
        printf("\nSoucet = %d" , Soucet);
        printf("\nPrumer = %2f" , Soucet / (float) 10 );
        printf("\nPrumer bez maximalni a minimalni hodnoty = %2f", (Soucet - Min - Max) / (float) 8 );


    return 0;
    }