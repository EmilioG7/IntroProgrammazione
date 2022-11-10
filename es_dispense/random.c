#include <stdio.h>
#include <math.h>

int comp(int a)
{
  int divisori = 0;
  for (int i = 1; i <= a; i++)
  {
    int x = 0;
    int rad_i=sqrt(i)+1;
    printf("rad %d, x %d, divisori %d\n", rad_i, x, divisori);
    for (int j = 0; j < rad_i; j++)
      {
        if (i % j == 0)
        {
          x++;
        }

        printf("x_2 = %d\n", x);
      }
    if (x > divisori)
    {
      printf("%d\n", i);
      divisori = x;
    }
  }
}


int main()
{
  int n;

  printf("inserisci n maggiore di 0: ");
  scanf("%d", &n);

  int n1 = comp(n);
}