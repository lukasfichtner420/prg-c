#include <stdio.h>
#define vyska 8 // Zde se napíše Výška na pole
#define sirka 10 // Zde se napíše Šířka na pole

//Tenhle ten program vypisuje na šířku a výšku krystály, jenom se musí zapsat číslo do #define.
int main()
{
    int pole[vyska][sirka];
    int g, k;
    for(g = 0; g < vyska; g++)
    for(k = 0; k < sirka; k++)
        pole[g][k] = 0;
    for(g = 0; g < vyska; g++)
    {
        for(k = 0; k < sirka; k++)
        printf("♦ ", pole[g][k]);
        printf("\n");
    }
    return 0;
}