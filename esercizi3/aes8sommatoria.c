#include <stdio.h>

double sommatoriaA(int n){
    double tmp=0;
    if (n>=0)
    {
        double x=2*n+1;
        x=1/(x*x);
        tmp=x+sommatoriaA(n-1);
    }
    return (tmp);
}

double sommatoriaB(int n)
{
    double tmp=0;
    for (int k=0; k<=n; k++)
    {
        double x=2*k+1;
        x=1/(x*x);
        tmp=tmp+x;
    }
    return (tmp);
}

void main()
{
    int n;
    double y;
    printf("inserire n ");
    scanf("%d", &n);
    y=sommatoriaA(n);
    printf("la sucessione A dopo %d passagi vale %lf\n", n, y);
    y=sommatoriaB(n);
    printf("la sucessione B dopo %d passagi vale %lf\n", n, y);
}