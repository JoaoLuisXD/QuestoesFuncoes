#include <stdio.h>
#include <stdlib.h>
void funcao(int vetx[])
{
    int veta[5],vetb[5];
    int contpstv=0,contzn=0;
    for(int i=0;i<5;i++)
    {
        if(vetx[i]>0)
        {
            veta[contpstv] = vetx[i];
            contpstv++;
        }
        else
        {
            vetb[contzn] = vetx[i];
            contzn++;
        }
    }
        if(contpstv>0)
        {
            printf("veta = ");
            for(int i=0;i<contpstv;i++)
            {
                printf("|%d|", veta[i]);
            }

        }
        if(contzn>0)
        {
            printf("vetb = ");
            for(int i=0;i<contzn;i++)
            {
                printf("|%d|", vetb[i]);
            }
        }
}
int main()
{
    int vetx[5];
    for(int i=0;i<5;i++)
    {
         scanf("%d",&vetx[i]);
    }
    funcao(vetx);
   return 0;
}
