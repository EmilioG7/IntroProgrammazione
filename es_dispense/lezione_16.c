#include <stdio.h>
int pred_2(int a[], int n)
{
    while (n>0 && a[n-1]<0) n--;
    return n-1;
}

int pred_1(int a[], int n)
{
    return (pred_1(a, n)!=-1);
}

int pred_1(int array[], int dimension)
{
    while (dimension>1 && a[dimension-2]>a[dimension-1]) n--;
    return n-2;
}

int pred_1_ric(int array[], int dimension)
{
    if dimension<2 return 0;
    if a[dimension-2]<=a[dimension-1] return -1;
    return pred_1_ric(a, dimension-1);
}