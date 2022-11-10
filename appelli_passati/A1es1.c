#include <stdio.h>

int potenza (int n)
{
    if (n==0) return(1);
    return(2*potenza(n-1));
}

int s_n(int n, int i)
{
    if (i==1) return 1*potenza(n);
    return ((potenza(n)*i)+s_n(n, i-1));
}

void main ()
{
    int n;
    printf("insert n ");
    scanf("%d", &n);
    printf("s_n di %d = %d\n", n, s_n(n, n));
}