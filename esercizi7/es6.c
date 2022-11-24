#include <stdio.h>

void bubble_sort(int a[], int dimension)
{
    if (dimension<=2)
    {
        if (a[0]>a[1])
        {
            int tmp= a[0];
            a[0]=a[1];
            a[1]=tmp;
        }
    }
    else bubble_sort(a, dimension-1);
    printf("{");
    for (int i=0; i<dimension; i++) printf("%d, ", a[i]);
    printf("}\n");
    int i=dimension;
    while(a[i]<a[i-1] && i>0)
    {
        int tmp=a[i];
        a[i]=a[i-1];
        a[i-1]=tmp;
        i--;
    }
}

int my_fun(int a[], int dimension, int k)
{
    bubble_sort(a, dimension);
    return a[k-1];
}

void main ()
{
    int a[5]={4,3,2,1,0}; // {0,-11,10,0,1} {0,1,2,3,4}
    int dim=5;
    int k;
    printf("k-esimo elemento più piccolo? ");
    scanf("%d", &k);
    k = my_fun(a, dim-1, k); 
    printf("{");
    for (int i=0; i<dim; i++) printf("%d, ", a[i]);
    printf("}\n");
    printf("k = %d\n", k);

}