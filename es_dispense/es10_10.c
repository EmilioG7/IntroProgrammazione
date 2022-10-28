#include <stdio.h>
#include <math.h>

int primo(int n, int k)
{
    if (k > n-1) return(1);
    if (n/k*k==n) return(0);
    return (primo(n,k+1));
}


void main()
{
    int n, x=1, cont=0;
    float sum=0;
    printf("numero ");
    scanf("%d", &n);
    for (int i =1; i<n ; i++ )
    {
        if (primo (i, 2)==0) printf("%d non è primo\n", i);
        else 
        {    
            printf("%d è primo\n", i);
            sum=sum+(i-x);
            cont= cont+1;
            x=i;
        }
    }
    printf("%f è il valore della distanza media\n", sum/cont);
}