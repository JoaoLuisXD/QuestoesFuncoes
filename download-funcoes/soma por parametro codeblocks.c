#include <stdio.h>
int funcao (int a,int b)
{
    int soma=0;
    for(int i=a+1;i<b;i++)
    {
        soma = soma + i;
    }
    return soma;
}
int main()
{
    int n1,n2,soma;
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("%d", funcao(n1,n2));
    return 0;
}
