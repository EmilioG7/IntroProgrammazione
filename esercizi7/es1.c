#include <stdio.h>

int sum_pari(int a[], int dimension)
{
    float sum=0;
    for (int i=0; i<dimension; i++)
    {
        if (a[i]%2==0) sum = sum + a[i];
    }
    return sum;
}

int fun (int a[], int b[], int dimension){
    int index_b=0;
    for (int i; i<dimension; i++)
    {
        if (a[i]%2==0)
        {
            b[index_b]=i;
            index_b=+1;
        }
    }
    return b;
}

void main ()
{
    int a[5]={0,-11,10,0,1};
    int dim=5;
    int k=sum_pari(a, dim);
    printf("%d\n", k);
}