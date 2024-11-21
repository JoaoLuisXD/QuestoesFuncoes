#include <stdio.h>
#include <stdlib.h>
#define tam 8
void funcao(int *vetf, int *vetng, int *vetps, int tamanho, int *contp, int *contn)
{
    *contp=0;
    *contn=0;
    for(int i=0; i<tamanho; i++)
    {
        if(vetf[i]>0)
        {
             vetps[(*contp)++]=vetf[i];
        }
        else
        {
            vetng[(*contn)++]=vetf[i];
        }
    }
}
int main()
{
    int vetf[tam],vetng[tam],vetps[tam];
    int contp, contn;
    for(int i=0; i<tam; i++)
    {
        scanf("%d",&vetf[i]);
    }
    funcao(vetf,vetng,vetps,8,&contp,&contn);
    printf("Numeros positivos:\n");
    for(int i = 0; i < contp; i++)
        {
        printf("%d\n", vetps[i]);
        }

    printf("Numeros negativos ou zero:\n");
    for(int i = 0; i < contn; i++)
        {
        printf("%d\n", vetng[i]);
        }

    return 0;
}
