#include <stdio.h>
#include <stdlib.h>
int funcao (int n)
{
    if(n<1||n>9)
    {
       printf("numero invalido");
       return;
    }
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n;j++)
        {
            printf("|%d|",i*j);
        }
        printf("\n");
    }
}
int main()
{
    int tabela;
    printf("digite um numero de 1 a 9: ");
    scanf("%d",&tabela);
    funcao(tabela);

   return 0;
}
