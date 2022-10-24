#include <stdio.h>


int fat(int a)
{
    int tmp=a;
    for (int i=1; i<a; i++)
    {
        tmp=tmp*i;
    }
    return(tmp);
}

void main()
{
    int n;
    int k;
    printf("inserire n ");
    scanf("%d", &n);
    printf("inserire k ");
    scanf("%d", &k);
    if(n<k)
    {
        printf("coeficiente binomianle di %d su %d è 0\n", n, k);
    }
    else
        printf("coeficiente binomianle di %d su %d è %d\n", n, k, fat(n)/(fat(k)*fat(n-k)));
}
