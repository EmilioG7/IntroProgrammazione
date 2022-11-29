#include <stdio.h>
#include <stdlib.h>

int *fondi_ord(int a[], int b[], int aex, int blen)
{
    int dim=aex+blen;
    int *def=malloc(sizeof(int)*dim);
    int indef=0;
    int inda=0;
    int indb=0;
    while(inda<aex && indb<blen)
    {
        if (a[inda]<b[indb])
        {
            def[indef]=a[inda];
            inda++;
        }
        else
        {
            def[indef]=b[indb];
            indb++;
        }
        indef++;
    }
    if (inda>=aex)
    {
        while(indb<blen)
        {
            def[indef]=b[indb];
            indb++;
            indef++;
        }
    }
    else
    {
        while(inda<aex)
        {
            def[indef]=a[inda];
            inda++;
            indef++;
        }
    }
    return def;
}

void main()
{
    int a[5]={1,2,3,7,9}; // {4,3,2,1,0} {0,-11,10,0,1} {0,1,2,3,4}
    int dima=5;
    int b[5]={2,4,6,8,10}; // {4,3,2,1,0} {0,-11,10,0,1} {0,1,2,3,4}
    int dimb=5;
    int *p;
    p=fondi_ord(a, b, dima, dimb);
    printf("{ ");
    for (int k=0; k<dima+dimb; k++) printf("%d, ", p[k]);
    printf("}\n");
}