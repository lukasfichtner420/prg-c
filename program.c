#include <stdio.h>

int main(void)
{
    int pole[5] = {8,5,10,22,14};
    int Max = pole[0];
    int Min = pole[0];

    int i;
    for (i=1; i<5; i++)
    {
        if (Max < pole[i])
            Max = pole[i];
        if (Min > pole[i])
            Min = pole[i];
    }
    
    printf("\nMaximální číslo je: %d\n",Max);
    printf("\nMinimální číslo je: %d\n\n",Min);

    return 0;
}
 