#include <stdio.h>

int valuta (int a[], int b[], int dim_a, int dim_b)
{
    int sum_b=0;
    for (int i=0; i<dim_b; i++) sum_b = sum_b + b[i];
    int flag=1;
    int i=0;
    while (i<dim_a && flag)
    {
        if (a[i]==sum_b) flag=0;
        i++;
    }
    return !flag;
}

void main ()
{
    int a[5]={0,1,2,3,4}; // {0,-11,10,0,1} {0,1,2,3,4}
    int b[6]={2,0,1,1,0,0};
    int dim_a=5;
    int dim_b=6;
    int k=valuta(a, b, dim_a, dim_b);
    printf("%d\n", k);
}