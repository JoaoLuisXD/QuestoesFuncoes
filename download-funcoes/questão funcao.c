#include <stdio.h>
#include <stdlib.h>
int funcao (int a, int b)
{
    int aux=0,soma=0;
    if(b<a)
    {
        aux=a;
        a=b;
        b=aux;
    }
    for(int i=a;i<=b;i++)
    {
        soma=soma+i;
    }
    return soma;
}
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int resultado = funcao(n1,n2);
    printf("%d",resultado);
}
