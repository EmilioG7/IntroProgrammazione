#include <stdio.h>
#include <math.h>

int valprimo(int n)
{
    int primo=1, cap;
    cap=sqrt(n);
    for (int i=2; i<=cap; i++)
    {
        if ((n/i)*i==n)
        {
            primo=i;
            i=cap+1;
        }
    }
    return (primo);
}

void main()
{
    int k, n;
    printf("numero ");
    scanf("%d", &n);
    k=valprimo(n);
    if (k==1)
        printf("%d è un numero primo\n", n);
    else
        printf("%d non è primo, è divisibile per %d\n", n, k);
    k=0;
    for (int i=2; i<101; i++)
    {
        if(valprimo(i)==1)
          k=k+1;
    }
    printf("i numeri primi fra 1 e 100 sono %d\n", k);
}