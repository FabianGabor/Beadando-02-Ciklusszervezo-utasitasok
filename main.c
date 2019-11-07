#include <stdio.h>

void elso_100_osszeg()
{
    int sum = 0;
    for (int i=1;i<=100;i++)
    {
        printf("%d ", i);
        sum+=i;
    }
    printf("\nSum: %d\n", sum);
}

int main()
{
    // 1. Írassuk ki az első 100 pozitív egész számot, majd írassuk ki azok összegét!
    elso_100_osszeg();

    return 0;
}
