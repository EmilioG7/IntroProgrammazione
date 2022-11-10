#include <stdio.h>

int potenza(int b, int e)
{
    if (e==0) return(1);
    return (b*potenza(b, e-1));
}

int dimN(int n)
{
    int tmp=1;
    while (n>0)
    {
        n=(n/potenza(10, tmp))*potenza(10, tmp);
        tmp = tmp +1;
    }
    return(tmp-1);
}

int inverti(int n)
{
    int n2=0;
    for (int i=1; i<=dimN(n); i++)
    {
        n2=n2+((n%potenza(10, i))/potenza(10, 2*(i-1)))*potenza(10, dimN(n));
        n=(n/potenza(10, i))*potenza(10, i);
    }
    return(n2);
}

void main()
{
    int n, a = 0;
    printf("numero n ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++)
    {
        a=a+(i+1)*potenza(10, i);
    printf("%d invertito è %d\n", a, inverti(a));
    }
}