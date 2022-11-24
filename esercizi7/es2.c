#include <stdio.h>

int verifica_diversi(int a[], int dimension)
{
    int flag=1;
    for (int i=0; i<dimension && flag; i++)
    {
        int j=0;
        while(j<dimension && flag)
        {
            if (j==i) j++;
            if (a[j]==a[i]) flag =0;
            j++;
        }
    }
    return flag;
}

void main ()
{
    int a[5]={0,1,2,3,4}; // {0,-11,10,0,1} {0,1,2,3,4}
    int dim=5;
    int k=verifica_diversi(a, dim);
    printf("%d\n", k);
}