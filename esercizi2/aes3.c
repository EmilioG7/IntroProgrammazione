#include <stdio.h>

void main()
{
    int a;
    int b;
    printf("valore a ");
    scanf("%d", &a);
    printf("valore b ");
    scanf("%d", &b);
    if(b<0)
        printf("%d è negativo\n", b);
    else
        printf("%d è positivo\n", b);
    if (a/2*2==a)
        printf("%d è pari\n", a);
    else   
        printf("%d è dispari\n", a);
    printf("somma = %d\n", a+b);
    if (b<0)
    {
        if (a<0)
            printf("(-a)+(-b) porta al massimo risultato che è %d\n", (-a)+(-b));
        else
            printf("(+a)+(-b) porta al massimo risultato che è %d\n", a+(-b));
    }
    else
    {
        if (a<0)
            printf("(-a)+(+b) porta al massimo risultato che è %d\n", (-a)+b);
        else
            printf("(+a)+(+b) porta al massimo risultato che è %d\n", a+b);            
    }
}