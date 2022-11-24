#include <stdio.h>

int array_triangolare(int a[], int dimension)
{
    int num=1;
    for (int i=0; i<dimension; i++)
    {
        a[i]=num;
        num = num + i+2;
    }
}

void main ()
{
    int a[10]; // {0,-11,10,0,1} {0,1,2,3,4}
    int dim=10;
    array_triangolare(a, dim);
    printf("{");
    for (int i=0; i<dim; i++) printf("%d, ", a[i]);
    printf("}\n");
}