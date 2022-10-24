#include <stdio.h>

int potenza(int b, int e)
{
    int tmp=1;
    for (int i=0; i<e; i++)
    {
        tmp = tmp * b;
    }
    return(tmp);
}

int inbase2(int n)
{
    int i=1;
    int ris=0;
    while (n > 0)
    {
        int k=n/potenza(10, i);
        k=k*potenza(10, i);
        if (k != n)
        {
            ris=ris+potenza(2, i-1);
            n=n-potenza(10, i-1);
        }
        i=i+1;
    }
    return(ris);
}

void main()
{
    int n, x;
    printf("numero in binario ");
    scanf("%d", &n);
    x=inbase2(n);
    printf("%d in decimale è %d\n", n, x);
}