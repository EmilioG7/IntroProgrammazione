#include <stdio.h>
void p_arr(int a[], int dim)
{
    printf("{ ");
    for (int k=0; k<dim-1; k++) printf("%d, ", a[k]);
    printf("%d }\n",a[dim-1]);
}

void a_onda(int a[], int dim)
{
    for (int i=0; i<dim-1; i++)
    {
        if(i%2)
        {
            if(a[i]>a[i+1])
            {
                int tmp=a[i];
                a[i]=a[i+1];
                a[i+1]=tmp;
            }
        }
        else
        {
            if(a[i]<a[i+1])
            {
                int tmp=a[i];
                a[i]=a[i+1];
                a[i+1]=tmp;
            }
        }
    }
}

void main()
{
    int a[16]={0,1,0,5,0,4,4,6,0,1,0,5,0,4,4,6}; // [16]{1,0,5,0,4,4,6,0,1,0,5,0,4,4,6,0}
    // [7]{7,6,5,4,3,2,1} {4,3,2,1,0} {0,-11,10,0,1} {0,1,2,3,4}
    int dim=16;
    printf("array di partenza ");
    p_arr(a,dim);
    a_onda(a, dim);
    printf("array ordinato");
    p_arr(a, dim);
}