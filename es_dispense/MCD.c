#include <stdio.h>

void scambio(int *a, int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}

int mcd(int x,int y)
{
    while (x!=y)
    {
        if (x<y) scambio(&x, &y);
        x=x-y;
    }
    return x;
}

void main()
{
    int a, b;
  printf("numero a ");
  scanf("%d", &a);
  printf("numero b ");
  scanf("%d", &b);
  scambio(&a, &b);
  printf("a=%d  b=%d\nMCD=%d\n", a, b, mcd(a, b));
}