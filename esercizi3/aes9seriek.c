#include <stdio.h>

float potenza(float b, int e)
{
    float tmp=1;
    for (int i=0; i<e; i++)
        tmp = tmp * b;
    return(tmp);
}

double serie (int n, float k)
{
    double s_n=0;
    for (int i=1; i<=n; i++)
        s_n=s_n+((i*potenza(k, i+1))/potenza(3, i));
    return (s_n);
}

void main()
{
    int n;
    float k, q;
    printf("numero di passaggi della serie ");
    scanf("%d", &n);
    printf("valore di k minimo ");
    scanf("%f", &q);
    printf("valore di k massimo ");
    scanf("%f", &k);
    for (float i=q; i<10*k; i++)
    {
        double z=serie(n, i/10)/serie(2*n, i/10);
        printf("rapporto tra s_n e s_2n con k=%f è :%lf\n", i/10, z);
    }
}