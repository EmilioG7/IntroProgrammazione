#include <stdio.h>

int min3(int a, int b, int c)
{
    int tmp=a;
    if (tmp>b)
        tmp=b;
    if (tmp>c)
        tmp=c;
    return(tmp);
}

void test(int x, int y)
{
    int z, max;;
    max=x;
    if (x<y)
        max=y;
    for (int i=1; i<=max; i++)
    {
        z=min3(x,y,i);
        printf("nella tripletta (%d, %d, %d) il minimo è %d\n", x, y, i, z);
    }
}

void main()
{
    int x,y;
    printf("inserire primo numero ");
    scanf("%d", &x);
    printf("inserire secondo numero ");
    scanf("%d", &y);
    test(x,y);
}