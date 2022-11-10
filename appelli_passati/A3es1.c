#include<stdio.h>

int potenza(int b, int e)
{
    if (e==0) return 1;
    return (b*potenza(b, e-1));
}

int inverti(int n)
{
    int rev=0;
    while (n!=0)
    {
        rev = rev*10+(n%10);
        n=n/10;
    }
    return rev;
}

void main ()
{
    int n;
    printf(" valore ");
    scanf("%d", &n);
    printf("%d invertito = %d\n", n, inverti(n));
}