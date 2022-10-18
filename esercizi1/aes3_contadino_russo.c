#include <stdio.h>

void main()
{
  int n1;
  int n2;
  int sum=0;
  printf("primo numero ");
  scanf("%d", &n1);
  printf("secondo numero ");
  scanf("%d", &n2);
  while(n2!=1)
  {
    n1=n1*2;
    n2=n2/2;
    if(n2/2*2!=n2)
    {
      sum=sum+n1;
    }
  }
  printf("il prodotto è %d\n", sum);
}