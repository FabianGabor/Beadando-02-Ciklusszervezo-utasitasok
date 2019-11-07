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

int in_pos_int()
{
    int in;
    do
    {
        printf("Pozitiv egesz szam: ");
        scanf("%d", &in);
    }
    while (in<0);
    return in;
}

void in_char(int n)
{
    char c;
    printf("Karakter: ");
    scanf(" %c",&c);
    getchar();

    for (int i=0; i<n; i++)
        printf("%c", c);
    printf("\n");
}

int main()
{
    // 1. Írassuk ki az első 100 pozitív egész számot, majd írassuk ki azok összegét!
    elso_100_osszeg();

    // 2. Kérjünk be egy pozitív számot! Rossz adat esetében ismételjük meg a beolvasást!
    //in_pos_int();

    // 3. Folytatás: olvassunk be egy karaktert is, majd írassuk ki annyiszor, mint a beolvasott szám!
    in_char(in_pos_int());

    return 0;
}
