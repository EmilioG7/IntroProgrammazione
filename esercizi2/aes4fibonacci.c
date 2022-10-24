#include <stdio.h>

void main()
{
    int n, fn_1=1, fn_2=0;
    printf("inserire n ");
    scanf("%d", &n);
    printf("F(0)=%d\n", fn_2);
    printf("F(1)=%d\n", fn_1);
    for(int i=2; i<=n; i++)
    {
        fn_1=fn_1+fn_2;
        fn_2=fn_1-fn_2;
        printf("F(%d) = %d\n", i, fn_1);
    }
}
