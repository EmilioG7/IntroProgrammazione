#include <stdio.h>

int potenza(int b, int e)
{
    int ris=1;
    for (int i=0; i<=e; i++) ris=ris*b;
    return ris;
}

int array_numero(int a[], int dim)
{
    int ris=0;
    for (int i=0; i<dim; i++) ris=ris+a[i]*potenza(10,i);
    return ris;
}

void permuta5(int a[])
{
    int dim =5;
    int amod[5];
    for (int i=0; i<dim; i++) amod[i]=a[i];
    int j=0;
    int anum=array_numero(a, dim);
    do
    {
        if (j>=dim)
        {
            int tmp=a[j];
            amod[j]=amod[0];
            amod[0]=tmp;
            j=j-dim;
        }
        else
        {
            int tmp=amod[j];
            amod[j]=amod[j+1];
            amod[j+1]=tmp;
            j=j+1;
        }
        printf("{ ");
        for (int k=0; k<dim; k++) printf("%d, ", amod[k]);
        printf("}\n");
    }
    while(anum!=array_numero(amod, dim));
}

void main()
{
    int a[5]={1,2,3,4,5}; // {4,3,2,1,0} {0,-11,10,0,1} {0,1,2,3,4}
    int dim=5;
    permuta5(a);
}