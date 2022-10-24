//si consideri il caso in cui epsilon sia fissato a 0.00000001

#include <stdio.h>

int valuta(double x, double y, double e)
{
    double diff=x-y;
    if (x<y)
        diff=y-x;
    if (diff>e)
        return(0);
    else
        return(1);
}

void main ()
{
    double x, y, e;
    e=0.000001;
    printf("valore di x ");
    scanf("%lf", &x);
    printf("valore di y ");
    scanf("%lf", &y);
    int ris=valuta(x, y, e);
    if (ris==0)
        printf("i due numeri sono diversi con epsilon = %lf\n", e);
    else
        printf("i due numeri sono uguali con epsilon = %lf\n", e);
}