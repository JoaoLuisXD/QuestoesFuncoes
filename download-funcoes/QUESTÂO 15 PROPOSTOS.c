#include <stdio.h>
#include <stdlib.h>
void funcao(int vet[])
{
    int cont=0;
    for(int i=0;i<5;i++)
    {
       if(vet[i]%2==0)
        {
           cont++;
        }
    }
    printf("qtd pares = %d", cont);
}
int main()
{
    int vet[5];
    for(int i=0;i<5;i++)
    {
         scanf("%d",&vet[i]);
    }
    funcao(vet);
   return 0;
}
