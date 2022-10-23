#include <stdio.h>

void main()
{
    int n;
    int k;
    printf("inserire n ");
    scanf("%d", &n);
    printf("inserire k ");
    scanf("%d", &k);
    if(n<k)
    {
        printf("coeficiente binomianle di %d su %d è 0\n", n, k);
    }
    else
    {
        int num=1;
        for(int i=1; i<=n; i++)  // n!
        {
            num=num*i;
        }
        int denk=1;
        for(int i=1; i<=k; i++)  // k!
        {
            denk=denk*i;
        }
        int dennk=1;
        for(int i=1; i<=n-k; i++)  // (n-k)!
        {
          dennk=dennk*i;
        }
        printf("coeficiente binomianle di %d su %d è %d\n", n, k, num/(denk*dennk));
    }
}