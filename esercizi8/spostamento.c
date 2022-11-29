#include <stdio.h>
#include <stdlib.h>

void p_arr(int a[], int dim)
{
    printf("{ ");
    for (int k=0; k<dim-1; k++) printf("%d, ", a[k]);
    printf("%d }\n",a[dim-1]);
}

int somma_in_z(int a, int b, int k)
{
    int ris=(a+b)%k;
    if(ris<0) ris=k+ris;
    return ris;
}

void sposta_k_pos(int a[], int dim, int k)
{
    int *var=malloc(sizeof(int)*dim);
    k=k%dim;
    if (k<0) k=dim+k;
    for (int i=0; i<dim-k; i++)
    {
        var[i+k]=a[i];
        printf("valore %d va in pos %d\n", i, i+k);
    }   
    for (int i=dim-k; i<dim; i++)
    {
        var[i+k-dim]=a[i];
        printf("valore %d va in pos %d\n", i, i+k-dim);
    }
    for (int i=0; i<dim; i++) a[i]=var[i];
    free(var);
}

void main()
{
    int a[7]={7,6,5,4,3,2,1}; // [16]{1,0,5,0,4,4,6,0,1,0,5,0,4,4,6,0}
    // [7]{7,6,5,4,3,2,1} {4,3,2,1,0} {0,-11,10,0,1} {0,1,2,3,4}
    int dim=7;
    printf("array di partenza ");
    p_arr(a,dim);
    sposta_k_pos(a, dim, -7);
    printf("array ordinato");
    p_arr(a, dim);
}