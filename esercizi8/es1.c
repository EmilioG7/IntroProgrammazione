// Si scriva una funzione che dato un array 𝑎 di dimensione 𝑛,
//allochi un array che contiene gli elementi di 𝑎 senza duplicati.
//La funzione deve ritornare il puntatore all’array.
#include <stdlib.h>
#include <stdio.h>

int *delet_rep(int a[], int dim)
{
    int *def=malloc(sizeof(int)*dim);
    int dimf=0;
    def[0]=a[0];
    for (int i=1; i<dim; i++)
    {
        int flag=0;
        for (int j=0; j<dimf+1; j++)
        {
            if(a[i]==def[j]) flag=1;
        }
        if (flag==0)
        {
            dimf++;
            def[dimf]=a[i];
        }
    }
    dimf=dimf+1;
    for (int k=dimf; k<dim; k++) def[k]=0;
    printf("{ ");
    for (int k=0; k<dim; k++) printf("%d, ", def[k]);
    printf("}\n");
    printf("dimf=%d\n",dimf);
    int *ret=malloc(sizeof(int)*dimf);
    for (int i=0; i<dimf; i++) ret[i]=def[i];
    free (def);
    printf("{ ");
    for (int k=0; k<dimf; k++) printf("%d, ", ret[k]);
    printf("}\n");
    return ret;
}

void main()
{
    int a[5]={1,5,1,2,0}; // {4,3,2,1,0} {0,-11,10,0,1} {0,1,2,3,4}
    int dim=5;
    delet_rep(a, dim);
}

//creiamo una array in memoria dinamica nel main con dimensione fissata
//nella funzione passiamo array e dimensione
// creiamo una array dinaminco con dimesione da definire
// ogni volta che valutamo un valore dell mainarray,
//scorriamo l'array definitivo per vedere se ho già salvato il valore
// incremento la dimensione

// ritorno la testa dell'array