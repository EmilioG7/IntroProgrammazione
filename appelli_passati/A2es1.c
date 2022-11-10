#include <stdio.h>

float succ (int n)
{
    float a1, a0, tmp;
    a0=1;
    a1=2;
    if(n==0) return(a0);
    for (int i=2; i<=n; i++)
    {
        if (i%2==0)
        {
            tmp=a1;
            a1=(i+3*(a0-2))/tmp;
            a0=tmp;
        }
        else
        {
            tmp=a1;
            a1=(i+3*(tmp-2))/a0;
            a0=tmp;
        }
    }
    return (a1); 
}

void main()
{
    int n;
    printf("numero n ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
        printf("sucessione al passaggio %d = %f\n", i, succ(i));
}