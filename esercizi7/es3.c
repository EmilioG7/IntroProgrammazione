#include <stdio.h>

int prod_scalare(int a[], int b[], int dimension)
{
    int prod=0;
    for (int i=0; i<dimension; i++) prod = prod + a[i]*b[i];
    return prod;
}

void main ()
{
    int a[5]={0,1,2,3,4}; // {0,-11,10,0,1} {0,1,2,3,4}
    int b[5]={0,1,2,3,4};
    int dim=5;
    int k=prod_scalare(a, b, dim);
    printf("%d\n", k);
}