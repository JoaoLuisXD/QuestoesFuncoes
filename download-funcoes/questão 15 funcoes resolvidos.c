#include <stdio.h>
#include <stdlib.h>
void funcao (float vet[])
{
    int i,j;
    for(int i=0;i<5;i++)
    {
        scanf("%f", &vet[i]);
    }
    float aux=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(vet[i]>vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}
int main()
{
    float vet[5];
    funcao(vet);
    for(int i=0;i<5;i++)
    {
        printf("%f\n",vet[i]);
    }

   return 0;
}


