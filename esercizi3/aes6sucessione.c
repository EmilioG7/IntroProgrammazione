#include <stdio.h>

double a_nA(int n){
    double val;
    if (n>1)
    {
        val=(a_nA(n-1)+1)/2;
        return (val);
    }
    else
        return (0.5);
}

double a_nB(int n){
    double a1=0.5;
    for (int i=2; i<=n; i++)
    {
        a1=(a1+1)/2;
    }
    return (a1);
}

int main ()
{
    int n;
    printf("fino a che valore della sucessione? ");
    scanf("%d", &n);
    printf("succesione A\n\n");
    for (int i=n; i>0; i--)
    {
        printf("a_%d = %lf\n", i, a_nA(i));
    }

    printf("succesione B\n\n");
    for (int i=n; i>0; i--)
    {
        printf("a_%d = %lf\n", i, a_nB(i));
    }
}