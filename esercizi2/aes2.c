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
    for(int i=1; i<=n; i++)
    {
        int pot=k;
        for(int x=2; x<=i; x++)
        {
            pot=pot*k;
//            printf("%d", pot);
        }
        sum=sum+pot;
    }
    printf("sommatoria %d\n", sum);
}