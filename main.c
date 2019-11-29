/*
 * https://github.com/FabianGabor/Beadando-02-Ciklusszervezo-utasitasok
 */

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
    char str[16];
    char *ptr;
    long num;

    do
    {
        printf("Pozitiv egesz szam: ");
        //fgets(str, 16, stdin);
        scanf("%s", &str);
        num = strtol(str, &ptr, 10);
        printf("\t***** DEBUG *****\n");
        printf("\tA megadott szam                %d\n", num);
        printf("\tString resz:                  |%s|\n", ptr);
        printf("\tASCII kodja az elso stringnek: %d\n", *ptr);
    }
    //while (*ptr!=10); // fgets ASCII LF / NEW LINE
    while ((*ptr!=0) || (num<0)); // scanf ASCII LF / NEW LINE

    return num;
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

void kamat()
{
    double toke,kamat;
    int honap;
    printf("Toke: ");
    scanf("%lf", &toke);
    printf("Kamat (eves): ");
    scanf("%lf", &kamat);
    printf("Befektetes ideje (honap): ");
    scanf("%d", &honap);
    printf("\nToke \t0/%d \thonap: \t%lf\n", honap,toke);

    double toke_tmp = toke;
    for (int i=1; i<=honap; i++) {
        toke_tmp=toke_tmp * (1+(kamat/100/12));
        printf("Toke \t%d/%d \thonap: \t%lf\n", i,honap,toke_tmp);
    }
}

int main()
{
    // 1. Írassuk ki az első 100 pozitív egész számot, majd írassuk ki azok összegét!
    //elso_100_osszeg();

    // 2. Kérjünk be egy pozitív számot! Rossz adat esetében ismételjük meg a beolvasást!
    in_pos_int();

    // 3. Folytatás: olvassunk be egy karaktert is, majd írassuk ki annyiszor, mint a beolvasott szám!
    //in_char(in_pos_int());

    // 4. Készíts programot kamatszámításhoz, ciklussal! Kérd be a tőke mennyiségét, a kamat éves értékét (%), illetve a befektetés idejét hónapokban!
    //    Írd ki hónapról hónapra, hogyan gyarapodik a befektetés!
    //kamat();

    return 0;
}
