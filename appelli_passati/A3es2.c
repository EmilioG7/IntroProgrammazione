#include<stdio.h>

int succ_ite (int n)
{
    int an1=1;
    int an2=2;
    int tmp=1;
    if (n==1) return 2;
    for (int i=3; i<=n; i++)
    {
        if (an1%2==0)
        {
            tmp=an1;
            an1=(i-an1)*an2;
            an2=tmp;
        }
        else
        {
            tmp=an1;
            an1=(i+an2)*an1;
            an2=tmp;
        }
    }
    return(an1);
}

int succ_ric(int n)
{
    if (n==1) return 2;
    if (n==2) return 1;
    if (succ_ric(n-1)%2==0) return((n-succ_ric(n-1))*succ_ric(n-2));
    return((n+succ_ric(n-2))*succ_ric(n-1));
}

void main()
{
    printf(" sucessione in iterativa\n");
    for (int i=1; i<=10; i++)
    {
        printf("n = %d, a_n= %d\n", i, succ_ite(i));
    }
    printf(" sucessione in ricorsiva\n");
    for (int i=1; i<=10; i++)
    {
        printf("n = %d, a_n= %d\n", i, succ_ric(i));
    }
}