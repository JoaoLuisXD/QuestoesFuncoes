#include <stdio.h>
#include <stdlib.h>
void funcao(float vet[])
{
    int soma=0;
    for(int i=0;i<20;i++)
    {
       soma=soma+vet[i];
    }
    printf("a soma e: %d",soma);
}
int main()
{
    float vet[20];
    for(int i=0;i<20;i++)
    {
       scanf("%f",&vet[i]);
    }
    funcao(vet);
   return 0;
}
