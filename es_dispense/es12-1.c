#include<stdio.h>

float my_fun(int x[], int dim)
{
    float mu = media( x, dim);
    float sum=0;
    for (int i=0; i<dim; i++)
    {
        sum=sum+(x[i]-mu)*(x[i]-mu);
    }
    return sum/dim;
}

int media (int x[], int dim)
{
    float med=0;
    for (int i=0; i<dim; i++) med=med+x[i];
    return (med/dim);
}

void main ()
{
    int x[10]={1, 2, 3, 4, 5, 6, };
    int dim=10;
}