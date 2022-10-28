#include <stdio.h>

double s_n(int n)
{
    
    if (n==0) return (1.0);
    return (s_n(n-1)+1.0/((2*n+1)*(2*n+1)));
}

void main ()
{
    int a;
    printf("number a ");
    scanf("%d", &a);
    for (int i=1; i<a; i++)
        printf("%lf\n", s_n(i)*8);
}