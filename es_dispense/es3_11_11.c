#include <stdio.h>
// somma armonica con funzione ricorsiva 
void somma_armonica(int n, double *h)
{
    if(n==1) *h=1.0;
    else 
    {
        somma_armonica(n-1, h);
        *h=*h+1.0/n;
    }
}

int main()
{
    int n;
    double h;
    printf("valore di n");
    scanf("%d", &n);
    for (int i; i<n; i++)
    {
        somma_armonica(i, &h);
        printf("passaggio %d la somma vale %lf\n", i, h);
    }
}