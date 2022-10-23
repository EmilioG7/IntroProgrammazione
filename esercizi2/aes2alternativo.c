#include <stdio.h>

void main()
{
    int n;
    int k;
    int sum=0;
    printf("inserire n ");
    scanf("%d", &n);
    printf("inserire k ");
    scanf("%d", &k);
    int tmp=k;
    for(int i=1; i<=n; i++)
    {
        sum=sum+tmp;
        tmp=tmp*k;
    }
    printf("sommatoria %d\n", sum);
}