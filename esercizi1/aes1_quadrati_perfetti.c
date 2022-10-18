#include <stdio.h>

void main()
{
  int n;
  printf("quanti numeri da considerare? ");
  scanf("%d", &n);
  for (int i=1; i<=n; i++)
    {
    printf("il quadrato di %d è %d\n", i, i*i);
    }
}touch