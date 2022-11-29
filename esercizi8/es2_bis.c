//esiste un indice dell'array per il quale ogni valore sucessivo
//ha un valore maggiore dell'indice trovato
#include <stdio.h>
int esiste(int a[], int dim)
{
    int j=0;
    int flag=0;
    for (int i=0; i<dim; i++)
    {
        if (i!=a[i])
        {
            int cont =0;
            while(a[cont]<i&&cont<i) cont++;
            if (cont==i)
            {
                cont++;
                while (a[cont]>i&&cont<dim) cont++;
            }
            if (cont==dim)
            {
                printf("valore %d\n", a[i]);
                flag++;
            }
        }
    }
    return flag;
}

void main()
{
    int a[8]={1,5,-1,2,4,5,7,8}; // {4,3,2,1,0} {0,-11,10,0,1} {0,1,2,3,4}
    int dim=8;
    printf("ci sono %d valori utili\n", esiste(a, dim));
}


