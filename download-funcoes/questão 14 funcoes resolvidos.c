#include <stdio.h>
#include <stdlib.h>
void funcao(int vet1[],int vet2[],int vet3[])
{
    for(int i=0;i<10;i++)
    {
       vet3[i]=vet1[i];
    }
    for(int i=0;i<10;i++)
    {
       vet3[i+5]=vet2[i];
    }
}
int main()
{
    int vet1[5],vet2[5],vet3[10];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vet1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vet2[i]);
    }
    funcao(vet1,vet2,vet3);
    for (int i = 0; i < 10; i++)
    {
        printf("|%d|", vet3[i]);
    }
   return 0;
}
