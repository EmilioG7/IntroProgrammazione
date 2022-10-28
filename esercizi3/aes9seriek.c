#include <stdio.h>

float potenza(float b, int e)
{
    float tmp=1;
    for (int i=0; i<e; i++)
        tmp = tmp * b;
    return(tmp);
}

double serie (int n, float k)
{
    double s_n=0;
    for (int i=1; i<=n; i++)
        s_n=s_n+((i*potenza(k, i+1))/potenza(3, i));
    return (s_n);
}

void main()
{
    int n;
    float k;
    printf("value of n ");
    scanf("%d", &n);
    printf("value of k ");
    scanf("%f", &k);
    for (float i=1; i<10*k; i++)
        printf("the value of the serie %f at the %d step is %lf\n", i/10, n, serie(n, i/10));
}