#include <stdio.h>

int main()
{
    int x;
    printf("valore ");
    scanf("%d", &x);
    if (x<0)
    {
        printf("%d è negativo\n", x);
        printf("valore assoluto: %d", -x);
    }
    else
    {
        printf("%d è positivo\n", x);
        printf("valore assoluto: %d\n", x);
    }
}