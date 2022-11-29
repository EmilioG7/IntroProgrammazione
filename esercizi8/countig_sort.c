#include <stdio.h>
#include <stdlib.h>
void p_arr(int a[], int dim)
{
    printf("{ ");
    for (int k=0; k<dim-1; k++) printf("%d, ", a[k]);
    printf("%d }\n",a[dim-1]);
}

void bubble_sort(int a[], int dimension)
{
    if (dimension==2)
    {
        if (a[1]<a[0])
        {
            int tmp= a[0];
            a[0]=a[1];
            a[1]=tmp;
        }
    }
    else bubble_sort(a, dimension-1);
    int i=dimension-1;
    while(a[i]<a[i-1] && i>0)
    {
        int tmp=a[i-1];
        a[i-1]=a[i];
        a[i]=tmp;
        i--;
    }
}

void counting_sort(int a[], int dima)
{
    int dimval=1;
    int *val=malloc(sizeof(int)*dima);
    val[0]=a[0];
    for (int i=1; i<dima; i++)
    {
        int flag=0;
        for (int j=0; j<dimval; j++)
        {
            if (val[j]==a[i])
            {
                flag++;
            }
        }
        if (!flag)
        {
            val[dimval]=a[i];
            dimval++;
        }
    }
    p_arr(val, dimval);// fino a qui viene definito l'array non ordinato con tutti i valori
    // ordinamento dell'array dei valori con bubble sort
    bubble_sort(val, dimval);
    printf("array dei valori ordinato ");
    p_arr(val, dimval);
    int *num=malloc(sizeof(int)*dimval); //creiamo l'array delle quantità dei numeri
    for (int k=0; k<dimval; k++)
    {
        int count=0;
        for (int i=0; i<dima; i++)
        {
            if (a[i]==val[k]) count++;
        }
        num[k]=count;
    }
    printf("array della quantità dei valori ");
    p_arr(num, dimval); // abbiamo i 2 array necessari alla risoluzione
    int count=0;
    for (int k=0; k<dimval; k++)
    {
        for (int j=0; j<num[k]; j++)
        {
            a[count]=val[k];
            count++;
        }
    }
    free(val);
    free(num);
}

void main()
{
    int a[16]={0,1,0,5,0,4,4,6,0,1,0,5,0,4,4,6}; 
    // {7,6,5,4,3,2,1} {4,3,2,1,0} {0,-11,10,0,1} {0,1,2,3,4}
    int dim=16;
    printf("array di partenza ");
    p_arr(a,dim);
    counting_sort(a, dim);
    printf("array ordinato");
    p_arr(a, dim);
}