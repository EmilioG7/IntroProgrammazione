#include<stdio.h>

int sum_cifre(int n)
{
    if (n/10==0) return (n);
    return (n%10+sum_cifre(n/10));
}

void main()
{
    int n;
    printf("numero n ");
    scanf("%d", &n);
    printf("la somma delle cifre di %d è %d\n", n, sum_cifre(n));
}