#include <stdio.h>

void main()
{
  int n;
  int count=1;
  float sum=0;
  printf("inserisci il numero (x_%d) ", count);
  scanf("%d", &n);
  while (n !=0)
    {
      sum=sum+n;
      count=count+1;
      printf("inserisci il numero (x_%d) ", count);
      scanf("%d", &n);
    }
  if(sum=0.0)
    {
    printf("con 0 il programma termina. riavviare e inserire numeri diffenti da 0\n");
    }
  else
    {
    sum=sum/(count-1);
    printf("la media dei numeri inseriti è %f\n", sum);
    }
  }