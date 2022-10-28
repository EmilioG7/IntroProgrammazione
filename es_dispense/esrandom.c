# include <stdio.h>

int s1(int j)
{
    if (j==0) return 0;
    return (j+s1(j-1));
}

int s2(int a, int b)
{
    int sum=0;
    for (int i=a; i<=b; i++)
        sum=sum+s1(i);
    return(sum);
}

void main ()
{
    int n;
    printf("numero ");
    scanf("%d", &n);
    for (int i =0; i<n; i++)
        printf("%d\n", s2(1, i));
}