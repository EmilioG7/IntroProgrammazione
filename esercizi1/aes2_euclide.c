#include <stdio.h>

void main()
{
  int x;
  int y;
  int x1;
  int y1;
  printf("primo numero ");
  scanf("%d", &x);
  printf("secondo numero ");
  scanf("%d", &y);
  x1=x;
  y1=y;
  while(x !=y)
  {
    if (x<y)
    {
      y=y-x;
    }
    else
    {
      x=x-y;
    }
  }
  printf("il MCD fra %d e %d è %d\n", x1, y1, x);
}