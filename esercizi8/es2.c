//Si scriva una funzione che dato un array 𝑎 di dimensione 𝑛 e un numero 𝑘, riordini l’array in modo che soddisfi il predicato 
//∃ 𝑗∈[0,𝑛) | ∀ 𝑖∈[0,𝑗]𝑎[𝑖]≤𝑘∧∀ 𝑖∈[𝑗,𝑛)𝑎[𝑖]≥𝑘. 

#include <stdio.h>

void ordina_su_k(int a[], int dim, int k)
{
    int punto=0;
    for (int i=0; i<dim; i++)
    {
        if (a[i]<k)
        {
            int tmp;
            tmp=a[i];
            a[i]=a[punto];
            a[punto]=tmp;
            punto++;
        }
    }
}

void main()
{
    int a[8]={1,5,1,2,4,-3,7,5}; // {4,3,2,1,0} {0,-11,10,0,1} {0,1,2,3,4}
    int dim=8;
    ordina_su_k(a, dim, 3);
    printf("{ ");
    for (int k=0; k<dim; k++) printf("%d, ", a[k]);
    printf("}\n");
}
