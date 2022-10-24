#include <stdio.h>
#include <math.h>

float distanza(double x1, double y1, double x2, double y2)
{
    float tmp;
    tmp=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return (tmp);
}

int main()
{
    printf("inserire le coordinate (x1;y1) (x2;y2)\n");
    double x1, y1, x2, y2;
    printf("x1 ");
    scanf("%lf", &x1);
    printf("y1 ");
    scanf("%lf", &y1);
    printf("x2 ");
    scanf("%lf", &x2);
    printf("y2 ");
    scanf("%lf", &y2);
    printf("la distanza fra (%lf;%lf) e (%lf;%lf) equivale a %f\n", x1, y1, x2, y2, distanza(x1, y1, x2, y2));
}