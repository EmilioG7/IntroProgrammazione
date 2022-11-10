#include<stdio.h>

int s_n(int n, int a1)
{
    int tmp;
    if (n==0) return(a1);
    printf("numero sucessivo ");
    scanf("%d", &tmp);
    if (n==1) return(a1+tmp);
    return((a1+tmp)*s_n(n-1, tmp));
}

void main ()
{
    int n, a1;
    printf("numero di elementi ");
    scanf("%d", &n);
    printf("primo elemento ");
    scanf("%d", &a1);
    printf("la sucessione ha risultato = %d\n", s_n(n-1, a1));
}