#include<stdio.h>

void main()
{
  int a;
  int b;
  int prod=1;
  printf("base ");
  scanf("%d", &a);
  printf("potenza ");
  scanf("%d", &b);
  for (int i; i<b; i++)
    {
    prod=prod*a;
    }
  printf("la potenza è %d\n", prod);
}