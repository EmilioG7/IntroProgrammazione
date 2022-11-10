#include<stdio.h>

// ricorsivo
float media_ric(int n)
{
    int x;
    printf("nuovo valore ");
    scanf("%d", &x);
    if (n==1) return (x);
    return (((n-1)*media_ric(n-1)+x)/n);
}
// media sucessiva = ((n-1)*media + x_n)/n

// iterativo
float media_ite(int n)
{
    float media=1;
    int val;
    printf("primo valore ");
    scanf("%f", &media);
    
    for (int i=2; i<=n; i++)
    {
        printf("numero sucessivo ");
        scanf("%d", &val);
        media = media +(val - media)/i;
    }
    return media;
}

void main ()
{
    int n;
    printf("quanti valori ");
    scanf("%d", &n);
    printf("media ricorsiva %f\n", media_ric(n));
    printf("media iterativa %f\n", media_ite(n));
}