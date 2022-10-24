#include <stdio.h>

double a_npA(int n, double p)
{
    double tmp=p;
    if (n>1)
        tmp=0.5*(a_npA(n-1, p)+(p/a_npA(n-1, p)));
    return (tmp);
}

double a_npB(int n, double p)
{
    double tmp=p;
    for (int i=2; i<=n; i++)
    {
        tmp=0.5*(tmp+(p/tmp));
    }
    return (tmp);
}

void main()
{
    int n;
    double p;
    printf("inserire n ");
    scanf("%d", &n);
    printf("inserire p ");
    scanf("%lf", &p);
    printf("il valore %d della sucessione A è %lf\n", n, a_npA( n, p));
    printf("il valore %d della sucessione B è %lf\n", n, a_npB( n, p));
}