#include<stdio.h>

void main()
{
  int n;
  int max;
  int min;
  int val;
  printf("inserire la quantità di valori ");
  scanf("%d", &n);
  if (n>0)
    {
    printf("inserire il valore 1 ");
    scanf("%d", &val);
    min=val;
    max=val;
    for (int i=1; i<n; i++)
      {
      printf("inserire il valore %d ", i+1);
      scanf("%d", &val);
      if (val<min)
        min=val;
      if (val>max)
        max=val;
      }
    }
  if (n>0)
    {
    printf("il massimo dei valori inseriti è %d; mentre il minimo è %d\n", max, min);
    }
  else
    {
    printf("non si può inserire meno di 1 valore. riavviare");
    }
}