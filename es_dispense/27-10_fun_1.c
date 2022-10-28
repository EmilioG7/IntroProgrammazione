#include <stdio.h>
int potenza(int b, int e)
{
    if (e==0) return(1);
    return(b*potenza(b,e-1));
}

int si(int n)
{
    return(potenza(2,n));
}

float x_ab(int a, int b)
{
    float prod=1;
    for (int i=a; i<=b/2; i++)
    {
        prod=prod*(si(i)/a);//A
    }
    return(prod-b);
}

int main()
{
    int a,b;
    printf("number a ");
    scanf("%d", &a);
    printf("number b ");
    scanf("%d", &b);//B
    printf("%f\n", x_ab(a, b));
}