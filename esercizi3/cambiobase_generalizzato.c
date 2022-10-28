#include <stdio.h> //partiamo dal caso base di convertire in decimale

int potenza(int b, int e)
{
    int tmp=1;
    for (int i=0; i<e; i++)
    {
        tmp = tmp * b;
    }
    return(tmp);
}

int cambiobase(int b, int n) //sia b la base di partenza del numero sia k la base di arrivo
{
    int ris=0;
    for (int i =1; n>0; i++)
    {
        int res = n%potenza(10, i);  // res è il resto 
        ris = ris + res*potenza(b,i-1);
        n=n-res*potenza(10, i-1);
    }
    return (ris);
}
//valutare il resto della divisione per la base alla (posizione della cifra)

int main ()
{
    int val, base;
    printf("numero ");
    scanf("%d", &val);
    printf("in base ");
    scanf("%d", &base);
    printf("in base decimale %d è %d\n", val, cambiobase(base, val));
}